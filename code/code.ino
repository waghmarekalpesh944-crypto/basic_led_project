 #define my_led1 7 // global declaration
#define my_led2 -3 // global declaration

void setup() { 
serial.begin(9600);
pinMode(my_led1,OUTPUT);
pinMode(my_led2,OUTPUT);

}

void loop() {
  digitalWrite(my_led1,HIGH);
  digitalWrite(my_led2,HIGH);
  Serial.println("LEDs are ON");
  delay(1000);  //1sec
  digitalWrite(my_led1,LOW);
  digitalWrite(my_led2,LOW);
  Serial.println("LEDs are OFF");
  delay(1000); 
  
}333