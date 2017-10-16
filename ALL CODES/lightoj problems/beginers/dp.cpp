#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;



double A[401][401]; // Probability of finishing n rockets at exactly k salvos

double C[401][401]; // Probability of finishing n rockets after at most k salvos



inline void calcKs(int N, int n, int i)

{

    double c = 0.0;

    for(int k = 1; k < 401; k++)

    {

        double p = 1/double(N) * (A[n][k-1]*C[i][k-1] + C[n][k-1]*A[i][k-1] - A[n][k-1]*A[i][k-1]);

        A[N][k] += p;

        c += p;

        C[N][k] += c;

    }

}



int main()

{

    int N;

    for(int i = 0; i < 401; i++)

        C[1][i] = C[0][i] = 1.0;

    A[1][0] = 1.0;

    A[0][0] = 1.0;



    scanf("%d", &N);

    for(int n = 2; n <= N-2; n++)

        for(int i = 0; i < n; i++)

            calcKs(n, n-1-i, i);

    double ans = 0.0;

    for(int i = 0; i < 401; i++)

        ans += A[N-2][i]*10.0*i;

    printf("%.10lf", ans+10.0);

}
