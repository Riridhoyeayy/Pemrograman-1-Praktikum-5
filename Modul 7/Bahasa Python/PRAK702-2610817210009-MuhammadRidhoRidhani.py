kata = input().lower()
panjang = len(kata)
palindrom = True
for i in range(panjang // 2):
    if kata[i] != kata[panjang - 1 - i]:
        palindrom = False
if palindrom:
    print("Kata '" + kata + "' adalah palindrom")
else:
    print("Kata '" + kata + "' bukan palindrom")