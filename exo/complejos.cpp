#include <iostream>

using namespace std;

struct complex{
 double re;
 double im;
};

//suma entre dos complejos.

complex operator+(complex p, complex q){
 complex r;
 r.re = p.re + q.re;
 r.im = p.im + q.im;
 return r;
}

ostream& operator<<(ostream& out, complex m){
 out <<m.re << (m.im >0? "+":"")<< m.im <<"i";
}

int main(){
 complex a, b, c;
 a.re = 45.;
 a.im = 56.;
 
//punto flotante .

 b.re = 45.;
 b.im = -56.;
 
 c.re = a.re + b.re;
 c.im = a.im + b.im;

//usamos el operador de suma para ensenar a trabajar con nuevos numeros complejos 

 complex d = c + b;

 cout << c.re<<endl;

//ensene al operador de flujo imprimirme un numero complejo 

 cout <<d <<endl;
 
 return 0;
}
