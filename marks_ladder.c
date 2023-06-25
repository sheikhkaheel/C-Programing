#include <stdio.h>
int main ()
{
    float marks,total_marks=500,marks_obtained;
    printf("\n\nMARKS LADDER\n");
    printf("Enter your marks out of 500: ");
    scanf("%f",&marks_obtained);
    marks = (marks_obtained/total_marks)*100;
    if(marks<=100 && marks>90)
    {
        printf("You have got %f",marks);
    }
    else if(marks<90 && marks>=80)
    {
        printf("You have got %f",marks);
    }
    else if(marks<80 && marks>=70)
    {
        printf("You have got %f",marks);
    }
    else if(marks<70 && marks>=60)
    {
        printf("You have got %f",marks);
    }
    else if(marks<60 && marks>=0)
    {
        printf("You have got %f FAIL",marks);
    }
    else if(marks>100)
    {
        printf("You have entered wrong marks");
    }
    else
    {
        printf("You have entered wrong marks");
    }




    return 0;
}