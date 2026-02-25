#include <stdio.h>
int main(){

double a ,b , c, triangulo, circulo, trapezio, quadrado, retangulo;
scanf("%lf %lf %lf", &a, &b, &c);

triangulo = (a * c) / 2;
circulo = 3.14159 (a * c);
trapezio = ((a + b) * c) / 2;
quadrado = b * b;
retângulo = a * b;

printf("TRIANGULO: %.3f\nCIRCULO: %f.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", triangulo, circulo, trapezio, quadrado, retângulo);

return 0;
}