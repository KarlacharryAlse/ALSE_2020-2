/**
 * Project Untitled
 */


#ifndef _CIRCULO_H
#define _CIRCULO_H

class Circulo {
public: 
    
/**
 * @param r
 * @param x
 * @param y
 */
void Circulo(float r, float x, float y);
    
float area();
    
float perimetro();
private: 
    float _radio;
    float _xc;
    float _yc;
    float _area;
    float _perimetro;
    
void Circulo();
};

#endif //_CIRCULO_H