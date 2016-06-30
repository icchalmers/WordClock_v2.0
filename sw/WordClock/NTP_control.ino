// use UMT timezone correction of +0 hours
// Note that currently Daylight Savings Time is
// based on the US

#define TIMEZONE_CORRECTION 0 

void NTP_setup() {
  NTPclient.begin("time.nist.gov", TIMEZONE_CORRECTION);
  // ReSync every 5 minutes
  setSyncInterval(300);
  setSyncProvider(getNTPtime);
  oldTime = now();
  oldMinutes = minute();
}


time_t getNTPtime(void)
{
  return NTPclient.getNtpTime();
}


void digitalClockDisplay()
{
  // digital clock display of the time
  Serial.print(hour());
  printDigits(minute());
  printDigits(second());
  Serial.print(" ");
  Serial.print(day());
  Serial.print(" ");
  Serial.print(month());
  Serial.print(" ");
  Serial.print(year()); 
  Serial.println(); 
}


void printDigits(int digits){
  // utility function for digital clock display: prints preceding colon and leading 0
  Serial.print(":");
  if(digits < 10)
    Serial.print('0');
  Serial.print(digits);
}
