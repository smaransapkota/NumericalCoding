#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float x[10], y[10], temp = 1, f[10], sum, p;
    int i, n, j, k = 0, c;
    printf("\nEnter the number of records: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n\nEnter the value of x%d: ", i);
        scanf("%f", &x[i]);
        printf("\n\nEnter the value of f(x%d): ", i);
        scanf("%f", &y[i]);
    }
    printf("\n\nEnter X to find f(x): ");
    scanf("%f", &p);

    for (i = 0; i < n; i++)
    {
        temp = 1;
        k = i;
        for (j = 0; j < n; j++)
        {
            if (k == j)
            {
                continue;
            }
            else
            {
                temp = temp * ((p - x[j]) / (x[k] - x[j]));
            }
        }
        f[i] = y[i] * temp;
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + f[i];
    }
    printf("\n\n f(%.1f) = %f ", p, sum);
    getch();
}
