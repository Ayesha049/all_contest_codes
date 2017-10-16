#include<stdio.h>

void printBits(int x)
{
    int m,s,i,count;
    s = 8*sizeof(x);
    m = 0x80000000;
    count = 0;
    for(i=0; i<s; i++)
    {
        if((m&x)==0)
        {
            count+=0;
        }
        else
        {
            count+=1;
        }
        x = x<<1;
    }
    if(count%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
int main()
{
    int x;
    scanf("%d",&x);
    printBits(x);
}
