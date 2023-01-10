//https://www.acmicpc.net/problem/15596
//https://www.acmicpc.net/source/43654052

long long sum(int* a, int n) {
	long long ans = 0;

	for (int i = 0; i < n; i++) {
		ans = ans + a[i];
	}

	return ans;
}
