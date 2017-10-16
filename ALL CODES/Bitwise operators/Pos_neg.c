#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d",&n);
    m = 0x80000000;
    if((n&m)==0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
}
