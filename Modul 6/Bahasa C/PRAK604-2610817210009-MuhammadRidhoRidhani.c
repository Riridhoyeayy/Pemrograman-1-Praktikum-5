#include <stdio.h>
#include <string.h>
int main() {
    char kode[200], pesan[200], hasil[200];
    int i, bintang = 0, pagar = 0;
    fgets(kode, 200, stdin);
    fgets(pesan, 200, stdin);
    kode[strcspn(kode, "\n")] = '\0';
    pesan[strcspn(pesan, "\n")] = '\0';
    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        for (i = 0; i < strlen(kode); i++) {
            if (kode[i] == ' ' && pesan[i] == ' ') {
                hasil[i] = ' ';
            } else if (kode[i] == pesan[i]) {
                hasil[i] = '*';
                bintang++;
            } else {
                hasil[i] = '#';
                pagar++;
            }
        }
        hasil[i] = '\0';
        printf("%s\n", hasil);
        printf("* = %d\n", bintang);
        printf("# = %d\n", pagar);
        if (bintang >= pagar) {
            printf("Pesan Asli\n");
        } else {
            printf("Pesan Palsu\n");
        }
    }
    return 0;
}