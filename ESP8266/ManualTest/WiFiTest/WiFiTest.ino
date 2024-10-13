#include <ESP8266WiFi.h>

const char *ssid =  ""; // SSID here 
const char *pass =  ""; // Password here

void setup() 
{
       Serial.begin(115200);
       delay(10);
               
       Serial.println("Connecting to ");
       Serial.println(ssid); 
       WiFi.begin(ssid, pass); 
       while (WiFi.status() != WL_CONNECTED) 
          {
            delay(500);
            Serial.print(".");
          }
  Serial.println("");
  Serial.println("WiFi connected"); 
  Serial.println('\n');
  Serial.println("Connection established!");  
  Serial.print("IP address:\t");
  Serial.println(WiFi.localIP());
}
 
void loop() 
{      
  
}
