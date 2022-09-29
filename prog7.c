#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i =0;
    char FirstString[100]= "Mohamed Refat";
    char SecondString[100]={0};
    while(FirstString[i]!='\0')
    {
        SecondString[i]=FirstString[i];
        i++;            
    }
    printf("%s\n",SecondString);
}