#include <stdio.h>
int main (){
int row, collums, i, j;
int num[50][50];
scanf("%d %d", &row, &collums);
    for (i = 0; i < row; i++){
        for (j = 0; j < collums; j++){
            scanf("%d", &num[i][j]);
        }
    }
     for (i = 0; i < row; i++) {
        for (j = 0; j < collums; j++) {
            printf("%d", num[i][j]);
                printf(" ");
            }
        printf("\n");
    }
    return 0;
}