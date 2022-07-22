#include <AFMotor.h>

AF_DCMotor motor(4);

void setup() 
{
  //Seta a velocidade inicial do motor e o para
  motor.setSpeed(200);
  motor.run(RELEASE);
}

void loop() 
{
  uint8_t i;

  // Liga o motor
  motor.run(FORWARD);
  
  // Acelera de zero à velocidade máxima
  for (i=0; i<255; i++) 
  {
    motor.setSpeed(i);  
    delay(10);
  }
  
  // Desacelera da velocidade máxima para zero
  for (i=255; i!=0; i--) 
  {
    motor.setSpeed(i);  
    delay(10);
  }

  // Muda direção do motor
  motor.run(BACKWARD);
  
  // Acelera de zero à velocidade máxima
  for (i=0; i<255; i++) 
  {
    motor.setSpeed(i);  
    delay(10);
  }

  // Desacelera da velocidade máxima para zero
  for (i=255; i!=0; i--) 
  {
    motor.setSpeed(i);  
    delay(10);
  }

  // Desliga o motor
  motor.run(RELEASE);
  delay(1000);
}