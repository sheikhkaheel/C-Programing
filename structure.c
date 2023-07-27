//In C programming, a struct (or structure) is a collection of variables (can be of different types) under a single name.

#include<stdio.h> 
struct ABC
{
    int a;
    char b;
}var;
 int main()
{
    var.a=55;
    var.b='k';
    printf("%d\n",var.a);
    printf("%c\n",var.b);
    printf("%p\n",&var.a); // var.a will have different locations 
    printf("%p",&var.b);   // var.b will have different locations


    return 0;
}