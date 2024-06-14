#include<stdio.h>
void matrixProduct(int firstMatrix[][10],int secondMatrix[][10],int result[][10],int n)
{
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            result[i][j] = 0;
        for(int k=0; k<n; ++k){
            result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
        }
        }
    }
}
void matrixSum(int firstMatrix[][10],int secondMatrix[][10],int result[][10],int n){
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            result[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}
void displayMatrix(int matrix[][10],int n){
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            printf(" %d ", matrix[i][j]);
        } printf("\n");
    }
}
int main(){
    int n;
    printf("Enter size of matrix(nxn): ");
    scanf("%d", &n);
    int firstMatrix[10][10],secondMatrix[10][10],product[10][10],sum[10][10];
    printf("Enter elements of first matrix: \n");
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            printf("Emter element(%d,%d): ", i+1, j+1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    printf("Enter elements of second matrix: \n");
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            printf("Enter element(%d,%d): ", i+1, j+1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }
    matrixProduct(firstMatrix,secondMatrix,product,n);
    matrixSum(firstMatrix,secondMatrix,sum,n);
    printf("\nProduct: \n");
    printf("\n");
        displayMatrix(product,n);
    printf("\nSum: \n");
    printf("\n");
        displayMatrix(sum,n);
    return 0;
}