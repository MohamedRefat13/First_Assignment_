#include<stdio.h>
#include<stdlib.h>
int main()
{
   int ArraySize , i , Even=0 , odd=0 ;
   scanf("%d",&ArraySize);
   int  *ptr = (int *)malloc(ArraySize*sizeof(int));
   for(i =0 ; i<ArraySize ; i++)
   {
        scanf("%d",&ptr[i]);
        if (ptr[i]%2==0)
        {
            Even++;
        }else 
        {
            odd++;
        }
   }
    free(ptr);
    printf("Total even Element : %d\n",Even);
    printf("Total odd Element : %d\n",odd);
}