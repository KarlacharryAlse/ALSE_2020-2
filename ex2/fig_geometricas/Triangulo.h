/**
 * Project Untitled
 */


#ifndef _TRIANGULO_H
#define _TRIANGULO_H

class Triangulo {
public: 
    
/**
 * @param b
 * @param h
 * @param x
 * @param y
 */
void Triangulo(float b, float h, float x, float y);
    
double Area();
    
float perimetro();
private: 
    float _base;
    float _Altura;
    float _xc;
    float _yc;
    float _angulo;
    float _area;
    float _perimetro;
    
void Triangulo();
};

#endif //_TRIANGULO_H