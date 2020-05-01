#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int x[n];
		for (int i = 0; i < n; i++) {
			cin >> x[i];
		}
		int count = 1, min_count = INT_MAX, max_count = INT_MIN;
		for (int i = 0; i < n - 1; i++) {
			if (x[i+1] - x[i] <= 2)
				count++;
			else {
				if (count > max_count)
					max_count = count;
				if (count < min_count)
					min_count = count;
				count = 1;
			}
		}
		if (count > max_count)
			max_count = count;
		if (count < min_count)
			min_count = count;
		cout << min_count << " " << max_count << endl;
	}
}
