const int dataPin = 2;
const int latchPin = 3;
const int clockPin = 4;

int dec_digits[10] = {129,207,146,134,204,164,160,143,128,132};

void setup(){
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop(){
  for(int i=0; i<10; i++){
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, dec_digits[i]);
    digitalWrite(latchPin, HIGH);
    delay(1000);
  }
}
