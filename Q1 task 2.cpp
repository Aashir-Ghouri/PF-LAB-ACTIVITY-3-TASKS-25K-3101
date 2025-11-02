#include <stdio.h>

int main() {
    int r, c;
    int a[5][5];
    int i, j, k;
    int issquare = 0, iszero = 1, isidentity = 1, isdiagonal = 1, isscalar = 1;
    int isupper = 1, islower = 1, issym = 1, isskew = 1;
    int det = 0;

    printf("Enter rows (max 5): ");
    scanf("%d", &r);
    printf("Enter cols (max 5): ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    if (r == c)
        issquare = 1;
    else
        printf("\nRectangular Matrix\n");

    int diagVal = a[0][0];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != 0)
                iszero = 0;

            if (i == j && a[i][j] != 1)
                isidentity = 0;
            if (i != j && a[i][j] != 0)
                isidentity = 0;

            if (i != j && a[i][j] != 0)
                isdiagonal = 0;

            if (i > j && a[i][j] != 0)
                isupper = 0;
            if (i < j && a[i][j] != 0)
                islower = 0;
        }
        if (a[i][i] != diagVal)
            isscalar = 0;
    }

    if (iszero)
        printf("\nZero (Null) Matrix\n");
    if (issquare) {
        printf("\nSquare Matrix\n");

        if (isidentity)
            printf("Identity Matrix\n");
        else if (isscalar)
            printf("Scalar Matrix\n");
        else if (isdiagonal)
            printf("Diagonal Matrix\n");

        if (isupper)
            printf("Upper Triangular Matrix\n");
        if (islower)
            printf("Lower Triangular Matrix\n");
    }

    if (issquare) {
        issym = 1;
        isskew = 1;
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (a[i][j] != a[j][i])
                    issym = 0;
                if (a[i][j] != -a[j][i])
                    isskew = 0;
            }
        }
        if (issym)
            printf("Symmetric Matrix\n");
        if (isskew)
            printf("Skew-Symmetric Matrix\n");
    }

    if (r == 1 && c > 1)
        printf("Row Matrix\n");
    if (c == 1 && r > 1)
        printf("Column Matrix\n");

    if (issquare && r == 2) {
        det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
        if (det == 0)
            printf("Singular Matrix\n");
        else
            printf("Non-Singular Matrix\n");
    }

    if (issquare) {
        int prod[5][5] = {0};
        int idemp = 1, nilpot = 1;

        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                prod[i][j] = 0;
                for (k = 0; k < c; k++)
                    prod[i][j] += a[i][k] * a[k][j];
            }
        }

        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (prod[i][j] != a[i][j])
                    idemp = 0;
                if (prod[i][j] != 0)
                    nilpot = 0;
            }
        }

        if (idemp)
            printf("Idempotent Matrix\n");
        if (nilpot)
            printf("Nilpotent Matrix\n");
    }
    
    return 0;
}
