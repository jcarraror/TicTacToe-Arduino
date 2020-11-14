 // Jogo da velha feito por Julio Carraro, Antonio Rabello e Felipe Bonato
    
    char tab[3][3]; //Criando uma matriz 3x3
    
    void setup() {
      Serial.begin(9600);
    }
    
    void loop() {
    
      int numerolinha1, numerocoluna1, numerolinha2, numerocoluna2; //Declarando as variaveis
      Serial.println("Diga a linha, jogador 1");
      while (!Serial.available());
      numerolinha1 = Serial.parseInt();
      Serial.println(numerolinha1);
      Serial.println("Diga a coluna, jogador 1");
      while (!Serial.available());
      numerocoluna1 = Serial.parseInt();
      Serial.println(numerocoluna1);
      Serial.println("Diga a linha, jogador 2");
      while (!Serial.available());
      numerolinha2 = Serial.parseInt();
      Serial.println(numerolinha2);
      Serial.println("Diga a coluna, jogador 2");
      while (!Serial.available());
      numerocoluna2 = Serial.parseInt();
      Serial.println(numerocoluna2);
    
      int i, j; //Declarando as variaveis de matriz
    
      //Criando uma condicao para nao permitir jogadas em campos ja utilizados
      if (tab[numerolinha1][numerocoluna1] != 'X' && tab[numerolinha1][numerocoluna1] != 'O' && tab[numerolinha2][numerocoluna2] != 'X' && tab[numerolinha2][numerocoluna2] != 'O' && numerolinha1 <=2 && numerocoluna1 <= 2 && numerolinha2 <=2 && numerocoluna2 <= 2) {
        tab[numerolinha1][numerocoluna1] = 'X';
        tab[numerolinha2][numerocoluna2] = 'O';
      }
    
      else {
        Serial.println("JOGUEM DE NOVO, MOVIMENTOS INVALIDOS");
      }
    
      //Criando a tabela do jogo
      for (i = 0; i < 3; i++) {
        Serial.print("|");
        for (j = 0; j < 3; j++) {
          Serial.print(tab[i][j]);
          Serial.print("|");
        }
        Serial.println();
      }
    
    
    
      // Criando as condicoes que o jogador 1 é vencedor
      if (tab[0][0] == 'X' && tab[0][1] == 'X' && tab[0][2] == 'X' || tab[1][0] == 'X' && tab[1][1] == 'X' && tab[1][2] == 'X' || tab[2][0] == 'X' && tab[2][1] == 'X' && tab[2][2] == 'X') {
    
        Serial.println("Jogador 1 ganhou, aperte o botao de reset");
      }
    
      if (tab[0][0] == 'X' && tab[1][0] == 'X' && tab[2][0] == 'X' || tab[0][1] == 'X' && tab[1][1] == 'X' && tab[2][1] == 'X' || tab[0][2] == 'X' && tab[1][2] == 'X' && tab[2][2] == 'X') {
    
        Serial.println("Jogador 1 ganhou, aperte o botao de reset");
      }
    
      if (tab[0][0] == 'X' && tab[1][1] == 'X' && tab[2][2] == 'X' || tab[0][2] == 'X' && tab[1][1] == 'X' && tab[2][0]) {
    
        Serial.println("Jogador 1 ganhou, aperte o botao de reset");
      }
    
    
    
      // Criando as condicoes que o jogador 1 é vencedor
      if (tab[0][0] == 'O' && tab[0][1] == 'O' && tab[0][2] == 'O' || tab[1][0] == 'O' && tab[1][1] == 'O' && tab[1][2] == 'O' || tab[2][0] == 'O' && tab[2][1] == 'O' && tab[2][2] == 'O') {
    
        Serial.println("Jogador 2 ganhou, aperte o botao de reset");
      }
    
      if (tab[0][0] == 'O' && tab[1][0] == 'O' && tab[2][0] == 'O' || tab[0][1] == 'O' && tab[1][1] == 'O' && tab[2][1] == 'O' || tab[0][2] == 'O' && tab[1][2] == 'O' && tab[2][2] == 'O') {
    
        Serial.println("Jogador 2 ganhou, aperte o botao de reset");
      }
    
      if (tab[0][0] == 'O' && tab[1][1] == 'O' && tab[2][2] == 'O' || tab[0][2] == 'O' && tab[1][1] == 'O' && tab[2][0]) {
    
        Serial.println("Jogador 2 ganhou, aperte o botao de reset");
    }
  
  }
