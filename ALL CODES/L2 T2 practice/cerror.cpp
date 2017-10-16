#include<iostream>
using namespace std;

int main()
{
    char ferr,serr;
    char arr1[100000];
    char arr2[100000];
    char arr3[100000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>arr3[i];
    }
    int j;
    for(int i=0;i<n;i++)
    {
        for( j=0;j<n-1;j++)
        {
            if(arr1[i]==arr2[j])
            {
                break;
            }
        }
        if(j==n-1)
        {
            ferr=arr1[i];
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for( j=0;j<n-2;j++)
        {
            if(arr2[i]==arr3[j])
            {
                break;
            }
        }
        if(j==n-2)
        {
            serr=arr2[i];
            break;
        }
    }
    cout<<ferr<<"\n"<<serr;


}
