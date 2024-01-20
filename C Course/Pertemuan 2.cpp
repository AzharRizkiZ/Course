/* Tag Komentar: Sebuah Tag yang membuat baris 
yang diberi tag ini tidak dijalankan oleh compiler */

/* Program Untuk Mencetak */

/* Tipe Data & Variabel */
// Integer = Bilangan Bulat
// String = Teks/Banyak Character (Termasuk Angka)
// Char = Character
// Boolean = Benar/Salah (True/False) (0/1)
// Float = Bilangan Decimal Dalam jumlah range yang lebih kecil dari Double
// Array/List = Daftar
// Enum = Enumeration, Data yang berbentuk array dimulai dari 0 dan bernilai sesuai indexnya
// Struct = Tipe Data yang bisa menyimpan Banyak Variabel
// Union = Mirip Struck, Tipe Data yang bisa menyimpan 
//         banyak Variabel dengan menggunakan address yang sama
// Double = Bilangan Decimal Dalam jumlah range yang lebih besar dari Float
// long = Bilangan Bulat dalam jumlah range yang lebih kecil dari int 
// Short = Bilangan Bulat dalam jumlah range yang lebih kecil dari long, short range = 0~65535

// Tipe-tipe Variabel
// Variabel Global
// Variabel yang bisa digunakan dimana aja

// Variabel Statis
// Variabel yang nilainya bersifat statis

// Variabel Lokal
// Variabel yang penggunaannya terbatas dalam sebuah fungsi program

// Keyword/Kata Kunci Pelengkap Variabel

// Unsigned
// Variabel yang tidak ditandatangani
// biasanya selalu bernilai positif & menyesuaikan batas range nilai tipe datanya

// Signed
// Variabel yang ditandatangani
// nilainya bisa berlaku positif atau negatif & menyesuaikan batas range nilai tipe datanya

/*
Pseudocode:

Variabel Global A (Unsigned)

Fungsi Utama:
Variabel Lokal B (Signed)
Variabel Lokal C

C sama dengan A ditambah B

C sama dengan C dikurangi A

Cetak Variabel C

*/

/* Input */

// cin (C Input)
// cin>>a;

// scanf
// scanf("%d", &a);

// Modifikasi Program diatas menggunakan inputan dari user

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

string g_str_nama;

int main( void ) { // Fungsi Utama

	unsigned int l_int_umur;
	
	cout<<"Masukkan Nama:"<<ends; getline(cin, g_str_nama);
	cout<<"Masukkan Umur:"<<ends; cin>>l_int_umur;
	//printf("Masukkan Nama: "); scanf("%d", &g_str_nama); //& = Address = Alamat Memori
	//printf("Masukkan Umur: "); scanf("%d", &l_str_umur);
	
	cout<<"Halo nama saya "<<g_str_nama<<endl;
	cout<<"Umur saya "<<l_int_umur<<" tahun"<<endl;
	
	return 0; // Mengembalikan Nilai 0
	
}


// Tugas 1
/*
Buatlah Sebuah Program dengan Mengimplementasikan
Variabel Global & Lokal serta Menggunakan Kata Kunci Pelengkap Variabel
Program Dimulai dengan menambahkan variabel A (Unsigned) dengan Variabel B (Signed)
lalu disimpan di Variabel C Lalu Variabel C diperbarui nilainya dengan mengurangi
nilai variabel C dikurang Variabel A dan hasil Variabel C nya di cetak
*/

// Tugas 2
/* Buatlah Program dengan Mengimplementasikan Input

Ketentuan:
Inputan ada 5:
- Nama (Global)
- Alamat (Global)
- No telepon (Lokal)
- Umur (Lokal)
- Asal Sekolah (Global)

Lalu cetak kelima data tersebut */

// Tugas 3
/*
Buatlah Program Untuk Menghitung 4 bilangan nilai yang diinput
2 bilangan diantaranya merupakan bilangan mutlak (Unsigned)
dan hasil merupakan variabel global

Rumus:
Hasil sama dengan a dikali b dikurang c ditambah d dibagi c

Keterangan:
Tambah: +
Kurang: -
Bagi: /
Kali: *

Pseudocode:

Variabel Global Signed Hasil

Fungsi Utama:
Variabel Lokal Unsigned A
Variabel Lokal Unsigned B
Variabel lokal Signed C
Variabel Lokal Signed D

Masukkan Bilangan A (Nilai Mutlak) | Input Nilai A
Masukkan Bilangan B (Nilai Mutlak) | Input Nilai B
Masukkan Bilangan C (Nilai Mutlak) | Input Nilai C
Masukkan Bilangan D (Nilai Mutlak) | Input Nilai D

Hasil sama dengan A dikali B dikurang C ditambah D dibagi C

Cetak "Hasil Perhitungan dari keempat variabel yang diinput diatas adalah Hasil"
