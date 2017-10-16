#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%4!=0)
    {
        cout<<"==="<<endl;
    }
    else
    {
        int cntA=0;
        int cntG=0;
        int cntC=0;
        int cntT=0;
        int cnt=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='A')
                cntA++;
            if(s[i]=='G')
                cntG++;
            if(s[i]=='C')
                cntC++;
            if(s[i]=='T')
                cntT++;
            if(s[i]=='?')
                cnt++;
        }
        int mn=max(cntA,cntG);
        mn=max(mn,cntC);
        mn=max(mn,cntT);
        //cout<<mn<<endl;
        int cc=mn-cntA;
        cc+=mn-cntC;
        cc+=mn-cntG;
        cc+=mn-cntT;
        //cout<<cc<<cnt<<endl;
        if(cc>cnt)
        {
            cout<<"==="<<endl;
        }
        else if((cnt-cc)%4!=0)
        {
            cout<<"==="<<endl;
        }
        else
        {
            stack<char>st;
            for(int i=cntA; i<mn; i++)
                st.push('A');
            for(int i=cntG; i<mn; i++)
                st.push('G');
            for(int i=cntC; i<mn; i++)
                st.push('C');
            for(int i=cntT; i<mn; i++)
                st.push('T');
            int ii;
            for(ii=0; ii<s.length(); ii++)
            {
                if(st.empty())
                    break;
                if(s[ii]=='?')
                {
                    char ccc=st.top();
                    st.pop();
                    cout<<ccc;
                }
                else
                    cout<<s[ii];
            }
            int cnt=cnt-cc;
            for(int i=ii;i<n;i++)
            {
                if(s[i]=='?')
                {
                    if(cnt%4==0)
                        cout<<"A";
                    if(cnt%4==1)
                        cout<<"G";
                    if(cnt%4==2)
                        cout<<"C";
                    if(cnt%4==3)
                        cout<<"T";
                    cnt--;
                }
                else
                {
                    cout<<s[i];
                }
                if(cnt==0)
                    break;
            }
            //cout<<s<<endl;

        }
    }
}
