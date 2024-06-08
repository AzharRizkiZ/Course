# Perulangan ada 2 Tipe

# 1. Ada perulangan yang diketahui berapa kali jumlah perulangannya (For)
# 2. Ada perulangan yang tidak diketahui berapa kali jumlah perulangannya (While)

# For
"""
## For in Range
# Syntax Type 1:
for i in range(5): # 5 itu nilai akhir | Ketika i ada dalam jangkauan 0~4
    print("Ini Perulangan ke-" + str(i))

print("\n")

# Syntax Type 2:
for i in range(3,10): # 3 itu nilai awal, 10 nilai akhir | Ketika i dalam jangkauan 3~9
    print("Ini Perulangan ke-" + str(i))
    
print("\n")

# Syntax Type 3:
for i in range(20,5,-3): # 20 nilai awal, 5 nilai akhir, dan selisih -1 |
# Ketika i dalam jangkauan 20~6 maka kurangi 1 disetiap perulangan
    print("Ini Perulangan ke-" + str(i))

## For in Standard
## Digunakan ketika memiliki sebuah data yang berupa list/array

## List/Array
## Kumpulan sebuah daftar data (biasanya setipe, tetapi ada pula yang tidak setipe)
## Cara mendeklarasikan list menggunakan [] dan setiap data dipisah dengan koma (,)
str_belanja = ["Sawi Putih", "Ayam", "Daging Sapi", "Shoyu", "Kecap Manis", "Indomie"]

for i in str_belanja:
    print(i)

"""
# While
# While merupakan sebuah perulangan yang diaktifkan menggunakan boolean

i = 0
while(i < 5):
    print("Ini Perulangan ke-" + str(i))
    i = i + 1
    #i += 1
    
# ada 2 kata kunci yang digunakan di dalam while
# 1. continue
# 2. break (berhenti paksa)

# Versi Tanpa Kata Kunci
status = True
i = 0
a = int(input("masukkan jumlah maksimal: "))

while(status):
    if (i < a):
        print("Ini Perulangan ke-" + str(i))
        i += 1
    else:
        print("Program Berhenti")
        status = False

# Versi Dengan Kata Kunci
i = 0
a = int(input("masukkan jumlah maksimal: "))

while(True):
    if (i < a):
        print("Ini Perulangan ke-" + str(i))
        i += 1
        continue
    else:
        print("Program Berhenti")
        break

# Recursive Function

# Do While
