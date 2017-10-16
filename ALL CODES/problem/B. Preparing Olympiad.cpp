#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define ll long long
#define maxn 20
ll n,l,r,x;
ll a[maxn];

void solve()
{


}
int main()
{
    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    int m = 1 << n;
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        int Max = -1, Min = 0x3f3f3f3f;
        int s = 0;
        int num = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                s += a[j];
                ++num;
                if (a[j] > Max) Max=a[j];
                if (a[j] < Min) Min=a[j];
            }
        }
        if (num >= 2 && s >= l && s <= r && Max-Min >= x) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
