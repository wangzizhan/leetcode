#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int singleNumber(int nums[],int numsSize);

int main(void) {
	int arr[] = {1,2,1,3,4,3,4};
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n",singleNumber(arr,len));
	
	return 0;		
}

int singleNumber(int nums[],int numsSize) {
	int i,j;
	int temp = 0;
	int result = 0;
	bool flag = false;
		
	for(i = 0; i < numsSize; i++) {
		temp = nums[i];
		for(j = 0;j < numsSize; j++) {
			if(j == i) 
				continue;
            else { 
     			if(nums[j] == temp) {
					flag = false;
					break;
				}
				if(nums[j] != temp) {
					flag = true; 
					result = temp;
					if ((j == numsSize - 1) && flag) 
						break;	
				}
			}
		}
		if(flag) 
			break;
	}
		
	return result;
}
