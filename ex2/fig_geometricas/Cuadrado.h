/**
 * Project Untitled
 */


#ifndef _CUADRADO_H
#define _CUADRADO_H

class Cuadrado {
public: 
    
/**
 * @param I
 * @param x
 * @param y
 */
void Cuadrado(float I, float x, float y);
    
float Perimetro();
    
float area();
private: 
    float _lado;
    float _xc;
    float _yc;
    float _angulo;
    float _area;
    float _perimetro;
    
void Cuadrado();
};

#endif //_CUADRADO_H