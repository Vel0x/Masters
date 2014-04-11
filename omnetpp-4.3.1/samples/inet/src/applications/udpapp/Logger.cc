//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "Logger.h"
#include <omnetpp.h>


Logger::Logger() {
    level = TRACE;
    myfile.open("log.txt");
}

Logger::~Logger() {
    myfile.close();
}

Logger& Logger::getInstance(){
    static Logger instance;
    return instance;
}

void Logger::setLevel(int l){
    level = l;
}

void Logger::setLocation(char* loc){
    myfile.close();
    logLocation = loc;
    myfile.open(loc);
}

void Logger::trace(char* format, ...){
    char* msg;
    va_list args;
    va_start( args, format );
    vasprintf(&msg, format, args );
    va_end( args );
    if(level <= TRACE){
        filelog(msg);
    }
    free(msg);
}

void Logger::info(char* format, ...){
    char* msg;
    va_list args;
    va_start( args, format );
    vasprintf(&msg, format, args );
    va_end( args );
    if(level <= INFO){
        filelog(msg);
    }
    free(msg);
}

void Logger::error(char* format, ...){
    char* msg;
    va_list args;
    va_start( args, format );
    vasprintf(&msg, format, args );
    va_end( args );
    if(level <= ERROR){
        filelog(msg);
    }
    free(msg);
}

void Logger::fatal(char* format, ...){
    char* msg;
    va_list args;
    va_start( args, format );
    vasprintf(&msg, format, args );
    va_end( args );
    if(level <= FATAL){
        filelog(msg);
    }
    free(msg);
}

void Logger::filelog(char* format, ...){
    char* msg;
    va_list args;
    va_start( args, format );
    vasprintf(&msg, format, args );
    va_end( args );
    int seconds = simTime().inUnit(SIMTIME_S);
    int milliseconds = simTime().inUnit(SIMTIME_NS) - (seconds*1000000000);
    char* newformatstr = "%05d.%09d | %s";
    char* timemsg = (char*)malloc(400);
    sprintf(timemsg,newformatstr,seconds,milliseconds,msg);
    printf("%s",timemsg);
    log(timemsg);
    free(msg);
    free(timemsg);
}

void Logger::log(char* s){
    myfile << s;
}

