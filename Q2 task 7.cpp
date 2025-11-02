#include <stdio.h>

int main(){
	
	int arr[10];
	
	for(int i=0; i<10; i++){
		printf("Enter integer to insert in array: ");
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<10; i++){
		if(arr[i+1]==arr[i]){
			arr[i+1]=-1;
		}
	}
	for(int i=0; i<10; i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
	
}
