void voiceControl(){
  if(Serial.available()>0){
    value = Serial.read();
    Serial.println(value);
    if(value == '^'){
      forward();
    }else if(value == '-'){
      backward();
    }else if(value == '<'){
      L = leftSee();
      servo.write(spoint);
      if(L >= 10){
        left();
        delay(500);
        Stop();
      }else if(L < 10){
        Stop();
      }
    }else if(value == '>'){
      R = rightSee();
      servo.write(spoint);
      if(R >= 10){
        right();
        delay(500);
        Stop();
      }else if(R<10){
        Stop();
      }
    }else if(value == '*'){
      Stop();
    }
  }
}
