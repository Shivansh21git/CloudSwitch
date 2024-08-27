// #include <ESP8266WiFi.h>
// //#include <FirebaseESP8266.h>  //------------> works fine with nodemcu(esp8266)
// //FirebaseArrduino ---------> works with esp32

// // #define FIREBASE_HOST "fir-82b8f-default-rtdb.firebaseio.com"
// // #define FIREBASE_AUTH "0ZBnA1I1jAHQVcnVbFWtLty80y747TGyG2EpZShM"
// #define WIFI_SSID "shiv4g"
// #define WIFI_PASSWORD "53085136"
#define relay D6
char  val;
//FirebaseData fbdo;
void setup() {
  Serial.begin(115200);  // use 115200 baud rate 
 pinMode(relay,OUTPUT);

  // // Connect to Wi-Fi
  // WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  // Serial.print("Connecting to Wi-Fi");
  // while (WiFi.status() != WL_CONNECTED) {
  //   delay(500);
  //   Serial.print(".");
  // }
  // Serial.println();
  // Serial.println("Connected to Wi-Fi");

  // Initialize Firebase
  // Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop() {
  // Set value to Firebase
// for(int i=1;i<=100;i++){
//   Firebase.setInt(fbdo, "sw1", i);  /// it takes three arguments ---> 1) object_name, 2} field_name,3}data

//   delay(1000);
//   Firebase.getString(fbdo,"sw1",&val);
//   if(val=='1'){
//     digitalWrite(relay,LOW);
//   }
// else
// digitalWrite(relay,HIGH);
digitalWrite(relay,HIGH);
delay(2000);
 digitalWrite(relay,LOW);
delay(2000);
 
}
