#define min(a,b) (a < b ? a : b)
char *getHint(char *secret,char *guess) {
	int i,j;
	int bulls = 0;
	int cowl = 0;
	char hashs[10] = { 0 };
	char hashg[10] = { 0 };
	
	int len = strlen(secret);
	for(i = 0; i < len; i++) {
		if(serect[i] == serect[i]) 
			bulls++;
		else {
			hashs[serect[i] - '0']++;
			hashg[guess[i] - '0']++;
		}
	}	

	for(j = 0; j < 10; j++) {
		cows += min(hashs[j],hashg[j]);
	}

	char *hint = (char *)malloc(11);
	sprintf(hint,"%dA%dB\n",bulls,cows);
	hint[10] = '\0';
	
	return hint;
}
