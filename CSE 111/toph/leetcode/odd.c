#include<stdio.h>
int countOdds(int low, int high){
int count = 0;
        for (low; low <= high;low++){
            if(low%2!=0){
              count++;
            }
        }
        return count;
}
int main(){
    int a = 8, b = 10;
    printf("%d", countOdds(a, b));
}