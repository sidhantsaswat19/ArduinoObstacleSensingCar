int leftSee() {

  for (int pos = spoint; pos <= 180; pos += 5) {
    servo.write(pos);
    delay(15);
  }
  delay(300);
  int dist = ultrasonic();
  return dist;
}
