#include<stdio.h>
int main()
{
    char Arithmetic_operator;
    float FirtsNum , SecondNum ; 
    printf("Enter an Operator { +, -, *, / }: ");
    scanf("%c",&Arithmetic_operator);
    printf("Enter two operands: ");
    scanf("%f%f",&FirtsNum , &SecondNum);
    switch (Arithmetic_operator)
    {
    case '+' : printf("%.1f + %.1f = %.1f \n", FirtsNum , SecondNum ,FirtsNum + SecondNum ); break;
    case '-' : printf("%.1f - %.1f = %.1f \n", FirtsNum , SecondNum ,FirtsNum - SecondNum ); break;
    case '*' : printf("%.1f * %.1f = %.1f \n", FirtsNum , SecondNum ,FirtsNum * SecondNum ); break;
    case '/' : printf("%.1f / %.1f = %.1f \n", FirtsNum , SecondNum ,FirtsNum / SecondNum ); break;
    default  : printf("Enter the right operator \n");break;
    }
}