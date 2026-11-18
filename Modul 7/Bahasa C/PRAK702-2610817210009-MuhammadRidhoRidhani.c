#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
char kata[100];
int i, panjang, palindrom = 1;
scanf("%s", kata);
panjang = strlen(kata);
    for (i = 0; i < panjang; i++) {
        kata[i] = tolower(kata[i]);
    }
    for (i = 0; i < panjang / 2; i++) {
        if (kata[i] != kata[panjang - 1 - i]) {
            palindrom = 0;
        }
    }
    if (palindrom == 1) {
        printf("Kata '%s' adalah palindrom\n", kata);
    } else {
        printf("Kata '%s' bukan palindrom\n", kata);
    }
    return 0;
}