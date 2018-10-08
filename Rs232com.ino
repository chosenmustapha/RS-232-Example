int led1 = 4;
int led2 = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  while (Serial.available() == 0);

  int value = Serial.read() - '0';

  if (value == 1)
  {
    Serial.println("Led 1 Is on");
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  }

  else if (value == 0)
  {
    Serial.println("Led 2 Is on");
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
  }



  else
  {
    Serial.println("Invalid");
  }

  Serial.flush();



}
