#include "cilindro.h"

int main ()
{
    float x,y,s;

    Cilindro* totalCilindro;

    printf ("Digite o valor do Cilindro:\n");

    printf ("Digite o Raio:\n");
    scanf ("%f",&x);
    printf ("Digite a Altura:\n");
    scanf ("%f",&y);
    totalCilindro = cria_cilindro(y,x);

    printf ("Altura: %.2f\n",altura_cilindro(totalCilindro));
    printf ("Raio: %.2f\n",raio_cilindro(totalCilindro));
    printf ("Area Base: %.2f\n",area_base_cilindro(totalCilindro));
    printf ("Area Face: %.2f\n",area_face_cilindro(totalCilindro));
    printf ("Volume: %.2f\n",volume_cilindro(totalCilindro));

    libera_cilindro(totalCilindro);

    return 0;
}