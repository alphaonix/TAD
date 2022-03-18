#include "cilindro.h"

Cilindro* cria_cilindro(float altura, float raio)
{
    Cilindro* c = (Cilindro*) malloc(sizeof(Cilindro));

    if (c != NULL)
    {
        c -> raio = raio;
        c -> altura = altura;
    }
    return (c);
}

void libera_cilindro(Cilindro* c)
{
    if (c != NULL)
    {
        free(c);
    }
}

float altura_cilindro(Cilindro* c)
{
    if (c != NULL)
    {
        return (c-> altura);
    }
}

float raio_cilindro(Cilindro* c)
{
    if (c != NULL)
    {
        return (c-> raio);
    }
}

float area_base_cilindro(Cilindro* c)
{
    if (c != NULL)
    {
        return (PI*(c-> raio * c-> raio));
    }
}
float area_face_cilindro(Cilindro* c)
{
    if (c != NULL)
    {
        return (2*PI*(c->raio*c->altura));
    }
}
float volume_cilindro(Cilindro* c)
{
    if (c != NULL)
    {
        return ((PI*(c-> raio * c-> raio) * c-> altura));
    }
}