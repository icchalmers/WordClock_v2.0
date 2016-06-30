void aREST_setup() {
  rest = aREST();
  //rest.variable("ledstate",&led_state);
  rest.variable("red", &red);
  rest.variable("green", &green);
  rest.variable("blue", &blue);

  // Function to be exposed
  rest.function("led",ledControl);
  rest.function("RGB",pixelControl);
  
  // Give name and ID to device
  rest.set_id("1");
  rest.set_name("wordclock");

}

int pixelControl(String command) {

  // Command should be in the from "255,255,255"
  // There is no error checking done, so be careful!
  RgbColor pixelColour;
  char strbuff[20];
  command.toCharArray(strbuff,20);
  char *p, *j;
  p = strtok_r(strbuff,",", &j);
  Serial.print("Red is ");
  Serial.println(p);
  red = atoi(p);
  
  p = strtok_r(NULL,",", &j);
  Serial.print("Green is ");
  Serial.println(p);
  green = atoi(p);
  
  p = strtok_r(NULL,",", &j);
  Serial.print("Blue is ");
  Serial.println(p);
  blue = atoi(p);
 
  DisplayTime(hour(),minute());
  return 1;
}

// Custom function accessible by the API
// Just turns the green LED on the PCB on or off
int ledControl(String command) {
  int state = -1;
  if(command ==  "on"){
     LED_ON
     state = 1;
  }else if(command == "off") {
    LED_OFF
    state = 0;
  }else {
    state = !digitalRead(LED);
  }
  return state;
}

