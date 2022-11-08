int sol = 5;


void setup() {
  
  
  Serial.begin(9600);
  pinMode(sol , OUTPUT);
  digitalWrite(sol , LOW);



}

void loop() {

  delay(2000);
  digitalWrite(sol,HIGH);
  Serial.print("state: ")
  Serial.print("ON")

  delay(10);
  digitalWrite(sol,LOW);
  Serial.print("state: ")
  Serial.print("OFF")



}
