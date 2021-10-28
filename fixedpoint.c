#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

#define f(x) cos(x) - x *exp((x))
#define g(x) cos(x) / exp((x))
int main()
{
    int step = 1;
    float x0, x1, E, err;

    printf("Enter initial guess: ");
    scanf("%f", &x0);
    printf("Enter tolerable error: ");
    scanf("%f", &E);
    printf("-----------------------------------");
    printf("\nStep\t x0\t\t x1\t\t error\n");
    printf("-----------------------------------\n");
    do
    {
        x1 = g(x0);
        err = fabs(x1 - x0) / x1;
        printf("%d\t%f\t%f\t%f\n", step, x0, x1, err);

        step = step + 1;
        x0 = x1;

    } while (fabs(err) > E);
    printf("-----------------------------------");
    printf("\nThe required root is %f", x1);
    getch();
}
