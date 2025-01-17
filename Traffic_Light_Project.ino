const int gLED1 = 3;
const int yLED1 = 4;
const int rLED1 = 5;

const int gLED2 = 9;
const int yLED2 = 10;
const int rLED2 = 11;

const int swA = 2;
const int swB = 6;

const int photoResistor = A1;



  int delay_green_light = 5000;
  int delay_yellow_light = 2000;
  int delay_red_light = 5000;

  int delay_green_light_night = 20000;
  int delay_yellow_light_night = 2000;
  int delay_red_light_night = 20000;



void setup() {
  // put your setup code here, to run once:
  pinMode(gLED1, OUTPUT);
  pinMode(yLED1, OUTPUT);
  pinMode(rLED1, OUTPUT);
  pinMode(gLED2, OUTPUT);
  pinMode(yLED2, OUTPUT);
  pinMode(rLED2, OUTPUT);

  pinMode(swA, INPUT);

  pinMode(swB, INPUT);

  pinMode(photoResistor, INPUT);

  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  int photoResistororReading = 0;
  photoResistororReading = analogRead(photoResistor);
  Serial.println(photoResistororReading);
  delay(100);
  




  int switchStateA = LOW;

  int switchStateB = LOW;



  switchStateA = digitalRead(swA);

  switchStateB = digitalRead(swB);


  if (digitalRead(swA) == HIGH || digitalRead(swB) == HIGH  )
  {

        delay(15); // software debounce

        if (digitalRead(swA) == HIGH || digitalRead(swB) == HIGH) 
        {

            // if the switch is HIGH, ie. pushed down - change the lights!

            changeLights();

            delay(15000); // wait for 15 seconds

        }

  }





//if dark
 if(photoResistororReading < 50)
  {            
    green_light_day();
    delay(delay_green_light_night);
    yellow_light_day();
    delay(delay_yellow_light_night);
    red_light_day();
    delay(delay_red_light_night);
  }
//if light 
  else 
  {
    green_light_day();
    delay(delay_green_light);
    yellow_light_day();
    delay(delay_yellow_light);
    red_light_day();
    delay(delay_red_light);
  }

 



}//end
  
void green_light_day()
{
  digitalWrite(gLED1, HIGH);
  digitalWrite(yLED1, LOW);
  digitalWrite(rLED1, LOW);

  digitalWrite(gLED2, LOW);
  digitalWrite(yLED2, LOW);
  digitalWrite(rLED2, HIGH);
}

void yellow_light_day()
{
  digitalWrite(gLED1, LOW);
  digitalWrite(yLED1, HIGH);
  digitalWrite(rLED1, LOW);

  digitalWrite(gLED2, LOW);
  digitalWrite(yLED2, HIGH);
  digitalWrite(rLED2, LOW);
}

void red_light_day()
{
  digitalWrite(gLED1, LOW);
  digitalWrite(yLED1, LOW);
  digitalWrite(rLED1, HIGH);

  digitalWrite(gLED2, HIGH);
  digitalWrite(yLED2, LOW);
  digitalWrite(rLED2, LOW);
}

void changeLights(){

    // green off, yellow on for 2 seconds

    digitalWrite(gLED1, LOW);
    digitalWrite(gLED2, LOW);

    digitalWrite(yLED1, HIGH);
    digitalWrite(rLED2, HIGH);

    delay(2000);

    // turn off yellow, then turn red on for 5 seconds

    digitalWrite(yLED1, LOW);

    digitalWrite(rLED1, HIGH);

    delay(5000);

    // red and yellow on for 2 seconds (red is already on though)
  
    digitalWrite(rLED2, HIGH);

    delay(2000);

    // turn off red and yellow, then turn on green

    digitalWrite(yLED1, LOW);

    digitalWrite(rLED1, LOW);

    green_light_day();  

}
