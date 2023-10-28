/**
 * @file DistanciaEntreDosPuntos.c
 * @author Borisirj
 * @brief 
 * @version 0.1
 * @date 2023-06-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

struct punto{}
    int x, y

int main(){
    system ("cls@||clear");
    struct punto p1, p2;
    float distancia, pendiente, AnguloInclinacion; 
    printf("Ingresar las coordenadas del primer punto x, y: ");
    scanf("%i,%i", &p1.x, &p1.y);
    getchar();
    printf("Ingrese las cordenadas para el punto final x, y: ");
    scanf("%i,%i", &p2.x, &p2.y);
    getchar();

    distancia = sqrtf(powf((p2.x - p1.x),2)+ powf((p2.y - p1.y),2));
    pendiente = (p2.y - p1.y)/(p2.x - p1.x)
    AnguloInclinacion = atanf(pendiente);
    AnguloInclinacion = AnguloInclinacion * 180 / PI

    printf("La distancia de entre los dos puntos es: "+ distancia)
    Printf ("El angulo de inclinacion entre los dos puntos es: "+ AnguloInclinacion)
}
