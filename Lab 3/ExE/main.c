#include <stdio.h>
#include <math.h>

void calculaHexagono(float l, float *area, float *perimetro) {
    *area = ((3*(l*l))*sqrt(3))/2; // F�rmula da �rea de um hex�gono regular
    *perimetro = 6 * l; // Per�metro � a soma dos lados
    printf("Area do hexagono: %.2f\n", *area);
    printf("Perimetro do hexagono: %.2f\n", *perimetro);
}

int main() {
    float lado, area, perimetro;
    printf("Digite o valor do lado do hexagono: ");
    scanf("%f", &lado);
    calculaHexagono(lado, &area, &perimetro);
    return 0;
}
