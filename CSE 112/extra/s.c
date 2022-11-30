#include <stdio.h>
struct student{
    int id;
    char name[20];
    char contact[20];
    char intake[20];
};
int main(){
    struct student s;
    printf("Enter the student id: ");
    scanf("%d", &s.id);
    printf("Enter the student name: ");
 
    scanf(" %[^\n]s", s.name);
    printf("Enter the student contact number: ");
    scanf("%s", s.contact);
    printf("Enter the student intake: ");
    scanf("%s", s.intake);
    printf("The student id is: %d\n", s.id);
    printf("The student name is: %s\n", s.name);
    printf("The student contact number is: %s\n", s.contact);
    printf("The student intake is: %s\n", s.intake);
    return 0;
}