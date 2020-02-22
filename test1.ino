void setup() {
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(digitalRead(12)==HIGH&&digitalRead(13)==HIGH)
  {
    analogWrite(9,0);
    analogWrite(6,255);
    analogWrite(5,0);
    analogWrite(3,255);
    Serial.println(12);
    Serial.println(13);
  }

  if(digitalRead(12)==LOW&&digitalRead(13)==HIGH)
  {
    analogWrite(9,0);
    analogWrite(6,255);
    analogWrite(5,255);
    analogWrite(3,0);
    Serial.println(12);
    Serial.println(13);
    
  }

  
  if(digitalRead(13)==LOW&&digitalRead(12)==HIGH)
  {
    analogWrite(9,255);
    analogWrite(6,0);
    analogWrite(5,0);
    analogWrite(3,255);
    Serial.println(12);
    Serial.println(13);
    
  }
  
  if(digitalRead(13)==LOW&&digitalRead(12)==LOW)
  {
    analogWrite(9,0);
    analogWrite(6,0);
    analogWrite(5,0);
    analogWrite(3,0);
    Serial.println(12);
    Serial.println(13);
    
  }
}
