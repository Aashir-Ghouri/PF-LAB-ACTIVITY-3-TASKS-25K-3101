#include <stdio.h>

int main(){
	int r,c;
	int a[5][5];
	int i,j;
	int issquare=0,iszero=1,isidentity=1,isdiagonal=1,isscalar=1;
	int isupper=1,islower=1,issym=1,isskew=1;
	int det=0;
	
	printf("enter rows: ");
	scanf("%d",&r);
	printf("enter cols: ");
	scanf("%d",&c);
	
	printf("enter elements:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	if(r==c) issquare=1;
	else printf("rectangular matrix\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(a[i][j]!=0) iszero=0;
			if(i==j && a[i][j]!=1) isidentity=0;
			if(i!=j && a[i][j]!=0) isidentity=0;
			if(i!=j && a[i][j]!=0) isdiagonal=0;
			if(i!=j && a[i][j]!=0) isscalar=0;
			if(i>j && a[i][j]!=0) isupper=0;
			if(i<j && a[i][j]!=0) islower=0;
		}
	}
	
	if(iszero) printf("zero matrix\n");
	if(issquare){
		if(isidentity) printf("identity matrix\n");
		else if(isdiagonal) printf("diagonal matrix\n");
		else if(isscalar) printf("scalar matrix\n");
		if(isupper) printf("upper triangular matrix\n");
		if(islower) printf("lower triangular matrix\n");
	}
	
	if(issquare){
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(a[i][j]!=a[j][i]) issym=0;
				if(a[i][j]!=-a[j][i]) isskew=0;
			}
		}
		if(issym) printf("symmetric matrix\n");
		if(isskew) printf("skew symmetric matrix\n");
	}
	
	if(r==1 && c>1) printf("row matrix\n");
	if(c==1 && r>1) printf("column matrix\n");
	if(iszero) printf("null matrix\n");
	
	if(issquare && r==2){
		det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
		if(det==0) printf("singular matrix\n");
		else printf("non singular matrix\n");
	}
	
	printf("check for equal, idempotent, nilpotent manually\n");
	
	return 0;
}
	
