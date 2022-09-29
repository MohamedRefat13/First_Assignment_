#include<stdio.h>
int GetMaximum(int x , int y ,int z , int q);
int GetMinimum(int x , int y ,int z , int q);
int main()
{
    int x ,  y , z , q ;
    scanf("%d%d%d%d",&x , &y ,&z ,&q);
    printf("The max is %d \n",GetMaximum(x,y,z,q));


}
int GetMaximum(int x , int y ,int z , int q)
{
    int Max_Num = x ;
    if      (y>Max_Num)     Max_Num = y;
    if      (z>Max_Num)     Max_Num = z;
    if      (q>Max_Num)     Max_Num = q;

    return Max_Num;
}
int GetMinimum(int x , int y ,int z , int q)
{
    
    int Min_Num = x ;
    if      (y<Min_Num)     Min_Num = y;
    if      (z<Min_Num)     Min_Num = z;
    if      (q<Min_Num)     Min_Num = q;

    return Min_Num;
}