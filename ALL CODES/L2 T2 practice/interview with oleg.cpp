#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0,j;
    vector<char>vt;
    while(1)
    {
        if(i>=n)
            break;
        else
        {
            if(s[i]!='o')
            {
                vt.push_back(s[i]);
                i++;
            }
            else
            {
                if(i<(n-2))
                {
                    if(s[i+1]=='g' && s[i+2]=='o')
                    {
                        vt.push_back('*');
                        vt.push_back('*');
                        vt.push_back('*');
                        i+=3;
                        while(i<(n-1))
                        {
                            if(s[i]=='g' && s[i+1]=='o')
                            {
                                i+=2;
                            }
                            else
                                break;
                        }
                    }
                    else
                    {
                        vt.push_back(s[i]);
                        i++;
                    }
                }
                else
                {
                    vt.push_back(s[i]);
                    i++;
                }
            }
        }
    }
    for(int i=0; i<vt.size(); i++)
        cout<<vt[i];
    cout<<endl;
}
