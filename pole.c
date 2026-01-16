
#include <stdio.h>
#define PI 3.14159265

float pole_prostokata(float a,float b) {
return a*b;
}
float pole_kola(float r) {
return PI*r*r;
}

void prostokat() {
 float a, b;
    float pole;

    printf("Podaj dlugosc boku a: ");
    scanf("%f", &a);

    printf("Podaj dlugosc boku b: ");
    scanf("%f", &b);

    pole = pole_prostokata(a,b);

    printf("Pole prostokata wynosi: %.2f\n", pole);
}
void kolo() {
 float r, pole;

    printf("Podaj promien kola: ");
    scanf("%f", &r);

    pole = pole_kola(r);

    printf("Pole kola wynosi: %.2f\n", pole);
}
int main(void)
{
int wybor;
printf("====================menu=====================\n");
    printf("1------Oblicz pole prostokata\n");
    printf("2------Oblicz pole kuli\n");
    printf("0------Wyjscie\n");
    scanf("%d", &wybor);

switch (wybor)
    {


case 1:
    prostokat();
    break;
case 2:
    kolo();
    break;
case 0:
    return 0;
    break;
default:
     printf("Prosze wybrac odpowiednia opcje");
     break;
    }
    return 0;

}
