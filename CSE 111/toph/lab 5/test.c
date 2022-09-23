#include<stdio.h>
void name(char i[20]){
    printf("your name is %s", i);
}
void age(int ager){ 

    printf("Age: %d \n", ager); 
}
void id(int idt) { 

    printf("ID: %d \n", idt);
}
int main(){
      char namei[20]; 
      printf("Enter your Name: "); 
      scanf("%s", namei); 
      int idt; 
      printf("\nEnter your ID: "); 
      scanf("%d", &idt); 
      int ager; 
      printf("Enter your Age: "); 
      scanf("%d", &ager); 

      age(ager);
      id(idt);
      name(namei);
}
