#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2;
    scanf("%lf %lf",&x1,&x2);
    int n1;
    scanf("%d",&n1);
    vector<double>v1;
    vector<double>v2;
    v1.push_back(x1);
    v2.push_back(x2);
    double a;
    scanf("%lf",&a);
    for(int i=1; i<=a; i++)
    {
        v1.push_back(v1[v1.size()-1]);
    }
    double last=a;
    for(int i=1; i<n1; i++)
    {
        scanf("%lf",&a);
        if(i%2==0)
        {
            for(int i=last+1; i<=a; i++)
            {
                v1.push_back(v1[v1.size()-1]);
            }
        }
        else
        {
            for(int i=last+1; i<=a; i++)
            {
                v1.push_back(v1[v1.size()-1]+1);
            }
        }
        last=a;
    }
    if(n1%2==0)
    {
        for(int i=last+1; i<10000009; i++)
        {
            v1.push_back(v1[v1.size()-1]);
        }
    }
    else
    {
        for(int i=last+1; i<10000009; i++)
        {
            v1.push_back(v1[v1.size()-1]+1);
        }
    }
    int n2;
    scanf("%d",&n2);
    scanf("%lf",&a);
    for(int i=1; i<=a; i++)
    {
        v2.push_back(v2[v2.size()-1]);
    }
    last=a;
    for(int i=1; i<n2; i++)
    {
        scanf("%lf",&a);
        if(i%2==0)
        {
            for(int i=last+1; i<=a; i++)
            {
                v2.push_back(v2[v2.size()-1]);
            }
        }
        else
        {
            for(int i=last+1; i<=a; i++)
            {
                v2.push_back(v2[v2.size()-1]+1);
            }
        }
        last=a;
    }
    if(n2%2==0)
    {
        for(int i=last+1; i<10000009; i++)
        {
            v2.push_back(v2[v2.size()-1]);
        }
    }
    else
    {
        for(int i=last+1; i<10000009; i++)
        {
            v2.push_back(v2[v2.size()-1]+1);
        }
    }


    for(int i=0; i<=10000000; i++)
    {
        double dif=0;
        double diff;
        if(v1[i]>v2[i])
        {
            dif= v1[i]-v2[i];
            //diff = v2[i]+4.4-v1[i];
        }
        else dif= v2[i]-v1[i];
        if(dif<3)
        {
            printf("bumper tap at time %d\n",i-1);
            return 0;
        }
        else if(dif<5)
        {
            printf("bumper tap at time %d\n",i);
            return 0;
        }
    }
    printf("safe and sound\n");

}
