#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0,i,j,k,n;
    scanf("%d",&n);
    j=n-1;k=0;
    for(i=1;i<=n;i++)
    {
        sum+=i+(j*k);
        j--;k++;
    }
    printf("%d\n",sum);
}
