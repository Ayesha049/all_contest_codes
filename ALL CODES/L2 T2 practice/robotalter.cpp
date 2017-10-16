#include<iostream>
using namespace std;
class robot
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

void max_heap(robot a[],int i, int n)
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
        robot r;
        r= a[i];
        a[i]=a[largest];
        a[largest]=r;
        max_heap(a,largest,n);
    }

}

void buildheap(robot a[], int n)
{
    for(int i=n/2;i>=1;i--)
    {
        max_heap(a,i,n);
    }
}

void heapsort(robot a[], int n)
{
    buildheap(a,n);
    for(int i=n;i>=2;i--)
    {
        robot t;
        t= a[1];
        a[1]=a[i];
        a[i]=t;
        n=n-1;
        max_heap(a,1,n);
    }
}

int main()
{
    int computers[1001],x;
    int n,index[1001];
    int direction=0;
    int found=1;
    int flag=0;
    int zzzz;
    robot a[1001];
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[i].sett(x,i);

    }
    heapsort(a,n);



    /*while(found!=n)
    {

    }
    cout<<direction;*/



    for(int i=1;i<=n;i++)
    {
        cout<<a[i].num<<" "<<a[i].ind<<endl;
    }


}
