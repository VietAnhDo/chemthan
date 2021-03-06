#include <bits/stdc++.h>
using namespace std;

//Find rotation position such that received string is the smallest
int minmove(char s[], int n) {
	int x, y, i, j, u, v; //x is the smallest string before string y
	for (x = 0, y = 1; y < n; ++y) {
		i = u = x;
		j = v = y;
		while (s[i] == s[j]) {
			++u; ++v;
			if (++ i == n) i = 0;
			if (++ j == n) j = 0;
			if (i == x) break; //all strings are equal
		}
		if (s[i] <= s[j]) y = v;
		else {
			x = y;
			if (u > y) y = u;
		}
	}
	return x;
}

int main() {
	char s[] = "stringrandom";
	cout << minmove(s, strlen(s)) << "\n";
	return 0;
}
