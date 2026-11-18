#include <stdio.h>
#include <string.h>
int main() {
char deskripsi[200];
    fgets(deskripsi, 200, stdin);
    deskripsi[strcspn(deskripsi, "\n")] = '\0';
    if (strlen(deskripsi) > 20) {
        deskripsi[20] = '\0';
        printf("%s...\n", deskripsi);
    } else {
        printf("%s\n", deskripsi);
    }
    return 0;
}