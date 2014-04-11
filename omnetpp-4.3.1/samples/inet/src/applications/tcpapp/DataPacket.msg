
packet DataPacket
{
    int uuid;
    unsigned char busid;
    unsigned char sendingBusid;
    string debugMessage;
    bool serverClose;
    bool broadcastPacket;
    bool isResponsePacket;
    int timeToAp;
    int queueSize;
    bool isFromAp;
    
    
    
    ///Air Quality Measurements Here
    
    short temperature;
    short co2concentration;
    short no3concentration;
    short o3concentration;
    short pm10concentration;
    short pm25concentration;
    

    
}
