// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, LOW);   // turn the controller ON (LOW is the voltage level)
  delay(400);                       // wait for a second
  digitalWrite(2, HIGH);    // turn the controller OFF by making the voltage HIGHO
  delay(5000);                       // wait for a second
}
