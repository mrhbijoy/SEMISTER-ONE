#include <stdio.h>
#include <cstring>

int main()
{
char str[100];
int i=0;
printf("Enter the string: ");
gets(str);
printf("\nThe string is: %s\n", str);
while(str[i]!='\0')
{
i++;
}
printf("\nThe length of string is: %d\n", i);
int len=strlen(str);
printf("\nThe length of string is: %d\n", len);

}
