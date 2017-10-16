#include<iostream>
using namespace std;

class vehicle
{
public:
    int ind;
    int num;
    void sett(int a,int b)
    {
        num=a;
        ind=b;
    }
};

void max_heap(vehicle a[],int i, int n)
{
    int largest;
    int l=2*i;
    int r=2*i+1;
    if(l<=n && a[l].num>a[i].num)
    {
        largest = l;
    }
    else largest = i;
    if(r<=n && a[r].num>a[largest].num)
    {
        largest = r;
    }
    if(largest!=i)
    {
        vehicle rr;
        rr= a[i];
        a[i]=a[largest];
        a[largest]=rr;
        max_heap(a,largest,n);
    }

}

void buildheap(vehicle a[], int n)
{
    for(int i=n/2; i>=1; i--)
    {
        max_heap(a,i,n);
    }
}

void heapsort(vehicle a[], int n)
{
    buildheap(a,n);
    for(int i=n; i>=2; i--)
    {
        vehicle t;
        t= a[1];
        a[1]=a[i];
        a[i]=t;
        n=n-1;
        max_heap(a,1,n);
    }
}

int main()
{
    int indx[10000];
    vehicle ct[5000];
    vehicle kk[5000];
    int vhc,capacity;
    cin>>vhc>>capacity;
    int k=1;
    int c=1;
    for(int i=1; i<=vhc; i++)
    {
        int id;
        cin>>id;
        if(id==1)
        {
            cin>>kk[k++].num;
            kk[k-1].ind=i;
        }
        else if(id==2)
        {
            cin>>ct[c].num;
            ct[c++].ind=i;
        }

    }
    k--;
    c--;
    heapsort(kk,k);
    heapsort(ct,c);
    /*
    cout<<"1111"<<endl;
    for(int i=1;i<=c;i++)
    {
        cout<<ct[i].num<<" "<<ct[i].ind<<endl;
    }

    cout<<"222222"<<endl;
    for(int i=1;i<=k;i++)
    {
        cout<<kk[i].num<<" "<<kk[i].ind<<endl;
    }

    cout<<"FOR TESTING"<<endl;*/

    if(capacity==1)
    {
        cout<<kk[k].num<<endl<<kk[k].ind;
    }
    else
    {
        int count=0;
        int ans=0;
        int xx=0;
        while(capacity-count>=2)
        {
            //cout<<"in loop"<<count<<endl;

            if(k>=2 && c>=1)
            {
                if((kk[k].num + kk[k-1].num)<ct[c].num)
                {
                    ans= ans + ct[c].num;
                    c--;
                    count= count+2;
                    indx[xx++]=ct[c+1].ind;

                }
                else if((kk[k].num + kk[k-1].num)>ct[c].num)
                {
                    ans= ans + kk[k].num + kk[k-1].num;
                    indx[xx++]=kk[k].ind;
                    indx[xx++]=kk[k-1].ind;
                    k=k-2;
                    count= count+2;

                }
            }
            else if(c<1)
            {
                ans= ans + kk[k].num;
                indx[xx++]=kk[k].ind;
                k--;
                count++;
            }
            else if(k<2)
            {
                ans = ans + ct[c].num;
                indx[xx++]=ct[c].ind;
                c--;
                count= count+2;
            }

        }
        int mark=-1;
        if(capacity-count==1)
        {
            if((kk[k].num+kk[k+1].num)>ct[c].num)
            {
                ans=ans+kk[k].num;
                indx[xx++]=kk[k].ind;
            }
            else
            {
                mark=kk[k+1].ind;
                ans= ans-kk[k+1].num;
                ans= ans+ct[c].num;
                indx[xx++]=ct[c].ind;
            }
        }

        cout<<ans<<endl;
        for(int i=0; i<xx; i++)
        {
            if(indx[i]!=mark)
            {
                cout<<indx[i]<<" ";
            }
        }


    }
}
