#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string name[51];
    map<string,int> points;
    map<string,int> goals;
    map<string,int> missed;

    for(int i=1;i<=n;i++)
    {
        cin>>name[i];
    }
    for(int i=1;i<=(n*(n-1)/2);i++)
    {
        string s;
        cin>>s;
        int g1,g2;
        char ch;
        cin>>g1>>ch>>g2;
        int z=0;
        char arr[100];
        while(s[z]!='-')
        {
            arr[z]=s[z];
            z++;
        }
        arr[z]='\0';
        string ss1=arr;
        int xx=0;
        z++;
        while(s[z]!='\0')
        {
            arr[xx]=s[z];
            z++;
            xx++;
        }
        arr[xx]='\0';
        string ss2=arr;
        if(g1>g2)
        {
            points[ss1]+=3;
            points[ss2]+=0;
            goals[ss1]+=g1;
            goals[ss2]+=g2;
            missed[ss2]+=(g1);
            missed[ss1]+=0;
        }
        else if(g1<g2)
        {
            points[ss2]+=3;
            points[ss1]+=0;
            goals[ss1]+=g1;
            goals[ss2]+=g2;
            missed[ss1]+=(g2);
            missed[ss2]+=0;
        }
        else if(g1==g2)
        {
            points[ss1]+=1;
            points[ss2]+=1;
            goals[ss1]+=g1;
            goals[ss2]+=g2;
            missed[ss1]+=0;
            missed[ss2]+=0;
        }
       //cout<<ss1<<"  "<<ss2<<endl;
    }
    /*cout<<"points"<<endl;
    map<string,int>::iterator it;
    for(it=points.begin();it!=points.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"goals"<<endl;
    for(it=goals.begin();it!=goals.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"missed"<<endl;
    for(it=missed.begin();it!=missed.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }*/
    string sol[101];
    for(int i=1;i<=n/2;i++)
    {
        int mx=-1;
        string ayes;
        map<string,int>::iterator it;
        for(it=points.begin();it!=points.end();it++)
        {
            if((it->second)>mx)
            {
                mx=it->second;
                ayes=it->first;
            }
            else
            {
                if(it->second==mx)
                {
                    if((goals[it->first]-missed[it->first])>(goals[ayes]-missed[ayes]))
                    {
                        //cout<<endl<<endl<<"fhdvhsbfvdsflsbzbk"<<endl<<endl;
                        ayes=it->first;
                    }
                    else
                    {
                        if((goals[it->first]-missed[it->first])==(goals[ayes]-missed[ayes]))
                        {
                            if((goals[it->first])>(goals[ayes]))
                            {
                                ayes=it->first;
                            }
                        }
                    }
                }
            }
        }
        sol[i-1]=ayes;
        points[ayes]=-2;

    }
    sort(sol,sol+n/2);
    for(int i=0;i<n/2;i++)
        cout<<sol[i]<<endl;
}


/*
4

TeMnHVvWKpwlpubwyhzqvc

AWJwc

bhbxErlydiwtoxy

EVASMeLpfqwjkke

AWJwc-TeMnHVvWKpwlpubwyhzqvc 37:34

bhbxErlydiwtoxy-TeMnHVvWKpwlpubwyhzqvc 38:99

bhbxErlydiwtoxy-AWJwc 33:84

EVASMeLpfqwjkke-TeMnHVvWKpwlpubwyhzqvc 79:34

EVASMeLpfqwjkke-AWJwc 24:37

EVASMeLpfqwjkke-bhbxErlydiwtoxy 3:6

*/
