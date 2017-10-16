#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    string s2="";
    char s1[1000];
    //s1="1JKJ'pz'{ol'{yhklthyr'vm'{ol'Jvu{yvs'Kh{h'Jvywvyh{pvu5 1PIT'pz'h'{yhklthyr'vm'{ol'Pu{lyuh{pvuhs'I|zpulzz'Thjopul'Jvywvyh{pvu5 1KLJ'pz'{ol'{yhklthyr'vm'{ol'Kpnp{hs'Lx|pwtlu{'Jvywvyh{pvu5";
    //s2="*CDC is the trademark of the Control Data Corporation.";
    //cout<<s1<<endl<<s2<<endl;
    while(scanf("%s",s1)!=-1)
      {
          s2="";


        for(int i=0; i<strlen(s1); i++)
        {
            if(s1[i]!=' ')
            {
                s2+=s1[i]-7;
            }
            else
                s2+='\n';
        }
        cout<<s2<<endl;
      }

}
