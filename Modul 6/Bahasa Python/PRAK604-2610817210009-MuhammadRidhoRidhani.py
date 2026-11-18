kode = input()
pesan = input()
if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    hasil = ""
    bintang = 0
    pagar = 0
    for i in range(len(kode)):
        if kode[i] == " " and pesan[i] == " ":
            hasil = hasil + " "
        elif kode[i] == pesan[i]:
            hasil = hasil + "*"
            bintang = bintang + 1
        else:
            hasil = hasil + "#"
            pagar = pagar + 1
    print(hasil)
    print("* =", bintang)
    print("# =", pagar)
    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")