BilanganA = float(input("Masukkan Bilangan Pertama : "))
BilanganB = float(input("Masukkan Bilangan Kedua : "))

Operasi = input("Masukkan satu dari keempat operasi berikut [+, -, *, /] : ")

if Operasi == "+" :
    hasil = BilanganA + BilanganB
elif Operasi == "-" : 
    hasil = BilanganA - BilanganB
elif Operasi == "*" : 
    hasil = BilanganA * BilanganB
else :
    while not BilanganB : 
        BilanganB = float(input("Bilangan kedua tidak boleh 0, mohon masukkan lagi : "))
    hasil = BilanganA / BilanganB

print(BilanganA, Operasi, BilanganB, '=', hasil)