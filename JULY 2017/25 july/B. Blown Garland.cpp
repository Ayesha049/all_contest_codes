#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s[65]={0},i,k,a1,a2,a3,a4;
    char b[5],a[105];
    scanf("%s",a);
    k=strlen(a);
    for(i=0;i<k;i++){
        switch(a[i])
        {
            case '!':s[i%4]++;break;
            case 'R':a1=i%4;break;
            case 'Y':a2=i%4;break;
            case 'G':a3=i%4;break;
            case 'B':a4=i%4;break;
        }
    }
    printf("%d %d %d %d\n",s[a1],s[a4],s[a2],s[a3]);

}
