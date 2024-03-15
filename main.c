#include <stdio.h>
#include "matematica.h"

int main() {
    float angulo = 1.0; // Ângulo em radianos (exemplo)
    printf("Seno: %.4f\n", calcular_seno(3,14));
    printf("Cosseno: %.4f\n", calcular_cosseno(6,28));
    printf("Tangente: %.4f\n", calcular_tangente(9,36));
    return 0;
}
