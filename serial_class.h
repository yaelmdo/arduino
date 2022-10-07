class serial_class {
  public:
    int numero=0;
    int64_t minSigno;
    int64_t maxSigno;
    uint64_t minimo;
    uint64_t maximo;
    

  public:
    void get_data ( void );
    void get_min ( int );
    void get_max ( int );
    void post_data( int64_t, int64_t, uint64_t, uint64_t, int );

    
};

void serial_class::get_data( void ){
  if(Serial.available()!=0){
    numero = Serial.parseInt();
    if(numero != 0){
      get_min(numero);
      get_max(numero);
      post_data(minSigno, maxSigno, minimo, maximo, numero);
    }
  }
  //Serial.print(numero);
}

void serial_class::get_min (int num){
  minSigno = pow(2,(num-1))*(-1);
  minimo = 0;
}

void serial_class::get_max (int num){
  maxSigno = pow(2,(num-1))-1;
  maximo = pow(2,num)-1;
}

void serial_class::post_data (int64_t minSigno, int64_t maxSigno, uint64_t minimo, uint64_t maximo, int num){
  String n = String(num);
 Serial.println("==============================");
 Serial.println("Tipo de dato: int" + n + "_t");
 Serial.println("Numero minimo: ");
 Serial.println(minSigno);
 Serial.println("Numero maximo: ");
 Serial.println(maxSigno);
 

 Serial.println("Tipo de dato: uint" + n + "_t");
 Serial.println("Numero minimo: ");
 Serial.println(minimo);
 Serial.println("Numero maximo: ");
 Serial.println(maximo);
   
}
