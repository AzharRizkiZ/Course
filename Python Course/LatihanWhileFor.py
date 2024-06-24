Latihan For Loop

Buatlah sebuah piramida bintang yang ketika diinput jumlah maksimalnya
maka bintang tersebut akan meyesuaikan dengan jumlah inputan maksimalnya

berikut contohnya

Console:
Masukkan Jumlah Maksimal Perulangan: 7 (Diinput User)
7777777
666666
55555
4444
333
22
1
22
333
4444
55555
666666
7777777


Clue: For in Range 2 Dimensi


maximum = int(input("Masukkan Jumlah Maksimum: "))
              
for bawah in range(1, maximum + 1):
    for samping in range(bawah):
        print("*", end="")
    print()
"""
## List/Array
## Kumpulan sebuah daftar data (biasanya setipe, tetapi ada pula yang tidak setipe)
## Cara mendeklarasikan list menggunakan [] dan setiap data dipisah dengan koma (,)

str_dataBinus = [[1, "Zulma", "1234"],
                 [2, "Kiraa", "4567"],
                 [3, "Zavie", "8910"]]

username = input('Masukkan Username: ')
password = input('Masukkan Password: ')


for listKebawah in str_dataBinus:
    if ( ( listKebawah[1] == username )
     and ( listKebawah[2] == password ) ) :
        print("Anda Berhasil Login")
    else:
        # Do Nothing
        print()

i = int(input("masukkan jumlah maksimal: "))
while ( i > 0 ):
    j = 0
    while ( j < i ):
        print(i, end='')
        j = j + 1
    print('')
    i = i - 1

k = 2
while ( k <= i ):
    l = k
    while ( l > 0 ):
        print(k, end='')
        l = l - 1
    print('')
    k = k + 1

"""
Buatlah program untuk merata-ratakan 
nilai sesuai dengan kategori huruf yang
diinputkan dimana aturannya adalah sebagai berikut:
A = 4.00
A- = 3.75
B+ = 3.50
B = 3.00
B- = 2.75
C+ = 2.50
C = 2.00
C-	= 1.75
D = 1.50
E = 1.25
Implementasikan menggunakan perulangan while
Output:
Masukkan Kategori Nilai Ke-1 (Enter Untuk Berhenti): A
Masukkan Kategori Nilai Ke-2 (Enter Untuk Berhenti): B
Masukkan Kategori Nilai Ke-3 (Enter Untuk Berhenti): A
Masukkan Kategori Nilai Ke-4 (Enter Untuk Berhenti): C
Masukkan Kategori Nilai Ke-5 (Enter Untuk Berhenti): 
Reratanya adalah 3.25
"""

status = True
i = 1 # Jumlah perulangan yang nanti digunakan untuk membagi dikurangi 1
tampung = 0 # Untuk menampung nilai setiap ditambahkan

while (status):
    value = input("Masukkan Kategori Nilai Ke-" + str(i) + " (Enter Untuk Berhenti): " )
    if ( value == "" ):
        tampung = tampung/(i-1)
        status = False
        print("Reratanya adalah " + str(tampung))
    elif ( value == "A" ):
        tampung = tampung + 4.00
    elif ( value == "A-" ):
        tampung = tampung + 3.75
    elif ( value == "B+" ):
        tampung = tampung + 3.50
    elif ( value == "B" ):
        tampung = tampung + 3.00
    elif ( value == "B-" ):
        tampung = tampung + 2.75
    elif ( value == "C+" ):
        tampung = tampung + 2.50
    elif ( value == "C" ):
        tampung = tampung + 2.00
    elif ( value == "C-" ):
        tampung = tampung + 1.75
    elif ( value == "E" ):
        tampung = tampung + 1.50
    elif ( value == "F" ):
        tampung = tampung + 1.25
    else:
        print("Inputan tidak valid")
        i = i - 1
    i = i + 1
    #print("Total Nilai: " + str(tampung))
