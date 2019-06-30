#define mC 261.626
#define mD 293.665
#define mE 329.628
#define mF 349.228
#define mG 391.995
#define mA 440.000
#define mB 493.883

#define SW 35
#define SP 12
#define HEAT 15

#define LEDC_CHANNEL_2    2
#define LEDC_TIMER_13_BIT 13
#define LEDC_BASE_FREQ    5000

void setup() {
  // put your setup code here, to run once:
  pinMode(SW, INPUT);
  pinMode(HEAT, OUTPUT);
  digitalWrite(HEAT, LOW);
}

void noTone(int pin){
  ledcWriteTone(LEDC_CHANNEL_2, 0.0);
}

void tone(int pin, int freq){
  ledcSetup(LEDC_CHANNEL_2, LEDC_BASE_FREQ, LEDC_TIMER_13_BIT);
  ledcAttachPin(pin, LEDC_CHANNEL_2);
  ledcWriteTone(LEDC_CHANNEL_2, freq);
}

void beep(){
  float mm[] = {mC*2, mD*2, mE*2, mF*2, mG*2, mA*2, mB*2, mC*4};
  for(int i = 0; i < sizeof(mm)/sizeof(float); i++){
    tone(SP, mm[i]);
    delay(250);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!digitalRead(SW)){
    beep();
  }
  else{
    noTone(SP);
  }
}
