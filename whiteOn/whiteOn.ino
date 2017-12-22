// White is made by turning on the red green and blue leds together.
const int blueLED = 3; 
const int greenLED =  5;
const int redLED = 6;
const int GND = 2; 

void setup() {
  //this tells the arduino that the pins are outputs (not analog or digital inputs)
  pinMode (GND, OUTPUT);
  pinMode (blueLED, OUTPUT);
  pinMode (greenLED, OUTPUT);
  pinMode (redLED, OUTPUT);

  //this tells the arduino what state (high or 1, low or 0) to put the pins in
  digitalWrite(GND, 0); 
  digitalWrite(blueLED, 100); 
  digitalWrite(greenLED, 120); 
  digitalWrite(redLED, 1); 
}

void loop() {
}
