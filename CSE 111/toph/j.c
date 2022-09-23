#include <stdio.h>

int main()
{

    int i, count = 0, j,mod;
    char c;
    scanf("%d", &i);
    for (j = 1; j <= i; j++)
    {
        scanf("%c", &c);
        if (c != 'W' &&  c!= 'D' && c != 'N' ){
            count++;
        }
        
    }
    count = i - 9;
    if(count==0|| count==1){
        printf("%d BALL", count);
    }
    else if (count < 6 && count>1)
    {
        printf("%d BALLS", count);
    }
   else if (count == 6)
    {
        printf("1 OVER");
    }
    
  else if (count > 6)
 mod = count % 6;
        count = count / 6;
       if(mod==1 && count==1){
           printf("1 OVER 1 BALL");
       }
       else{
           printf("%d OVERS %d BALLS", count, mod);
       }


}