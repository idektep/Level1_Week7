void forward() {

}

void backward() {

}

void slide_left() {
 
}

void slide_right() {

}

void slide_left_front() {

}

void slide_right_front() {

}

void slide_left_back() {

}

void slide_right_back() {
  
}

void turn_left() {

}

void turn_right() {

}

void stop() {
  analogWrite(L_ENA, 220);
  analogWrite(L_ENB, 220);
  analogWrite(R_ENA, 220);
  analogWrite(R_ENB, 220);
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, LOW);
}
