#include <Servo.h> 

Servo myservo;  // Cria servo objeto para controlar um servo
int pos = 0;  // Variável para guardar a posição do servo

void setup() 
{
  // Conecta o servo no pino 10 para o servo objeto
  myservo.attach(10);   
}

void loop() 
{
  // Aumenta o ângulo de 0 graus até 180 graus
  for(pos = 0; pos <= 180; pos += 1) 
  {
    myservo.write(pos);
    delay(15);
  }
  // Diminui o ângulo de 180 graus até 0 graus
  for(pos = 180; pos>=0; pos-=1)
  {
    myservo.write(pos);
    delay(15);
  }
}