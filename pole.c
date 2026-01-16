
#include <stdio.h>

int main(void)
{
    float a, b;
    float pole;

    printf("Podaj dlugosc boku a: ");
    scanf("%f", &a);

    printf("Podaj dlugosc boku b: ");
    scanf("%f", &b);

    pole = a * b;

    printf("Pole prostokata wynosi: %.2f\n", pole);

    return 0;

}
