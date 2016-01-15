int addDigits(int num) {
	int ans = 0;
	while(num > 0) {
		ans += num % 10;
		num /= 10;
		if(ans >= 10) {
			ans = ans / 10 + ans % 10;
		}
	}
	return ans;
}
