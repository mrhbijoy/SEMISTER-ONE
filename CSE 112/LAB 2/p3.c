#include<stdio.h>
int main()
{
    int marks;
    float GPA;
    char *grade;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 80)
    {
        GPA = 4.0;
        grade = "A+";
    }
    else if(marks >= 75)
    {
        GPA = 3.75;
        grade = "A";
    }
    else if(marks >= 70)
    {
        GPA = 3.50;
        grade = "A-";
    }
    else if(marks >= 65)
    {
        GPA = 3.25;
        grade = "B+";
    }
      else if(marks >= 60)
    {
        GPA = 3.00;
        grade = "B";
    }
      else if(marks >= 55)
    {
        GPA = 2.75;
        grade = "B-";
    }
      else if(marks >= 50)
    {
        GPA = 2.50;
        grade = "C+";
    }
      else if(marks >= 45)
    {
        GPA = 2.25;
        grade = "C";
    }
      else if(marks >= 40)
    {
        GPA = 2.00;
        grade = "D";
    }
    else
    {
        GPA = 0.0;
        grade = "F";
    }

    printf("GPA: %.2f\n", GPA);
    printf("Grade: %s\n", grade);

    return 0;
}
