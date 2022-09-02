int light=7;
int sensor = 8;              
int state = LOW;             
int val = 0;                 

void setup() {     
  pinMode(sensor, INPUT);    
  pinMode(sensor,OUTPUT);
  Serial.begin(9600);       
}

void loop(){
  val = digitalRead(sensor);   
  if (val == HIGH) {    
    digitalWrite(light,HIGH);
    delay(10000);
    if (state == LOW) {
      Serial.println("Motion detected!"); 
      state = HIGH;       
    }
  } 
  else {             
      digitalWrite(light,LOW);
      if (state == HIGH){
        Serial.println("Motion stopped!");
        state = LOW;       
    }
  }
}
