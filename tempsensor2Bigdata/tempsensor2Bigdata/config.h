// Physical device information for board and sensor
#define DEVICE_ID             WiFi.macAddress()     // already configured
#define DEVICE_STUDENT        "Marcus"
#define DEVICE_TYPE           "tempSensor2"
#define DEVICE_LOCATION_LAT   "68.43990"
#define DEVICE_LOCATION_LON   "22.51734"       
#define DEVICE_SEND_INTERVAL  700000               //default 3600000 ms = 1 hour

#define WIFI_SSID             "ASUS 2.4"
#define WIFI_PASS             "QazXsw1234.!"

//link to github
#define GITHUB ""

//DHT Temperature sensor configuration
#define DHT_PIN               13
#define DHT_TYPE              DHT11


// Pin layout configuration
#define LED_PIN               0


// Address configuration, don't remove!
#define MESSAGE_MAX_LEN       256
#define EEPROM_SIZE           512
#define SSID_LEN              32
#define PASS_LEN              32
#define CONNECTIONSTRING_LEN  256
