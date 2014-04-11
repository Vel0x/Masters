from subprocess import call
import sys

call(["rm", "omnetpp.ini"])
call(["cp","omnetppini/" + sys.argv[1] , "omnetpp.ini"])
for run in range(0,10):
    print "Running",run
    call(["../miximexamples", "-r", str(run), "-u", "Cmdenv", "-n", "..:../../examples-inet:../../src/base:../../src/modules:../../../inet/examples:../../../inet/src", "-l", "../../src/mixim", "-l", "../../../inet/src/inet", "omnetpp.ini"])
