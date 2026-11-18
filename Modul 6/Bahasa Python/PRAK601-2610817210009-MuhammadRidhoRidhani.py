baris, kolom = map(int, input().split())
angka = list(map(int, input().split()))

for i in range (baris):
    satu_baris = angka [i * kolom : (i + 1) * kolom]
    print(*satu_baris)