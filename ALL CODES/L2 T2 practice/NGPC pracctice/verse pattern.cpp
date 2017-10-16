#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    int flag=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<=n; i++)
    {
        char s[101];
        gets(s);
        int cnt=0;
        for(int j=0; s[j]!='\0'; j++)
        {
            if(s[j]=='a'||s[j]=='e'|| s[j]=='i'|| s[j]=='o' || s[j]=='u' || s[j]=='y')
            {
                cnt++;
            }
        }
        if(cnt!=arr[i])
        {
            flag=1;
        }

    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
