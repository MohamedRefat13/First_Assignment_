#include<stdio.h>
#include<stdlib.h>
void Sorting(int *Array , int Size);
void Get_Max_And_Min(int *Array ,int Size ,int *Max , int *Min);
int main()
{
    int ArraySize , i;
    int Max , Min;
    printf("Enter the size of Array : ");
    scanf("%d",&ArraySize);
    int  *ptr = (int *)malloc(ArraySize*sizeof(int));
    printf("Enter the element of Array : ");
    for(i=0 ; i<ArraySize ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    Get_Max_And_Min(ptr , ArraySize , &Max , &Min);
    printf("The max is : %d \n",Max);
    printf("The Min is : %d \n",Min);
}
void Get_Max_And_Min(int *Array ,int Size ,int *Max , int *Min)
{
    Sorting(Array , Size);
    *Max = Array[Size-1];
    *Min = Array[0];

}
void Sorting(int *Array , int Size)
{
    int i , j;
    for(i=0 ; i<=Size-1 ; i++)
    {
        for(j=i ; j<Size-1 ; j++)
        {
            if(Array[j]>Array[j+1])
            {
                int t = Array[j];
                Array[j]=Array[j+1];
                Array[j+1]= t;
            }
        }
    }
}