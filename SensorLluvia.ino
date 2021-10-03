#define SENSOR 2
byte v_sensor = 1;
void setup() {
  Serial.begin(9600);
  pinMode(SENSOR, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  v_sensor = digitalRead(SENSOR);
  
  if(v_sensor == 0) {
  Serial.println("Ya esta lloviendo");
  }else{
    Serial.println("Hoy no esta lloviendo");
  }
}
