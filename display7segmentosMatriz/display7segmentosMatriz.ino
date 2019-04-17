byte pinos[7] = {2, 3, 4, 5, 6, 7, 8};
byte num[10][7] = { 
   { 1,1,1,1,1,1,0 },  // = Digito 0
   { 0,1,1,0,0,0,0 },  // = Digito 1
   { 1,1,0,1,1,0,1 },  // = Digito 2
   { 1,1,1,1,0,0,1 },  // = Digito 3
   { 0,1,1,0,0,1,1 },  // = Digito 4
   { 1,0,1,1,0,1,1 },  // = Digito 5
   { 1,0,1,1,1,1,1 },  // = Digito 6
   { 1,1,1,0,0,0,0 },  // = Digito 7
   { 1,1,1,1,1,1,1 },  // = Digito 8
   { 1,1,1,0,0,1,1 }  // = Digito 9   
 };

void setup() {
  for(int i=0;i<=6;i++){
    pinMode(pinos[i], OUTPUT);
  }
}

void loop() {
  for(int linhas = 0; linhas<=9; linhas++){
    for(int colunas = 0; colunas<=6; colunas++){
        digitalWrite(pinos[colunas], num[linhas][colunas]);
    }
    delay(1000);
  } 
}
