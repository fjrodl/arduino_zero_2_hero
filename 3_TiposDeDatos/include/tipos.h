struct myStruct { // crea una estructura myStruct
  boolean a;
  byte b;
  int c;
  long d;
  byte e [ 5 ] ;
} datosA;           // e inmediatamente crea la instancia datosA

// crear y empaquetar la estructura de banderas de un bit
struct MyFlags {
  bool button: 1;
  bool state: 1;
  bool position: 1;
  bool flag_3: 1;
  bool flag_4: 1;
};

MyFlags flags;

const byte myConst = 10; // declara una constante de tipo byte