#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<5;i++)
    {
        q.push(i);
    }
    int ans;
    for(int i=1;i<=n;i++)
    {
        ans=q.front();
        q.pop();
        q.push(ans);
        q.push(ans);

    }
    cout<<arr[ans]<<endl;

}
