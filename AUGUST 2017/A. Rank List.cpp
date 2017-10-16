#include<bits/stdc++.h>
using namespace std;
int arr[100][2];

int main()
{
    int n,k;
    cin>>n>>k;
    map<pair<int,int>,int > mp;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        mp[make_pair(arr[i][0],arr[i][1])]++;
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j][0]<arr[j+1][0])
            {
                int temp=arr[j][0];
                arr[j][0]=arr[j+1][0];
                arr[j+1][0]=temp;
                temp=arr[j][1];
                arr[j][1]=arr[j+1][1];
                arr[j+1][1]=temp;
            }
            else if(arr[j][0]==arr[j+1][0])
            {
                if(arr[j][1]>arr[j+1][1])
                {
                    int temp=arr[j][0];
                    arr[j][0]=arr[j+1][0];
                    arr[j+1][0]=temp;
                    temp=arr[j][1];
                    arr[j][1]=arr[j+1][1];
                    arr[j+1][1]=temp;
                }
            }
        }
    }

    cout<<mp[make_pair(arr[k-1][0],arr[k-1][1])]<<endl;

}

