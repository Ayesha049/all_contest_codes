#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string input[n];
    char arr[n];
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }
    for(int i=0; i<n; i++)
    {
        int aa;
        cin>>aa;
        a[i]=aa-1;
    }
    int flag=0;
    int pos=0;
    while(1)
    {
        for(int i=0; i<n; i++)
        {
            arr[i]=input[i][pos];
        }
        int ff=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]!=arr[i+1])
            {
                ff=1;
                break;
            }
        }
        if(ff==1)
            break;
        pos++;

    }
    map<int,char>mp;
    for(int i=0; i<n; i++)
    {
        mp[a[i]]=arr[a[i]];
    }
    sort(arr,arr+n);
    map<char,char>mp2;

    for(int i=0; i<n; i++)
    {
        mp2[mp[a[i]]]='A';
    }

    for(int i=0; i<n; i++)
    {
        if(mp2[mp[a[i]]]=='A')
            mp2[mp[a[i]]]=arr[i];
        else
        {
            if(mp2[mp[a[i]]]!=arr[i])
            {
                flag=1;
                //break;
            }
        }
    }

    //if(flag==1)
        //cout<<"NE"<<endl;
    //else
    {
        cout<<"DA"<<endl;
        char cc='a';
        for(int i=1; i<=26; i++)
        {
            if(mp2[cc]==0)
                cout<<cc;
            else
                cout<<mp2[cc];
            cc++;
        }

    }


}
