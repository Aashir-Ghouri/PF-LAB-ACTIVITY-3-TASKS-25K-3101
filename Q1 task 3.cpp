#include <stdio.h>

int main(){
	int r1,c1,r2,c2;
	int a[3][3],b[3][3],mul[3][3];
	int i,j,k;
	
	printf("enter rows and cols of first matrix: ");
	scanf("%d%d",&r1,&c1);
	printf("enter rows and cols of second matrix: ");
	scanf("%d%d",&r2,&c2);
	
	if(c1!=r2){
		printf("multiplication not possible\n");
		return 0;
	}
	
	printf("enter elements of first matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter elements of second matrix:\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			mul[i][j]=0;
			for(k=0;k<c1;k++){
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	printf("first matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("second matrix:\n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("result matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

