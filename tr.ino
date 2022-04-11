int led1 = 3;
int led2 = 5;
int led3 = 6;
int led4 = 9;
int led5 = 10;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop()
{

  Serial.println("");
  Serial.print("input from ldr: ");
  Serial.println(analogRead(A0));
  Serial.print("input from A1: "); 
  Serial.println(analogRead(A1));
  Serial.print("input from A2: ");
  Serial.println(analogRead(A2));
  Serial.print("input from A3: ");
  Serial.println(analogRead(A3));


  if (analogRead(A0) < 100) {
    if (analogRead(A1) < 500) {
      digitalWrite(led1, HIGH);
    } else {
      analogWrite(led1, 225/20);
    }

    if (analogRead(A2) < 500) {
      digitalWrite(led2, HIGH);
    } else {
      analogWrite(led2, 225/20);
    }

    if (analogRead(A3) < 500) {
      digitalWrite(led3, HIGH);
    } else {
      analogWrite(led3,255/20);
    }

    if (analogRead(A4) < 500) {
      digitalWrite(led4, HIGH);
    } else {
      analogWrite(led4, 225/20);
    }

    if (analogRead(A5) < 500) {
      digitalWrite(led5, HIGH);
    } else {
      analogWrite(led5, 255/20);
    }

  } else {
    Serial.println("not smaller than 300");
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  }
}

