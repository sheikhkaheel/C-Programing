#include<stdio.h>
void main()
{   
    int radius,area,circumfrence;
    float pi = 3.14;
    printf("\n\nRead radius & find area and circumfrence");
    printf("\nRadius of a circle is :\t");
    scanf("%d",&radius);
    area = pi * radius * radius;
    circumfrence = 2 * pi * radius;
    printf("Area of circle is :%d",area);
    printf("\nCircumfrence of circle is :%d",circumfrence);
}