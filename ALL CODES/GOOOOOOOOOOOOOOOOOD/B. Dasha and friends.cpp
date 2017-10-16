#include <cstdio>
bool checker = false, sasha[100] = {0};
int n, L, K[50], S, cnt;
int main ()
{
    scanf("%d %d", &n, &L);
    for (int i = 0; i < n; i++)
        scanf("%d", &K[i]);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &S);
        sasha[S] = true;
    }
    for (int i = 0; i < L; i++)
    {
        cnt = 0;
        for (int j = 0; j < n; j++)
            cnt += sasha[(K[j] + i) % L];
        checker = checker || cnt == n;
    }
    printf("%s\n", checker ? "YES" : "NO");
    return 0;
}
