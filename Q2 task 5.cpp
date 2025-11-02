#include <stdio.h>

int main(){
	int arr[10];
	
	for(int i=0; i<10; i++){
		printf("Enter #%d integer to insert in the array: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int max=arr[0];
	int min=arr[0];
	
	
	for(int i=0; i<10; i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	printf("Difference between max and min number is: %d",max-min);
}
