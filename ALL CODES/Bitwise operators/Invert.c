#include<stdio.h>
int invert(int x,int p,int n)
{
    int s,m;
    s = 8*sizeof(x);
    m = (~(~0<<n))<<(p-n+1);
    return x^m;
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
    printBits(invert(x,p,n));
}

