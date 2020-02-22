void setup() {
  // put your setup code here, to run once:
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);

}
void front()

{
    analogWrite(9,0);
    analogWrite(6,255);
    analogWrite(5,0);
    analogWrite(3,255);
    Serial.println(12);
    Serial.println(13); 
  }

void loop() {
  // put your main code here, to run repeatedly:
front();
}
