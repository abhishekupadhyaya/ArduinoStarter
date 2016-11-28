// code for controlling LED lights with switch

int switchState = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);

  // condition
  if(switchState == LOW){
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    
  }else{
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250); // wait for quarter of a second

    // toggle the LEDs
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);

    delay(250); // wait for quarter of a second
  
  }
}

