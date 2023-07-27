#include<stdio.h>
struct ABC
{
    char name[10];
    int id;
    float roll;
}s1;
int main(){
    printf("Enter name: ");
    scanf("%s",s1.name);
    printf("Enter id: ");
    scanf("%d",&s1.id);
    printf("Enter roll: ");
    scanf("%f",s1.roll);
}