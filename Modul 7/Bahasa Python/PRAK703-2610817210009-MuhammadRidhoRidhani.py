kalimat = input("Kalimat : ").lower()
vokal = 0
konsonan = 0
for huruf in kalimat:
    if huruf in "aiueo":
        vokal = vokal + 1
    elif huruf.isalpha():
        konsonan = konsonan + 1
print("Jumlah Vokal :", vokal)
print("Jumlah Konsonan :", konsonan)