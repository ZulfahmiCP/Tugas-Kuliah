BilanganA = float(input("Masukkan bilangan pertama : "))
BilanganB = float(input("Masukkan bilangan kedua : "))

BilanganA = round(BilanganA + BilanganB, 3)

if BilanganA > 50 :
    print("Hasilnya diatas 50 ==> " + str(BilanganA))
else :
    print("Hasilnya dibawah 50 ==> " + str(BilanganA))