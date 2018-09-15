/*
 * This program will give you a list where the user can choose between taking the perimeter, area or volume of a cube
 * Name: Óscar Rubén Gómez Ríos
 * Matricule: A01411750
 * Mail: A01411750@itesm.mx
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char a,b,c,x,opc;

    double side,vol,sup;
    do{
        printf("\nMenu\n");
        printf("a.perimeter\n b. surface\n c. volume\n x. exit\n");
        printf("Give me your option");
        do{
            opc=getchar();
        }while ((opc!='a')&&(opc!='b')&&(opc!='c')&&(opc!='x'));

        printf("\n");
        if(opc=='a');
        {
            printf("\nGive me a side: ");
            scanf("%lf",&side);
            printf("Perimeter: %.4lf", side*4);
        }
        if(opc=='b');
        {
            printf("\nGive me a side: ");
            scanf("%lf", &side);
            printf("Area: %.4lf", side*side);
        }
        if(opc=='c');
        {
            printf("\nGive me a side: " );
            scanf("%lf", &side);
            printf("Volume: %.4lf", side*side*side);
        }

    }while (opc!='x');

    return 0;
}