#include <stdio.h>
#include <cstring>
void mode(){
    char mode[10];
    while(1){
        printf("Enter your mood: ");
        scanf("%s",mode);
        if(strcmp(mode,"happy")==0 || strcmp(mode,"Happy")==0){
            printf("You are happy now.Do whatever you want.");
            break;
        }
        else{
            printf("Read Humayun Ahmed's Books\n");
        }
    }
}


//make the mode function more efficient and short
void newMode(){
    char mode[10];
    while(1){
        printf("Enter your mood: ");
        scanf("%s",mode);
        if(strcmp(mode,"happy")==0 || strcmp(mode,"Happy")==0){
            printf("You are happy now.Do whatever you want.");
            break;
        }
        else{
            printf("Read Humayun Ahmed's Books\n");
        }
    }
}
