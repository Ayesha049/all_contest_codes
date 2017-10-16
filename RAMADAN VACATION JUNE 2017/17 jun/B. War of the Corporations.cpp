#include<bits/stdc++.h>
using namespace std;

char str[100000];
char sub[32];

int main(){
    int count = 0;
    int size, size2;
    scanf("%s%s", str, sub);
    size = strlen(str);
    size2 = strlen(sub);
    for(int i = 0; i <= size-size2+1; ){
        if(str[i] == sub[0]){
            int j;
            for(j = 0; sub[j] != '\0'; ++j){
                if(str[i+j] != sub[j]){
                    break;
                }
            }
            if(j == size2){ //cout << "Matches\n";
                count++;
                i += j;
            }else
                ++i;
        }else
            ++i;
    }
    printf("%d\n", count);
    return 0;
}
