#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t;
	int n;
	int m;
	int i;
	int j;
	int c;
	int max;

	scanf("%d",&t);

	while (t--) {
		scanf("%d", &n);
		scanf("%d", &m);

		max = 0;

		int arr[m];
		int a[n+1];

		for (i = 0; i < m; i++) {
			scanf("%d", &arr[i]);
		}

		for (i = 0; i <= n; i++) {
			a[i] = 0;
		}

		for (i = 0; i < m; i++) {
			a[arr[i]]++;
		}

		for (i = 1; i <= m; i++) {
			c = 0;
			for (j = 0; j <= n; j++) {
				if (a[j] >= i) {
					c += i;
				}
			}
			if (max < c) {
				max = c;
			}
		}
		printf("%d\n",max);
	}

	return 0;
}
