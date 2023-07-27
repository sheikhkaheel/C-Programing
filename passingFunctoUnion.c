#include<stdio.h>

struct human
{
   int age;
   int Rollno;
};

void ABC(struct human person );

int main(){
    struct human person;
    person.age = 21;
    person.Rollno = 22770020;
    ABC(person);
    return 0;
}
void ABC(struct human person){
    printf("Age is: %d\n",person.age);
    printf("Rollno is: %d\n",person.Rollno);
}

// Second Way only calling funcion not passing arguments

// #include<stdio.h>

// struct person
// {
//    int age;
//    int Rollno;
// }person;

// void ABC();

// int main(){
//     person.age = 21;
//     person.Rollno = 22770020;
//     ABC();
//     return;
// }
// void ABC(){
//     printf("Age is: %d\n",person.age);
//     printf("Rollno is: %d\n",person.Rollno);
// }