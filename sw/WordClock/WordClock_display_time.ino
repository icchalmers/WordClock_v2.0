
#define WORDON(__WORDTOTURN__) wordOn(__WORDTOTURN__, sizeof(__WORDTOTURN__));

const uint8_t IT[] = {1,2};
const uint8_t IS[] = {4,5};
const uint8_t HAPPY[] = {7,8,9,10,11};
const uint8_t MQUARTER[] = {16,17,18,19,20,21,22};
const uint8_t MTEN[] = {12,13,14};
const uint8_t MTWENTY[] = {23,24,25,26,27,28};
const uint8_t MFIVE[] = {30,31,32,33};
const uint8_t MHALF[] = {41,42,43,44};
const uint8_t MINUTES[] = {34,35,36,37,38,39,40};
const uint8_t TO[] = {45,46};
const uint8_t BIRTHDAY[] = {47,48,49,50,51,52,53,54};
const uint8_t PAST[] = {66,65,64,63};
const uint8_t TWELVE[] = {61,60,59,58,57,56};
const uint8_t ELEVEN[] = {67,68,69,70,71,72};
const uint8_t THREE[] = {73,74,75,76,77};
const uint8_t NINE[] = {88,87,86,85};
const uint8_t MUM[] = {84,83,82};
const uint8_t FIVE[] = {81,80,79,78};
const uint8_t EIGHT[] = {89,90,91,92,93};
const uint8_t ONE[] = {94,95,96};
const uint8_t TEN[] = {97,98,99};
const uint8_t TWO[] = {110,109,108};
const uint8_t SEVEN[] = {107,106,105,104,103};
const uint8_t SIX[] = {102,101,100};
const uint8_t FOUR[] = {111,112,113,114};
const uint8_t OCLOCK[] = {116,117,118,119,120,121};


// Turn on a word. Used with macro WORDON
void wordOn(const uint8_t *wordToSet, uint8_t length){
  uint8_t i;
    for(i=0; i<length; i++){
        strip.SetPixelColor(wordToSet[i], RgbColor(red, green, blue));
    }
}

void ClearLEDs() {
  int pixelNumber;
  for(pixelNumber = 0; pixelNumber < NUM_PIXELS; pixelNumber++) {
    strip.SetPixelColor(
      pixelNumber, RgbColor(0,0,0));
  }
}

