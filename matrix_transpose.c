#include<stdio.h>
void matrixTranspose(int matrix[][10],int n){
    int transpose[10][10];
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nTranspose of matrix: \n");
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                printf(" %d ", transpose[i][j]);
            } printf("\n");
        }
}
void matrixDisplay(int matrix[][10],int n){
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
    int inputMatrix[10][10];
    printf("Enter elements of matrix: \n");
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            printf("Enter element (%d,%d): ", i+1, j+1);
            scanf("%d", &inputMatrix[i][j]);
        }
    }
    printf("\nInputted matrix: \n");
    matrixDisplay(inputMatrix, n);
    matrixTranspose(inputMatrix, n);
    return 0;
}