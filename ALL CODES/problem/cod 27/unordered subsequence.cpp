#include<bits/stdc++.h>
using namespace std;

int arr[100001];

int main()
{
    int n;
    cin>>n;
    if(n<=2)
        cout<<"0"<<endl;
    else
    {
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int fst,snd,thrd,ind=1;
        int flag=0;
        if(arr[0]>arr[1])
        {
            fst=0;
            snd=1;
            while(arr[ind]>arr[ind+1])
            {
                fst=ind++;
                snd=ind;
            }
            for(int i=ind; i<n-1; i++)
            {
                if(arr[i]<arr[i+1])
                {
                    flag=1;
                    thrd=i+1;
                    break;
                }
            }

        }
        else if(arr[0]<arr[1])
        {
            fst=0;
            snd=1;
            while(arr[ind]<arr[ind+1])
            {
                fst=ind++;
                snd=ind;
            }
            for(int i=ind; i<n-1; i++)
            {
                if(arr[i]>arr[i+1])
                {
                    flag=1;
                    thrd=i+1;
                    break;
                }
            }
        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                if(arr[i]!=arr[i+1])
                {
                    ind=i;
                    break;
                }
            }
            if(arr[ind]>arr[ind+1])
            {
                fst=ind;
                snd=ind+1;
                while(arr[ind]>arr[ind+1])
                {
                    fst=ind++;
                    snd=ind;
                }
                for(int i=ind; i<n-1; i++)
                {
                    if(arr[i]<arr[i+1])
                    {
                        flag=1;
                        thrd=i+1;
                        break;
                    }
                }

            }
            else if(arr[ind]<arr[ind+1])
            {
                fst=ind;
                snd=ind+1;
                while(arr[ind]<arr[ind+1])
                {
                    fst=ind++;
                    snd=ind;
                }
                for(int i=ind; i<n-1; i++)
                {
                    if(arr[i]>arr[i+1])
                    {
                        flag=1;
                        thrd=i+1;
                        break;
                    }
                }
            }

        }
        if(flag==1)
        {
            cout<<"3"<<endl<<fst+1<<" "<<snd+1<<" "<<thrd+1;
        }
        else
            cout<<"0"<<endl;

    }
}
