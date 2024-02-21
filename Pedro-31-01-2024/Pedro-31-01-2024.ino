// declara variáveis para números decimais
float sal_atual, novo_sal;

void setup() {
  // Roda uma vez o código

  sal_atual = 1200;

  // verificando o salário do funcionário de acordo com a condicional
  if (sal_atual <= 500 && sal_atual > 0) {
    novo_sal = sal_atual * 1.2;
  }
  else if (sal_atual > 500){
    novo_sal = sal_atual * 1.1;
  }
  else {
    novo_sal = 0;
  }



  // Iniciando a comunicação com o Monitor Serial
  Serial.begin(9600);
}

void loop() {
  // Roda o código em loop
  // Serial.print("Hoje é o último dia de janeiro!");  // Mostra a frase no monitor

  if (novo_sal == 0){
    Serial.println("Digite um salário válido!!!");
  }

  else {
  // Exibindo o novo salário
  Serial.print("Novo Salário: ");
  Serial.println(novo_sal);
  Serial.println("------------------------------");
  }

  delay(1000);  // Espera 1 segundo antes de seguir o loop
}
