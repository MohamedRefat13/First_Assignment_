#include<stdio.h>
int GetPower(int Num , int Power);
int main()
{
    int InputNum , NumPower;
    printf("Enter the number : ");
    scanf("%d",&InputNum);
    printf("Enter the number Power : ");
    scanf("%d",&NumPower);

    printf("%d",GetPower(InputNum,NumPower));
   
}
int GetPower(int Num , int Power)
{
    if(Power==0)
    {
        return 1;
    }
    if(Power == 1)
    {
        return Num;
    }
    else 
    return Num*GetPower(Num , Power-1) ;
}