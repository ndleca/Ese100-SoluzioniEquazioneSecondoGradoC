#include <stdio.h>
#include <stdlib.h>

#include "complexNumbers.h"
#include "quadraticEquationSolver.h"

int main(int argc, char** argv)
{
    float a, b, c, rdelta;
    complexNumber x1, x2;
    printf("Inserisci il coefficiente di x^2: ");
    scanf("%f", &a);
    printf("Inserisci il coefficiente di x: ");
    scanf("%f", &b);
    printf("Inserisci il coefficiente c: ");
    scanf("%f", &c);
    
    rdelta = delta(a, b, c);
    
    x1 = soluzioneX1(a, b, rdelta);
    x2 = soluzioneX2(a, b, rdelta); 
    
    printf("x1: %s \nx2: %s", formatComplexNumber(x1), formatComplexNumber(x2));
    
    return (EXIT_SUCCESS);
}