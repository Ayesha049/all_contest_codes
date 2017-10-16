#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr[181];
    int t;
    cin>>t;
    for(int i=1;i<180;i++)
    {
        if(i<=120)
            arr[i]="NO";

        else
        {
            int a=(180-i);
            if(360%a==0)
                arr[i]="YES";
            else
                arr[i]="NO";
        }
    }

    arr[60]="YES";
    arr[90]="YES";
    arr[108]="YES";
    arr[120]="YES";
    arr[180]="NO";

    while(t--)
    {
        int a;
        cin>>a;
        cout<<arr[a]<<endl;
    }
}
