#include <stdio.h>

int main() {
    float temperature;
    int choice;

    printf("Seleccione la conversión:\n");
    printf("1. Fahrenheit a Celsius\n");
    printf("2. Celsius a Fahrenheit\n");
    printf("Ingrese su elección: ");
    scanf("%d", &choice);

    printf("Ingrese la temperatura: ");
    scanf("%f", &temperature);

    if (choice == 1) {
        float result = (temperature - 32) * 5 / 9;
        printf("%.2f grados Fahrenheit equivale a %.2f grados Celsius.\n", temperature, result);
    } else if (choice == 2) {
        float result = (temperature * 9 / 5) + 32;
        printf("%.2f grados Celsius equivale a %.2f grados Fahrenheit.\n", temperature, result);
    } else {
        printf("Elección inválida. Por favor, seleccione 1 o 2.\n");
    }

    return 0;
}
