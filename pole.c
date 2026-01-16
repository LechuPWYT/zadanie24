
#include <stdio.h>

float pole_prostokata(float a,float b) {
return a*b;
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
int main(void)
{

prostokat();
    return 0;

}
