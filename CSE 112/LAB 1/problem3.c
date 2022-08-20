#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,temp;
    float mean,standard_deviation,median,sum=0.0;
    int a[20];
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean=sum/n;
    sum=0.0;
    for(i=0;i<n;i++)
    {
        sum=sum+pow((a[i]-mean),2);
    }
    standard_deviation=sqrt(sum/n);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(n%2==0)
    {
        median=(a[(n-1)/2]+a[n/2])/2.0;
    }
    else
    {
        median=a[n/2];
    }
    printf("Mean = %.2f\n", mean);
    printf("Median = %.2f\n", median);
    printf("Standard Deviation = %.2f", standard_deviation);
    return 0;
}
    