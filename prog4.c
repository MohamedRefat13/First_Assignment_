#include<stdio.h>
int main()
{
    int InputNum , Sum=0;
    scanf("%d",&InputNum);
    while(InputNum!=0)
    {
        Sum += (InputNum%10);
        InputNum/=10;
    }
    printf("Sum of digits = %d",Sum);
}