#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d",&n);
    m=1;
    if((n&m)==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
