//2. C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.

#include<stdio.h>
#include<string.h>

int sum_array(int n){
	
	int a[n],i,sum = 0;

	for(i=0;i<n;i++){
		
		printf("Enter elements of erray in number :\n");
		scanf("%d",&a[i]);
		sum = sum + a[i];
		
	}
	return sum;
}

int main(){
	
	int n,sum;
	
	printf("Enter length of array : ");
    scanf("%d",&n);
    
    sum = sum_array(n);
	printf("sum of array element: %d",sum);
	
	return 0;
}
