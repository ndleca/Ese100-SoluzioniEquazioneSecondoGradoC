#include "quadraticEquationSolver.h"

#include <math.h>

float delta(float a, float b, float c){
    float ris = (pow(b,2))-4*a*c;
    return (ris);
}

complexNumber soluzioneX1(float a, float b, float delta){
    complexNumber ris;
    
    if(delta < 0){
        ris.re = -b;
        ris.im = -(sqrt(-delta))/(2*a);
    }
    else{
        ris.re = -b-sqrt(delta);
        ris.im = 0;
    }
    ris.re = ris.re/(2*a);
    return ris;
}

complexNumber soluzioneX2(float a, float b, float delta){
    complexNumber ris;
    
    if(delta < 0){
        ris.re = -b;
        ris.im = sqrt(-delta)/(2*a);
    }
    else{
        ris.re = -b+sqrt(delta);
        ris.im = 0;
    }
    ris.re = ris.re/(2*a);
    return ris;
}