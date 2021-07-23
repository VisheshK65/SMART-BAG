const int waterSens=A0;//defines waterSens to analogPin A0
const int buzzer=12;//defines buzzer to digitalPin 12
int sensorVal;// to determine equivalent water sensor value
void setup() 
{
 Serial.begin(9600);
 pinMode(waterSens,INPUT);
 pinMode(buzzer,OUTPUT);
}
void loop() 
{
 int sensorVal=analogRead(waterSens);// reads the water sensor data
 if(sensorVal<=1023 && sensorVal!=0)//condition for the buzzer to start buzzing 
 {
  digitalWrite(buzzer,HIGH);
  delay(900);
  digitalWrite(buzzer,LOW);
  delay(1000);
 }
 else
 {
  digitalWrite(buzzer,LOW);
 }
 Serial.println(sensorVal);// displays the output on the monitor
}
