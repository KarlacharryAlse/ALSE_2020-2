#include <iostream>

using namespace std;

int main(){

 char c= 70;
 int a =50;
 float b= 50.;
 double d= 50.;

 char *p = NULL;

 cout <<"Char: "  << c << endl;
 cout <<"Int:" <<a<<endl;
 cout <<"Float:"<< b << endl;
 cout <<"Double:" << d <<endl;
 
 p = &c;
 cout << "Direccion de c:" << (long)p << endl;

 p = (char*)&a;
 cout << "Direccion de a:" << (long)p << endl;
 
 p=(char*)&b;
 cout << "Direccion de b:" << (long) p << endl;

 p =(char*)&d;
 cout << ":Direccion de d:" <<(long) p << endl;

//el contenido de p 

 p = (char*)&a;
 cout <<"Direccion de p:" << (long)&p << endl;
 cout << "Direccion de p:" << (long) p << endl;
 cout << "Contenido de a donde apunta p:" <<(int)*p <<endl;
 
//++p: incremento 
 cout <<"Contenido del segundo byte de b:" <<(int)*(++p) << endl,
 cout <<"contenido del tercer byte de b:" << (int)*(++p) << endl;
 cout <<"Contenido del cuato byte de b:" <<(int)*(++p) <<endl;

//a partir de esta linea se crea memoria dinamicamente 

 p = new char;
 *p = 71;
 cout << "imprimiendo direccion nueva:" <<(long)p << endl;
 cout << "Imprimiendo el contenido de esa memoria:" << (int)*p <<endl;
 
 return 0;
}
