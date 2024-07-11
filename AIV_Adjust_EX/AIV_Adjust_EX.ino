#define MR_IN1 12 //motor1
#define MR_IN2 13 //motor1
#define MR_IN3 32 //motor2
#define MR_IN4 33 //motor2

#define ML_IN1 27 //motor4
#define ML_IN2 14 //motor4
#define ML_IN3 25 //motor3
#define ML_IN4 26 //motor3

#define R_ENA 15  //Adjust speed  //motor1
#define R_ENB 2   //Adjust speed //motor2
#define L_ENA 19  //Adjust speed //motor4
#define L_ENB 4   //Adjust speed //motor3

#define L_LED 16  // ESP32 pin
#define R_LED 17  // ESP32 pin


void setup() {
  pinMode(L_ENA, OUTPUT);
  pinMode(L_ENB, OUTPUT);
  pinMode(R_ENA, OUTPUT);
  pinMode(R_ENB, OUTPUT);

  pinMode(ML_IN1, OUTPUT);
  pinMode(ML_IN2, OUTPUT);
  pinMode(ML_IN3, OUTPUT);
  pinMode(ML_IN4, OUTPUT);
  pinMode(MR_IN1, OUTPUT);
  pinMode(MR_IN2, OUTPUT);
  pinMode(MR_IN3, OUTPUT);
  pinMode(MR_IN4, OUTPUT);

  pinMode(L_LED, OUTPUT);
  pinMode(R_LED, OUTPUT);
}


void loop() {
  forward();
  delay(1000);
  backward();
  delay(1000);
  slide_left();
  delay(1000);
  slide_right();
  delay(1000);
  }