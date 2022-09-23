#include<stdio.h>
void name(char i[20]){
  
printf("Your name is : %s \n", i);
}
void age(int ager){
    
    printf("Age: %d \n", ager);
}
void id(int idt) {

    printf("ID: %d \n", idt);
}
int main(){
      char i[20];
      printf("Enter your Name:");
      scanf("%s", i);
      int idt;
      printf("\nEnter your ID: ");
      scanf("%d", &idt);
      int aget;
      printf("Enter your Age: ");
      scanf("%d", &age);

      age(aget);
      id(idt);
}