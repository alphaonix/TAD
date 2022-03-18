#ifndef __CILINDRO_H__
#define __CILINDRO_H__
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

#define PI 3.14

typedef struct cilindro{
    float altura;
    float raio;
} Cilindro;

Cilindro* cria_cilindro(float altura, float raio);
void libera_cilindro(Cilindro* c);
float altura_cilindro(Cilindro* c);
float raio_cilindro(Cilindro* c);
float area_base_cilindro(Cilindro* c);
float area_face_cilindro(Cilindro* c);
float volume_cilindro(Cilindro* c);

#endif 