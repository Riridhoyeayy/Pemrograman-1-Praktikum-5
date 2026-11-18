#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
char kalimat[200];
int i, vokal = 0, konsonan = 0;
char h;
printf("Kalimat : ");
    fgets(kalimat, 200, stdin);
    for (i = 0; i < strlen(kalimat); i++) {
        h = tolower(kalimat[i]);
        if (h == 'a' || h == 'i' || h == 'u' || h == 'e' || h == 'o') {
            vokal++;
        } else if (isalpha(h)) {
            konsonan++;
        }
    }
    printf("Jumlah Vokal : %d\n", vokal);
    printf("Jumlah Konsonan : %d\n", konsonan);
    return 0;
}