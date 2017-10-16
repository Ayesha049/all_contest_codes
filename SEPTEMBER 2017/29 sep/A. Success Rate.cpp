#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;

long long n, x, y, p, q;
double t;

inline bool check(long long t)
{
    return t*p >= x && p*t-x <= q*t-y;
}

int main()
{
    cin >> n;
    while (n --)
    {
        cin >> x >> y >> p >> q;
        long long l = 0, r = 1e9, mid, ans = -1;
        while (l <= r)
        {
            mid = l+r >> 1;
            if (check(mid))
            {
                r = mid-1;
                ans = mid;
            }
            else l = mid+1;
        }
        if (ans == -1) puts("-1");
        else cout << ans*q-y << endl;
    }
    return 0;
}
