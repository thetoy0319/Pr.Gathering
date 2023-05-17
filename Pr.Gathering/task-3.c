//3. C program to find Length of the String by passing String/ Character Array as an Argument using
// User Define Functions.

#include<stdio.h>
#include<string.h>

int length(char a[1000]){
	
	printf("Length of the String is : %d", length);
	
   return 0;
}

int main(){
	
    char a[1000];
    
	printf("Enter text : ");
	gets(a);
	
	int length;
	
    length = strlen(a);
    
 	printf("Length of the String is : %d", length);

	return 0;
}
