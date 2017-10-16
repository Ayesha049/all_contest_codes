#include<stdio.h>

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

int swap(int x)
{
    int m1,m2;
    m1 = 0x55555555;
    m2 = 0xAAAAAAAA;
    return (m1&(x>>1)) | (m2&(x<<1));

}

int main()
{
    int x;
    scanf("%d",&x);
    printBits(x);
    printf("\n");
    printBits(swap(x));

}
