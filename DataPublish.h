#pragma once
#include <Arduino.h>
#include <Common/Common.h>


/* 
  Data publisher 
  

*/


#define _PUBLISH_CHANNEL_SERIAL     0
#define _PUBLISH_CHANNEL_WLAN       1
#define _PUBLISH_CHANNEL_BLE        2
#define _PUBLISH_CHANNEL_ESPNOW     3

class DataPublish  {
  public:
    DataPublish(int channel);
    void publish(char *data);
    void publish(String data);
  private:
    int channel;
    char *data;
    void pub_serial();
};