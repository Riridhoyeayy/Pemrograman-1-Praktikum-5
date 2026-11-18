#include <stdio.h>
int main (){
int zetsu[50];
int ruangan, i;
scanf("%d", &ruangan);
for (i = 0; i < ruangan; i++){
    scanf("%d", &zetsu[i]);
}
for ( i = 0; i < ruangan; i++){
    printf("%d ", zetsu[i] * (i + 1));
        printf("");
    }
    printf("\n");
    return 0;
}