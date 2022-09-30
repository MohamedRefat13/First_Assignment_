#include<stdio.h>
int main()
{
    int Key;
    char binary[33]={0};
    printf("Enter a binary number : ");
    scanf("%s",binary);
    printf("Enter nth bit to check : ");
    scanf("%d",&Key);

    if(binary[Key-1]=='1')
    {
        printf("The %d bit is set to  %c\n",Key , binary[Key-1]);
    }else
    {
        printf("The %d bit is set to  %c\n",Key , binary[Key-1]);
    }
}