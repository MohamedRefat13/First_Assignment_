#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    char BinaryNum[32];
    int Num_of_Digit , i , Decimal_Num=0;
    scanf("%s",BinaryNum);
    Num_of_Digit = strlen(BinaryNum);
    printf("number of digit is %d\n",Num_of_Digit);
    for(i=Num_of_Digit-1 ; i>=0 ; i--)
    {
        Decimal_Num += ( ( BinaryNum[Num_of_Digit-i-1]-'0') *pow(2 , i) );
    }
    printf("the Decimal number is %d",Decimal_Num);
}