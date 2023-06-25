#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, Quad;
    float DIV1, DIV2, val1, val2;

    printf("Enter coefficient of x^2: ");
    scanf("%d", &a);

    printf("Enter coefficient of x: ");
    scanf("%d", &b);

    printf("Enter constant term: ");
    scanf("%d", &c);

    Quad = b * b - 4 * a * c;

    if (Quad >= 0)
    {
        val1 = (-b + sqrt(Quad)) / (2 * a);
        val2 = (-b - sqrt(Quad)) / (2 * a);

        printf("Roots are real: %.2f and %.2f\n", val1, val2);
    }
    else
    {
        val1 = -b / (2.0 * a);
        val2 = sqrt(-Quad) / (2.0 * a);

        printf("Roots are imaginary: %.2f + %.2fi and %.2f - %.2fi\n", val1, val2, val1, val2);
    }

    return 0;
}
