// Projeto EcoSmart
// Sistema de Monitoramento de Energia Solar

int sensorLuz = A0;
int ledVerde = 7;
int ledVermelho = 6;

float valorSensor = 0;
float porcentagemEnergia = 0;

void setup() {

  Serial.begin(9600);

  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  Serial.println("=== EcoSmart ===");
  Serial.println("Monitoramento iniciado...");
}

void loop() {

  valorSensor = analogRead(sensorLuz);

  porcentagemEnergia = map(valorSensor, 0, 1023, 0, 100);

  Serial.print("Energia Solar: ");
  Serial.print(porcentagemEnergia);
  Serial.println("%");

  if (porcentagemEnergia >= 50) {

    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVermelho, LOW);

    Serial.println("Energia OK");

  } else {

    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, HIGH);

    Serial.println("Baixa geração de energia");

  }

  Serial.println("------------------------");

  delay(2000);
}
