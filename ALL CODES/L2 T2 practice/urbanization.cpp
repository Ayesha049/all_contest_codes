#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

void max_heap(int *a,int i, int n)
{
    int largest;
    int l=2*i;
    int r=2*i+1;
    if(l<=n && a[l]<a[i])
    {
        largest = l;
    }
    else largest = i;
    if(r<=n && a[r]<a[largest])
    {
        largest = r;
    }
    if(largest!=i)
    {
        int t= a[i];
        a[i]=a[largest];
        a[largest]=t;
        max_heap(a,largest,n);
    }

}

void buildheap(int *a, int n)
{
    for(int i=n/2; i>=1; i--)
    {
        max_heap(a,i,n);
    }
}

void heapsort(int *a, int n)
{
    buildheap(a,n);
    for(int i=n; i>=2; i--)
    {
        int t= a[1];
        a[1]=a[i];
        a[i]=t;
        n=n-1;
        max_heap(a,1,n);
    }
}


int main()
{
    int n,n1,n2;
    int arr[100001];
    cin>>n>>n1>>n2;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    heapsort(arr,n);
    double sum1=0;
    double sum2=0;
    double avg;
    //if(n1<n2)
    {
        for(int i=1; i<=n1; i++)
        {
            sum1=sum1+arr[i];
        }
        avg=sum1/n1;
        for(int i=n1+1; i<=n1+n2; i++)
        {
            sum2+=arr[i];
        }
        avg+=sum2/n2;
    }
    //else
    sum1=0;
    sum2=0;
    double avg1;
    {
        for(int i=1; i<=n2; i++)
        {
            sum1=sum1+arr[i];
        }
        avg1=sum1/n2;
        for(int i=n2+1; i<=n1+n2; i++)
        {
            sum2+=arr[i];
        }
        avg1+=sum2/n1;
    }
    if(avg>avg1)
        {
            //cout<<avg<<endl;
            std::cout << std::fixed << std::setprecision(8) << avg;
        }
    else
        std::cout << std::fixed << std::setprecision(8) << avg1;
}
