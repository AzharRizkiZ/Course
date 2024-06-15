# -*- coding: utf-8 -*-
"""
Created on Sat Jun 15 14:20:00 2024

@author: binuscenter
"""

"""
Object Oriented Programming/Pemrograman Berorientasi Objek
Function / Definition

Function adalah sebuah blok program yang
ditugaskan untuk mengerjakan satu tugas khusus tertentu

Function dibedakan menjadi 2 Jenis
1. Fungsi yang tidak mengembalikan Nilai
2. Fungsi yang mengembalikan Nilai

Tujuan utama sebuah fungsi:
fungsi bertujuan untuk menghindari terjadinya duplikasi kode.
Tujuannya tak lain agar kode tersebut bisa digunakan kembali,
hanya dengan memanggil fungsinya saja.

- Fungsi yang tidak mengembalikan nilai (Fungsi Void)
Merupakan sebuah fungsi yang berguna untuk menampung sebuah blok program
dengan tujuan untuk memperpendek baris program

- Fungsi yang mengembalikan Nilai
Merupakan fungsi yang akan mengembalikan nilai tertentu

Dalam Python terdapat beberapa hal yang perlu diperhatikan dalam mendeklarasikan
sebuah fungsi
1. Menggunakan keyword "def" untuk mendeklarasikan fungsi
2. Menggunakan keyword return (Fungsi yang mengembalikan nilai)
3. Terdapat parameter/argument fungsi
4. Fungsi di python mendukung parameter yang memiliki initial value(nilai awal)

"""

# Contoh Fungsi Void/Fungsi yang tidak mengembalikan nilai
def iniFungsi(): # Deklarasinya
    print("Ini adalah sebuah fungsi void dalam python")
    
iniFungsi() # Memanggil

# Contoh Fungsi yang mengembalikan nilai
def fungsiKembalian(): # Deklarasinya
    return "Ini adalah sebuah fungsi kembalian dalam python"

x = fungsiKembalian() # Memanggil fungsi lalu nilai kembaliannya disimpan ekdalam variabel x

print(x)

# Contoh fungsi dengan parameter
def fungsiTambahBerparameter( nilai1, nilai2 ): # Deklarasi Fungsi Berparameter
    hasil = nilai1 + nilai2
    return hasil

z = fungsiTambahBerparameter(5, 6) # Memanggil fungsi lalu nilai kembaliannya disimpan kedalam variabel z

print(z)


# Contoh fungsi dengan default parameter(initial value)
def fungsiKurangBerparameter( nilai1 = 5, nilai2 = 1 ): # Deklarasi Fungsi dengan Default parameter
    hasil = nilai1 - nilai2
    print(hasil)
    
fungsiKurangBerparameter()
