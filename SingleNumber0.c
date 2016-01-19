#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define len 7 
int main(void) {
	int i,j;
	int temp = 0;
	int result = 0;
	bool flag = false;
	int arr[7] = {1,2,3,4,3,2,1};	
	
	for(i = 0; i < len; i++) {
		temp = arr[i];
		for(j = 0;j < len; j++) {
			if(j == i) 
				continue;
            else { 
     			if(arr[j] == temp) {
					flag = false;
					break;
				}
				if(arr[j] != temp) {
					flag = true; 
					result = temp;
					if ((j == len - 1) && flag) 
						break;	
				}
			}
		}
		if(flag) 
			break;
	}

	if(flag) 
		printf("The number is %d\n",result);
	else
		printf("ok\n");
}
