#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[500000], ans[500000], cnt = 0;
	for(int i = 0; i <n ; i++) {
		cin >> a[i];
	}
	ans[0] = a[0], ans[n - 1] = a[n - 1];
	for(int i = 1; i < n; i++) {
		if(a[i] == a[i - 1]) {
			ans[i - 1] = a[i - 1];
			ans[i] = a[i];
		}
		else {
			int l = i - 1, r = i, cur = -1;
			while(a[r] != a[r - 1] && r < n) r++, cur++;
			cnt = max(cnt, (cur + 1) / 2);
			if(a[l] == a[r - 1]) {
				for(int j = l; j < r; j++) ans[j] = a[l];
			}
			else {
				for(int j = l; j < (l + r) / 2; j++) ans[j] = a[l];
				for(int j = (l + r) / 2; j < r; j++) ans[j] = a[r - 1];
			}
			i = r - 1;
		}
	}
	cout << cnt << endl;
	for(int i = 0; i < n; i++) cout << ans[i] << ' ';
	return 0;
}
