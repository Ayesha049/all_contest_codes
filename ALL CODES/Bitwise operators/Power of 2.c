#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if((n&(n-1))==0){
        printf("Power of two");
    }
    else{
        printf("Not a power of two");
    }
}
