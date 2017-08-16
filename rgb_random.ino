
byte r = 8;
byte g = 6;
byte b = 7;


byte rValue = 6;
byte gValue = 7;
byte bValue = 8;

byte rValueCap = 6;
byte gValueCap = 7;
byte bValueCap = 8;

byte lightStep = 10;

word timer;
word timerCap=30; // seconds

word delayTime = 10;

void randomizeLed(){
    rValue = random(0,255);
    gValue = random(0,255);
    bValue = random(0,255);

}

void randomizeLedCap(){
    rValueCap = random(0,255);
    gValueCap = random(0,255);
    bValueCap = random(0,255);

}

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  timer = 0;
  randomizeLed();

  timerCap = timerCap * (1000/delayTime);

}

// the loop function runs over and over again forever
void loop() {
  analogWrite(r,rValue);
  analogWrite(g,gValue);
  analogWrite(b,bValue);
  if(rValue > rValueCap){
    rValue-= lightStep;

    
  }

  if(rValue < rValueCap){
    rValue += lightStep;

    
  }

   if(gValue > gValueCap){
    gValue-= lightStep;

    
  }

  if(gValue < gValueCap){
    gValue += lightStep;

    
  }

   if(bValue > bValueCap){
    bValue-= lightStep;

    
  }

  if(bValue < bValueCap){
    bValue += lightStep;

    
  }
  
  timer++;
  if(timer > timerCap){
    timer = 0;
    randomizeLedCap();
  
  }
  delay(delayTime);   


                  
}
