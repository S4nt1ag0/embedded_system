// VARIAVEIS PARA CONFIGURAÇÂO INTERNA DO MPU
const int MPU_ADDRESS = 0x68; // I2C address of the MPU-6050
const int MPU_FULL_SCALE_RANGE = 1; // full-scale 1 => +/-2g | full-scale 2 => +/-4g | full-scale 3 => +/-8g | full-scale 4 => +/-16g


//VARIAVEIS PARA TRATAMENTO E DETECÇÂO DE QUEDAS
bool fall_detected = false;
bool flag_ready_to_read = false;
float readed_i2c[3];
const int MOVING_AVERAGE_SIZE = 10;
float moving_average = 0;
float history_accelerometer[MOVING_AVERAGE_SIZE];
int index_history = 0;
const float FALL_DETECTION_TRESHOLD = 1;
bool init_fall_detection = false;

//VARIAVEIS PARA TRATAMENTO E DETECÇÂO DE EMERGENCIA
const int EMERGENCY_BUTTON_PIN = 2;
const unsigned long DEBOUNCE_DELAY = 50;
const unsigned long DOUBLE_CLICK_DELAY = 500;
unsigned long time_last_pressed = millis();
unsigned long first_click_time = millis();
bool first_click = false;
bool emergency_detected = false;

//VARIAVEIS PARA CONFIGURAÇÂO DO WIFI
const char* ssid     = "test_wifi_name"; // Change this to your WiFi SSID
const char* password = "test_wifi_password"; // Change this to your WiFi password

const char* host = "192.168.156.125"; // This should not be changed
const int httpPort = 8080; // This should not be changed
const String channelID   = "2005329"; // Change this to your channel ID
const String writeApiKey = "V6YOTILH9I7D51F9"; // Change this to your Write API key
const String readApiKey = "34W6LGLIFXD56MPM"; // Change this to your Read API key

// The default example accepts one data filed named "field1"
// For your own server you can ofcourse create more of them.
int field1 = 0;

int numberOfResults = 3; // Number of results to be read
int fieldNumber = 1; // Field number which will be read out
