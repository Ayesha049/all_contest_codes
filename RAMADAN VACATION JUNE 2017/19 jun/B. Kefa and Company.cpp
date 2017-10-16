/*#include<bits/stdc++.h>
using namespace std;
int arr[100001][2];

int main()
{
    int n,d;
    cin>>n>>d;
    d--;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j][0]>arr[j+1][0])
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
    vector<int>v;
    long long sum=0;
    vector<long long>s;
    for(int i=0; i<n; i++)
    {
        v.push_back(arr[i][0]);
        long long tmp=arr[i][1];
        sum+=tmp;
        s.push_back(sum);
    }
    //for(int i=0;i<n;i++) cout<<s[i]<<" ";
    int l=0;
    //cout<<"v+d  "<<v[l]+d<<endl;;
    vector<int>::iterator up;
    up= upper_bound (v.begin(), v.end(),v[l]+d);
    int r=(up - v.begin());
    //cout<<r<<endl;
    if(r==n) cout<<sum<<endl;
    else
    {

        long long mx=s[r-1];
        //cout<<mx<<endl;
        while(1)
        {
            l++;
            if(l==n) break;
            up= upper_bound (v.begin(), v.end(),v[l]+d);
            r=(up - v.begin());
            long long tmp=s[r-1]-s[l-1];
            //cout<<tmp<<endl;
            mx=max(mx,tmp);

        }
        cout<<mx<<endl;

    }
}
*/


#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,d,i,l=0,r=0,e=0,m=0;
    cin>>n>>d;
    pair<long long, long long> a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(l=0;r<n;)
    {
        if(a[r].first-a[l].first>=d)
            e-=a[l++].second;
        else e+=a[r++].second;
        m=max(m,e);
    }
    cout<<m;
}
