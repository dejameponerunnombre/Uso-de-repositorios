#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,r;
    printf("ingrese la nota 1");
    scanf("%f"&n1);
    printf("ingrese la nota 2");
    scanf("%f"&n2);
    printf("ingrese la nota 3");
    scanf("%f"&n3);
    r=(n1+n2+n3)/3;
    printf("El promedio es: %f", r);

    return 0;
}
