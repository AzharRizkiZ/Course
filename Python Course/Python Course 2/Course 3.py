# -*- coding: utf-8 -*-
"""
Created on Wed Jun 12 18:29:33 2024

@author: Zulma
"""

# Buatlah Sebuah Program untuk Menentukan Jenis Segitiga
# Ketiga Sisi yang didapat diinput oleh user
# Lalu setelah user selesai menginput akan tercetak jenis segitiga apa

# 1. Sama Sisi
# 2. Sama kaki
# 3. Bukan Segitiga
# 4. Sembarang
# 5. Siku-siku (Clue: menggunakan besar sudut) --> ini dapat nilai bonus

# Hati-hati dalam menetukan sebuah kondisi
# karena jika memasukkan 1 2 3 kedalam setiap sisi segitiga
# ketiga inputan tersebut bukanlah merupakan segitiga
"""
import math

int_sisi1 = int(input("Masukkan Sisi 1: "))
int_sisi2 = int(input("Masukkan Sisi 2: "))
int_sisi3 = int(input("Masukkan Sisi 3: "))

if ( ( int_sisi1 == int_sisi2 )
 and ( int_sisi2 == int_sisi3 )
 and ( int_sisi3 == int_sisi1 ) ):
    print("Merupakan segitiga sama sisi")
elif ( ( int_sisi1 == int_sisi2 )
    or ( int_sisi2 == int_sisi3 )
    or ( int_sisi3 == int_sisi1 ) ):
    print("Merupakan Segitiga Sama Kaki")
elif ( ( int_sisi1 + int_sisi2 <= int_sisi3 )
    or ( int_sisi2 + int_sisi3 <= int_sisi1 )
    or ( int_sisi3 + int_sisi1 <= int_sisi2 ) ):
    print("Bukan merupakan segitiga")
elif ( ( int_sisi1 == math.sqrt( int_sisi2**2 + int_sisi3**2 ) )
    or ( int_sisi2 == math.sqrt( int_sisi3**2 + int_sisi1**2 ) )
    or ( int_sisi3 == math.sqrt( int_sisi1**2 + int_sisi2**2 ) ) ):
    print("Merupakan segitiga siku-siku")
else:
    print("Merupakan segitiga sembarang")
"""
# Buatlah sebuah program untuk menentukan
# angka ganjil dan genap dari nilai yang diinputkan oleh user
# Menggunakan Operator Aritmatika

int_nilai = int(input("Masukkan Nilai: "))

if ( int_nilai % 2 == 0 ):
    print("Merupakan bilangan Genap")
else:
    print("Merupakan bilangan Ganjil")
    
# Buatlah Sebuah program percabangan untuk menentukan
# persamaan kuadrat menggunakan diskriminan
# Jika diskriminan lebih besar dari 0 maka memiliki akar berbeda
# Jika diskriminan lebih kecil dari 0 maka memiliki akar imajiner
# Jika diskriminan sama dengan 0 maka merupakan akar kembar
# hati-hatijika nilai a = 0 maka itu bukanlah merupakan akar persamaan kuadrat

Output:
Jika akar berbeda:
Cetak "Merupakan Akar Berbeda"
Cetak persamaan kuadratnya
Cetak nilai diskriminannya
Cetak nilai Akar x1nya
Cetak nilai Akar x2nya

Jika akar imajiner:
Cetak "Merupakan Akar imajiner"
Cetak persamaan kuadratnya
Cetak nilai diskriminannya
Cetak nilai Akarnya (gunakan salah satu akar x1 atau x2)

Jika akar kembar:
Cetak "Merupakan Akar kembar"
Cetak persamaan kuadratnya
Cetak nilai diskriminannya
Cetak rumus Akar x1nya
Cetak rumus Akar x2nya

Jika a = 0:
Cetak "bukan merupakan akar persamaan kuadrat"
