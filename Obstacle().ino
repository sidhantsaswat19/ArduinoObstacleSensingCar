void Obstacle() {
  distance = ultrasonic();
  
  Serial.print("Distance: ");
  Serial.println(distance); 

  if (distance > 0 && distance <= 30) { 
    Stop();
    backward();
    delay(300);
    Stop();
    
    L = leftSee();
    
    for(int pos = 180; pos >= spoint; pos -= 5){
      servo.write(pos);
      delay(15);
    }
    delay(300);
    
    R = rightSee();
    
    for(int pos = 20; pos <= spoint; pos += 5){
      servo.write(pos);
      delay(15);
    }
    
    if (L > R) {
      left();
      delay(500);
    } else {
      right();
      delay(500);
    }
    Stop();
  } else {
    forward();
  }
}
