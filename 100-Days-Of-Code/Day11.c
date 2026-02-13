//Write a program to perform addition of two matrices having the same dimensions. 
//The sum of two matrices is obtained by adding corresponding elements of the matrices.

#include<stdio.h>

int main(){

    int r , c ;
    printf("Enter the Number of Rows: ");
    scanf("%d",&r);
    printf("Enter the Number of Columns: ");
    scanf("%d",&c);

    int mat[r][c];

    printf("Enter the Elements: ");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }

    int sumr, sumrt = 0 , sumc , sumct = 0;
    for(int i = 0 ; i < r ; i++){
        sumr = 0 ;
        for(int j = 0 ; j < c ; j ++){
            sumr = sumr + mat[i][j];
            sumrt = sumrt + mat[i][j];
        }
        printf("Sum of Row%d: %d\n", i+1 , sumr);
    }
    printf("Sum of all Rows: %d\n" , sumrt);

    for(int i = 0 ; i < c ; i++){
        sumc = 0 ;
        for(int j = 0 ; j < r ; j ++){
            sumc = sumc + mat[j][i];
            sumct = sumct + mat[j][i];
        }
        printf("Sum of Column%d: %d\n", i+1 , sumc);
    }
    printf("Sum of all Columns: %d" , sumct);

    return 0 ;
}
