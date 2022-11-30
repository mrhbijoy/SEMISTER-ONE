// C Program to Calculate Gross Salary of an Employee
#include <stdio.h>
int main(){
    float basic, a, b, gross_salary;


    printf("Enter the basic salary of an employee: ");
    scanf("%f", &basic);


    if (basic <= 25000){
        a = (basic * 10) / 100;
        b = (basic * 15) / 100;
    }
    else if (basic <= 40000){
        a = (basic * 12) / 100;
        b = (basic * 18) / 100;
    }
    else{
        a = (basic * 15) / 100;
        b = (basic * 20) / 100;
    }


    gross_salary = basic + a + b;


    printf("Gross salary of employee: %.2f", gross_salary);
    return 0;
}
