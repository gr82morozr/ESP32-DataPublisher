#include <DataPublish.h>


DataPublish::DataPublish(int channel) {
  this->channel = channel;
  
};




void DataPublish::publish(char * data) {
  this->data = copy_chars(data);

  switch (this->channel) {
    case _PUBLISH_CHANNEL_SERIAL :
      this->pub_serial();
      break;
    case _PUBLISH_CHANNEL_WLAN:
      break;
    case _PUBLISH_CHANNEL_BLE :
      break;
    case _PUBLISH_CHANNEL_ESPNOW:
      break;
    default:
    
      break;  
  };
  free(this->data);
};

void DataPublish::publish(String data) {
  char * data_chars = to_chars(data);
  this->publish(data_chars);
  free(data_chars);
};

void DataPublish::pub_serial() {
  Serial.println(this->data);
  

};