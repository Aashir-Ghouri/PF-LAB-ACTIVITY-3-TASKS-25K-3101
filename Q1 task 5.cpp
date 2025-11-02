#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],r1,c1,r2,c2,i,j,k;
    printf("rows and columns for 1st:"); scanf("%d %d",&r1,&c1);
    printf("rows and columns for 2nd:"); scanf("%d %d",&r2,&c2);

    if(c1!=r2){
        printf("cant multiply\n");
        return 0;
    }

    printf("elements of 1st:\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    printf("elements of 2nd:\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            c[i][j]=0;
            for(k=0;k<c1;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }

    printf("1st matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("2nd matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

    printf("result:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }

    return 0;
}

