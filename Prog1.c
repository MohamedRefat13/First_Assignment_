#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int num ,i=0, ones=0;
    char binary[33]={0};
    scanf("%d",&num);
    itoa(num , binary , 2);
    printf("%s\n",binary);
    for(i=0 ; i<32 ;i++)
    {
        if(binary[i]=='1')
        {
            ones++;
        }
    }
    printf("number of Ones  %d\n",ones);
    printf("number of Zeros %d\n",32-ones);

}
/*
//anothes solution
int main()
{
    int num ,i=0, ones=0;
    char binary[32]={0};
    scanf("%d",&num);
    while(num !=0 )
    {
        float x = num/2.0;
        num = num/2;
        if( fmod(x,num)!=0 )
        {
            binary[i]=1;           
        }
        i++;
    }

    for(i=0 ; i<32 ;i++)
    {
        if(binary[i]==1)
        {
            ones++;
        }
    }
    printf("number of Ones  %d\n",ones);
    printf("number of Zeros %d\n",32-ones);

}*/