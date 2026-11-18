deskripsi = input()
if len(deskripsi) > 20:
    hasil = ""
    for i in range(20):
        hasil = hasil + deskripsi[i]
    print(hasil + "...")
else:
    print(deskripsi)