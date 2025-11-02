#include <stdio.h>

int main(){
	int a[3][3][3];
	int i,j,k;
	int layer,total,overall=0;
	
	printf("enter elements for 3x3x3 array:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	
	for(i=0;i<3;i++){
		printf("layer %d:\n",i+1);
		total=0;
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("%d ",a[i][j][k]);
				total+=a[i][j][k];
			}
			printf("\n");
		}
		printf("sum of layer %d = %d\n",i+1,total);
		overall+=total;
	}
	
	printf("overall sum of all layers = %d\n",overall);
	
	return 0;
}


