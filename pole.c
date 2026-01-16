
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

//prostokat();
kolo();
    return 0;

}
