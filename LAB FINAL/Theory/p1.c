// Write a C Program to convert days to years, weeks and days.
#include <stdio.h>
int main()
{
    int days, years, weeks;
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = (days/365);
    weeks = (days%365)/7;
    days = days - ((years*365) + (weeks*7));
    printf("Years: %d ", years);
    printf("Weeks: %d ", weeks);
    printf("Days: %d ", days);
    return 0;
}