#include <stdio.h>

int main() {
    int a[3][3], i, j;
    float det, inv[3][3], adj[3][3], cofactor[3][3];

    printf("Enter 3x3 matrix elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])
        - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])
        + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    printf("Determinant: %.2f\n", det);

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            int row[2], col[2], r=0, c=0;
            for(int x=0;x<3;x++){
                if(x!=i) row[r++] = x;
            }
            for(int y=0;y<3;y++){
                if(y!=j) col[c++] = y;
            }
            cofactor[i][j] = (a[row[0]][col[0]]*a[row[1]][col[1]] - a[row[0]][col[1]]*a[row[1]][col[0]]);
            if((i+j)%2!=0) cofactor[i][j] = -cofactor[i][j];
        }
    }

    printf("Cofactor matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%.2f ",cofactor[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            adj[i][j] = cofactor[j][i];
        }
    }

    printf("Adjoint matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%.2f ",adj[i][j]);
        }
        printf("\n");
    }

    if(det != 0){
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                inv[i][j] = adj[i][j]/det;
            }
        }

        printf("Inverse matrix:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%.2f ",inv[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Inverse does not exist\n");
    }

    return 0;
}

