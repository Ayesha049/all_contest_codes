#include<stdio.h>
int getBits(int x,int p,int n)
{
    int s,m;
    s = 8*sizeof(x);
    m = ~(~0<<n);
    return ((x>>(p-n+1))&m);
}

void printBits(int x)
{
    int m,s,i;
    s = 8*sizeof(x);
    m = 0x80000000;
    for(i=0; i<s; i++)
    {
        if((m&x)==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        x = x<<1;
    }
}

int main()
{
    int x,p,n;
    scanf("%d %d %d",&x,&p,&n);
    printBits(x);
    printf("\n");
    printBits(getBits(x,p,n));
}
