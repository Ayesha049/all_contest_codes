#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr1[10];
    char arr2[10];
    cin>>arr1>>arr2;
    int l=strlen(arr1);
    sort(arr1,arr1+l);
    int pos=-1;
    char ch1;
    if(arr1[0]=='0')
    {
        for(int i=0; i<l; i++)
        {
            if(arr1[i]!='0')
            {
                pos=i;
                ch1=arr1[i];
                break;
            }

        }
        if(pos!=-1)
        {
            arr1[pos]='0';
            arr1[0]=ch1;
        }

    }
    //cout<<arr1;
    if(strcmp(arr1,arr2)==0)
        cout<<"OK"<<endl;
    else
        cout<<"WRONG_ANSWER"<<endl;

}
