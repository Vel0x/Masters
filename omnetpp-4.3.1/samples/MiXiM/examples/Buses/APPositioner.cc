

#include <omnetpp.h>
#include "IMobility.h"


class APPositioner : public cSimpleModule, public IMobility
{
  protected:
    // configuration
    double playgroundLat,playgroundLon;  // NW corner of playground, in degrees
    double playgroundHeight,playgroundWidth;  // in meters
    double x, y; // longitude and latitude,
    int id; //Id of this bus
    simsignal_t mobilityStateChangedSignal;


  public:
     APPositioner();
     virtual ~APPositioner();
     virtual Coord getCurrentPosition();
     virtual Coord getCurrentSpeed();
     double getX() { return x; }
     double getY() { return y; }


  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    double* getPlaygroundPosition(double x, double y);

};

Define_Module(APPositioner);

APPositioner::APPositioner()
{
}

APPositioner::~APPositioner()
{
}

Coord APPositioner::getCurrentPosition(){
    Coord c = Coord(x,y,0);
    return c;
}

Coord APPositioner::getCurrentSpeed(){
    Coord c = Coord(0,0,0);
    return c;
}


void APPositioner::initialize()
{
    //printf("BUS INITIALISATION\n");
    mobilityStateChangedSignal = registerSignal("mobilityStateChanged");
    id = getParentModule()->par("id");

    double lat = getParentModule()->par("y");
    double lon = getParentModule()->par("x");

    printf("AP[%d] Position: %f,%f\n",id,lon,lat);

    double *positions = getPlaygroundPosition(lon,lat);

    printf("AP[%d] Position: %d,%d\n",id,(int)(positions[0]+0.5),(int)(positions[1]+0.5));

    this->getParentModule()->getDisplayString().setTagArg("p", 0, (int)(positions[0]+0.5));
    this->getParentModule()->getDisplayString().setTagArg("p", 1, (int)(positions[1]+0.5));

}

void APPositioner::handleMessage(cMessage *msg)
{
    delete msg;
}


double* APPositioner::getPlaygroundPosition(double x, double y){
    //This is duplicated in the access point app layer
    //Top left corner had coordinates 56, -3.4

    double TOPLEFTX = -3.4;
    double TOPLEFTY = 56;

    double* position = (double*)malloc(2*sizeof(double));

    double distanceBetweenDegreesLatitude = 111340.01;
    double distanceBetweenDegreesLongitude = 62473.28;
    double deltaLongitude = x - TOPLEFTX;
    double deltaLatitude = TOPLEFTY - y;

    position[0] = deltaLongitude*distanceBetweenDegreesLongitude;
    position[1] = deltaLatitude*distanceBetweenDegreesLatitude;

    return position;
}


