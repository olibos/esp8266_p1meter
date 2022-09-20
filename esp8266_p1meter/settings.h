// **********************************
// * Settings                       *
// **********************************

// Update treshold in milliseconds, messages will only be sent on this interval
#define UPDATE_INTERVAL 60000  // 1 minute
//#define UPDATE_INTERVAL 300000 // 5 minutes

// * Baud rate for both hardware and software 
#define BAUD_RATE 115200

// The used serial pins, note that this can only be UART0, as other serial port doesn't support inversion
// By default the UART0 serial will be used. These settings displayed here just as a reference. 
// #define SERIAL_RX RX
// #define SERIAL_TX TX

// * Max telegram length
#define P1_MAXLINELENGTH 1050

// * The hostname of our little creature
#define HOSTNAME "p1meter"

// * The password used for OTA
#define OTA_PASSWORD "admin"

// * Wifi timeout in milliseconds
#define WIFI_TIMEOUT 30000

// * MQTT network settings
#define MQTT_MAX_RECONNECT_TRIES 10

// * MQTT root topic
#define MQTT_ROOT_TOPIC "sensors/power/p1meter"

#define EMPTY_METRIC -1L

// * MQTT Last reconnection counter
long LAST_RECONNECT_ATTEMPT = 0;

long LAST_UPDATE_SENT = 0;

// * To be filled with EEPROM data
char MQTT_HOST[64] = "";
char MQTT_PORT[6]  = "";
char MQTT_USER[32] = "";
char MQTT_PASS[32] = "";

// * Set to store received telegram
char telegram[P1_MAXLINELENGTH];

// * Set to store the data values read
long CONSUMPTION_LOW_TARIF = EMPTY_METRIC;
long CONSUMPTION_HIGH_TARIF = EMPTY_METRIC;

long RETURNDELIVERY_LOW_TARIF = EMPTY_METRIC;
long RETURNDELIVERY_HIGH_TARIF = EMPTY_METRIC;

long ACTUAL_CONSUMPTION = EMPTY_METRIC;
long ACTUAL_RETURNDELIVERY = EMPTY_METRIC;
long GAS_METER_M3 = EMPTY_METRIC;

long L1_INSTANT_POWER_USAGE = EMPTY_METRIC;
long L2_INSTANT_POWER_USAGE = EMPTY_METRIC;
long L3_INSTANT_POWER_USAGE = EMPTY_METRIC;
long L1_INSTANT_POWER_CURRENT = EMPTY_METRIC;
long L2_INSTANT_POWER_CURRENT = EMPTY_METRIC;
long L3_INSTANT_POWER_CURRENT = EMPTY_METRIC;
long L1_VOLTAGE = EMPTY_METRIC;
long L2_VOLTAGE = EMPTY_METRIC;
long L3_VOLTAGE = EMPTY_METRIC;

// Set to store data counters read
long ACTUAL_TARIF = EMPTY_METRIC;
long SHORT_POWER_OUTAGES = EMPTY_METRIC;
long LONG_POWER_OUTAGES = EMPTY_METRIC;
long SHORT_POWER_DROPS = EMPTY_METRIC;
long SHORT_POWER_PEAKS = EMPTY_METRIC;

// * Set during CRC checking
unsigned int currentCRC = 0;