void DisplayTime(int hours, int minutes){

  // start by clearing the display to a known state
  ClearLEDs();
  
  if(hours>12){
    hours = hours-12;
  }
  if (hours==0){
    hours = 12;
  }
  
  Serial.print("It is ");
  WORDON(IT);
  WORDON(IS);
  // now we display the appropriate minute counter
  if ((minutes>4) && (minutes<10)) { 
    WORDON(MFIVE); 
    WORDON(MINUTES); 
    Serial.print("Five Minutes ");
  } 
  if ((minutes>9) && (minutes<15)) { 
    WORDON(MTEN); 
    WORDON(MINUTES); 
    Serial.print("Ten Minutes ");
  }
  if ((minutes>14) && (minutes<20)) {
    WORDON(MQUARTER); 
      Serial.print("Quarter ");
  }
  if ((minutes>19) && (minutes<25)) { 
    WORDON(MTWENTY); 
    WORDON(MINUTES); 
    Serial.print("Twenty Minutes ");
  }
  if ((minutes>24) && (minutes<30)) { 
    WORDON(MTWENTY); 
    WORDON(MFIVE); 
    WORDON(MINUTES);
    Serial.print("Twenty Five Minutes ");
  }  
  if ((minutes>29) && (minutes<35)) {
    WORDON(MHALF);
    Serial.print("Half ");
  }
  if ((minutes>34) && (minutes<40)) { 
    WORDON(MTWENTY); 
    WORDON(MFIVE); 
    WORDON(MINUTES);
    Serial.print("Twenty Five Minutes ");
  }  
  if ((minutes>39) && (minutes<45)) { 
    WORDON(MTWENTY); 
    WORDON(MINUTES); 
    Serial.print("Twenty Minutes ");
  }
  if ((minutes>44) && (minutes<50)) {
    WORDON(MQUARTER); 
    Serial.print("Quarter ");
  }
  if ((minutes>49) && (minutes<55)) { 
    WORDON(MTEN); 
    WORDON(MINUTES); 
    Serial.print("Ten Minutes ");
  } 
  if (minutes>54) { 
    WORDON(MFIVE); 
    WORDON(MINUTES); 
    Serial.print("Five Minutes ");
  }

  if ((minutes <5))
  {
    switch (hours) {
    case 1: 
      WORDON(ONE); 
      Serial.print("One ");
      break;
    case 2: 
      WORDON(TWO); 
      Serial.print("Two ");
      break;
    case 3: 
      WORDON(THREE); 
      Serial.print("Three ");
      break;
    case 4: 
      WORDON(FOUR); 
      Serial.print("Four ");
      break;
    case 5: 
      WORDON(FIVE); 
      Serial.print("Five ");
      break;
    case 6: 
      WORDON(SIX); 
      Serial.print("Six ");
      break;
    case 7: 
      WORDON(SEVEN); 
      Serial.print("Seven ");
      break;
    case 8: 
      WORDON(EIGHT); 
      Serial.print("Eight ");
      break;
    case 9: 
      WORDON(NINE); 
      Serial.print("Nine ");
      break;
    case 10: 
      WORDON(TEN); 
      Serial.print("Ten ");
      break;
    case 11: 
      WORDON(ELEVEN); 
      Serial.print("Eleven ");
      break;
    case 12: 
      WORDON(TWELVE); 
      Serial.print("Twelve ");
      break;
    }
  WORDON(OCLOCK);
  Serial.println("O'Clock");
  }
  else
    if ((minutes < 35) && (minutes >4))
    {
      WORDON(PAST);
      Serial.print("Past ");
      switch (hours) {
    case 1: 
      WORDON(ONE); 
      Serial.println("One ");
      break;
    case 2: 
      WORDON(TWO); 
      Serial.println("Two ");
      break;
    case 3: 
      WORDON(THREE); 
      Serial.println("Three ");
      break;
    case 4: 
      WORDON(FOUR); 
      Serial.println("Four ");
      break;
    case 5: 
      WORDON(FIVE); 
      Serial.println("Five ");
      break;
    case 6: 
      WORDON(SIX); 
      Serial.println("Six ");
      break;
    case 7: 
      WORDON(SEVEN); 
      Serial.println("Seven ");
      break;
    case 8: 
      WORDON(EIGHT); 
      Serial.println("Eight ");
      break;
    case 9: 
      WORDON(NINE); 
      Serial.println("Nine ");
      break;
    case 10: 
      WORDON(TEN); 
      Serial.println("Ten ");
      break;
    case 11: 
      WORDON(ELEVEN); 
      Serial.println("Eleven ");
      break;
    case 12: 
      WORDON(TWELVE); 
      Serial.println("Twelve ");
      break;
      }
    }
    else
    {
      // if we are greater than 34 minutes past the hour then display
      // the next hour, as we will be displaying a 'to' sign
      WORDON(TO);
      Serial.print("To ");
      switch (hours) {
      case 1: 
        WORDON(TWO); 
       Serial.println("Two ");
       break;
      case 2: 
        WORDON(THREE); 
      Serial.println("Three ");
        break;
      case 3: 
        WORDON(FOUR); 
      Serial.println("Four ");
        break;
      case 4: 
        WORDON(FIVE); 
      Serial.println("Five ");
        break;
      case 5: 
        WORDON(SIX); 
      Serial.println("Six ");
        break;
      case 6: 
        WORDON(SEVEN); 
      Serial.println("Seven ");
        break;
      case 7: 
        WORDON(EIGHT); 
      Serial.println("Eight ");
        break;
      case 8: 
        WORDON(NINE); 
      Serial.println("Nine ");
        break;
      case 9: 
        WORDON(TEN); 
      Serial.println("Ten ");
        break;
      case 10: 
        WORDON(ELEVEN); 
      Serial.println("Eleven ");
        break;
      case 11: 
        WORDON(TWELVE); 
      Serial.println("Twelve ");
        break;
      case 12: 
        WORDON(ONE); 
      Serial.println("One ");
        break;
      }
    }
    strip.Show();
}

