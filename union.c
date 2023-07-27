// A union is a user-defined type similar to structs in C except for one key difference.
// Structures allocate enough space to store all their members, whereas unions can only hold one member value at a time.

#include<stdio.h>
union ABC
{
    int a;
    char b;
}var;
int main(){

    var.a=50;
    var.b='k';
    printf("%d\n",var.a);  //It stores only one value
    printf("%c\n",var.b);  //var.a have same location as var.b
    printf("%p\n",&var.a); //var.b have same location as var.a
    printf("%p",&var.b);

    return 0;
}