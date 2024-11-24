#include <stdio.h>


int max (int a, int b) {
	return a > b ? a : b;
}

int main () {


	int n, m;
	scanf("%d %d", &n, &m);

	char s[m];
	
	// printf("%s", s);

	for (int i = 0 ; i < n ; i ++) {
		
		if (i <= m) {
			for (int j = 0 ; j < m ; j ++) {
				s[j] = 'a' + max(m, n) - i - 1;
			}
			for (int j = 0 ; j < i ; j ++) {
				s[j] = 'a' + max(m, n) - j - 1;
			}
		} else {

		}
		printf("%s\n", s);
	}


	return 0;
}