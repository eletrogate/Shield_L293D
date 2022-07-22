#include <AFMotor.h>

// Número de passos por rotação de saída
// Se preciso, mude esta especificação de acordo com seu motor
const int stepsPerRevolution = 200;

// Conecta o motor a porta #2 (M3 and M4)
AF_Stepper motor(stepsPerRevolution, 2);

void setup() {
  Serial.begin(9600);
  Serial.println("Teste do Motor de Passos!");

  motor.setSpeed(10);  // 10 rpm   
}

void loop() {
  Serial.println("Passo única da bobina");
  motor.step(100, FORWARD, SINGLE); 
  motor.step(100, BACKWARD, SINGLE); 

  Serial.println("Passo duplo da bobina");
  motor.step(100, FORWARD, DOUBLE); 
  motor.step(100, BACKWARD, DOUBLE);

  Serial.println("Passos intercalados da bobina");
  motor.step(100, FORWARD, INTERLEAVE); 
  motor.step(100, BACKWARD, INTERLEAVE); 

  Serial.println("Micropassos da bobina");
  motor.step(100, FORWARD, MICROSTEP); 
  motor.step(100, BACKWARD, MICROSTEP); 
}