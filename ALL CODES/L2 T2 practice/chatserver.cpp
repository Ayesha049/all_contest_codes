#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char a[105];
    int temp=0,ans=0;
    while(gets(a)){
        if(a[0]=='+') temp++;
        else if(a[0]=='-') temp--;
        else{
            int i,len=strlen(a);
            for(i=0;i<len;i++){
                if(a[i]==':') break;
            }
            ans+=(temp*(len-i-1));
        }
    }
    printf("%d\n",ans);
    return 0;
}
