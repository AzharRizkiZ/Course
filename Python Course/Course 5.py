# -*- coding: utf-8 -*-
"""
Created on Sat Jun 15 14:20:00 2024

@author: binuscenter
"""

"""
Object Oriented Programming/Pemrograman Berorientasi Objek
Sebuah Paradigma Penulisan program berdasarkan sebuah objek

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
# Tujuannya untuk mengeluarkan sebuah potongan blok program saja
def iniFungsi(): # Deklarasinya
    print("Ini adalah sebuah fungsi void dalam python") # Didalam Blok Program FUngsi
    
iniFungsi() # Memanggil # Blok Program Utama (Blok Program File Dasar)

# Contoh Fungsi yang mengembalikan nilai
# Tujuannya hampir sama seperti sebuah variable
def fg_str_fungsiKembalian(): # Deklarasinya
    return "Ini adalah sebuah fungsi kembalian dalam python"

x = fg_str_fungsiKembalian() # Memanggil fungsi lalu nilai kembaliannya disimpan ekdalam variabel x

print(x)

# Variable Global
# Variable yang dapat digunakan dimanapun

# Variable Lokal
# Variable Lokal hanya dapat digunakan didalam sebuah blok program fungsi

g_int_hasil = 0

# Contoh fungsi dengan parameter
def fg_int_fungsiTambahBerparameter( nilai1, nilai2 ): # Deklarasi Fungsi Berparameter
    l_int_hasil = nilai1 + nilai2 # Variable lokal
    
    # Mengeluarkan nilai variable lokal
    # Cara Pertama dengan memindahkannya kedalam variable global (Untuk Bahasa Pemrograman C/C++)
    # g_int_hasil = l_int_hasil
    # print(g_int_hasil)
    
    # Cara Kedua menjadikan fungsi mengembalikan nilai variable lokal tersebut
    return l_int_hasil

g_int_hasil = fg_int_fungsiTambahBerparameter(5, 6) # Memanggil fungsi lalu nilai kembaliannya disimpan kedalam variabel z

print(g_int_hasil)


# Contoh fungsi dengan default parameter(initial value)
def fungsiKurangBerparameter( nilai1 = 5, nilai2 = 1 ): # Deklarasi Fungsi dengan Default parameter
    hasil = nilai1 - nilai2
    print(hasil)
    
fungsiKurangBerparameter()

# Recursive Function

# Adalah sebuah fungsi yang memanggil dirinya sendiri ketika dideklarasikan

def recursiveFunction(nilai1, nilai2):
    if (nilai1 >= nilai2):
        hasil = recursiveFunction(nilai1, nilai2)
        print(hasil)
    else:
        hasil = nilai1 + 1
    
    return hasil
        
        
x = recursiveFunction(0, 5)

print(x)


# Buatlah sebuah fungsi yang mengembalikan nilai hasil
# tambah, kurang, bagi, kali, modulus
# berparameter 2 variable dan memiliki initial value (nilainya bebas)
# lalu buat satu fungsi void untuk mencetak nama dan asal kalian di paling atas program
# Buatlah program tersebut berulang hingga dihentikan oleh user

OUTPUT:
---------------------
| Azhar Rizki Zulma |
|      Bintaro      |
---------------------
Masukkan Menu(+|-|/|*|%|stop): + (Diinput user)
Masukkan Nilai 1: 5 (Diinput User)
Masukkan Nilai 2: 5 (Diinput User)
Hasil Penjumlahan 5 + 5 adalah 10

Masukkan Menu(+|-|/|*|%|stop): - (Diinput user)
Masukkan Nilai 1: 5 (Diinput User)
Masukkan Nilai 2: 5 (Diinput User)
Hasil Pengurangan 5 - 5 adalah 0

Masukkan Menu(+|-|/|*|%|stop): stop (Diinput user)
Program Berhenti, Terima Kasih telah menggunakan program saya.
