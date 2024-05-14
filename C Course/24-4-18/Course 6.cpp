#include <math.h>
#include <iostream>
#include <stdio.h>
using namespace std;

#define FALSE 0
#define TRUE 1

//Dalam Bahasa C/C++ tidak ada yang namanya tipe data boolean
//tipe data yang paling kuno di C/C++ adalah tipe data angka
//string = char[] (char yang berbentuk list)
//char = -128 - 127
//short = -32768 - 32767
//long = -2147483648 - 2147483647
//int
//float
//double

//angka itu dikonversi menjadi bahasa mesin/bahasa komputer (binary 0/1)

//boolean in c sama seperti 0 (False) dan 1 (True)


/* 

Pemrograman Berorientasi Objek (Object Oriented Programming - OOP)

Sebuah paradigma/konsep/cara penulisan kode yang berdasarkan sebuah objek,
objek disini diartikan sebagai program yang memiliki tugas tertentu

Fungsi/Function //Fungsi Anggaplah sebuah Puzzle

Fungsi adalah sebuah blok program yang disusun seperti sebuah puzzle, setiap puzzle mewakili 
tugas tertentu dan ketika digabungkan dengan puzzle lain, maka akan menjadi sebuah program
yang kompleks dan memiliki banyak kemampuan dalam menjalankan setiap tugas

fungsi memiliki beberapa atribut, diantaranya adalah
- Nilai Kembalian
- Tipe Fungsi/Tipe Data Nilai Kembalian Fungsi
- Parameter/Argumen (Parameter Bisa Lebih Dari 1, Selengkapnya lihat kembali di dokumen pengantar) - Default Paramater/Initial Value Parameter
- Blok Program Fungsinya

Untuk Mendeklarasikan sebuah fungsi berikut contohnya:

[Tipe Fungsi/Tipe Data Nilai Kembalian] [Nama Fungsi] ([Paramater]) {
	
	Blok Program

	return [Nilai Kembalian];
}

*/

float g_flt_nilai1, g_flt_nilai2, g_flt_hasil;

float fg_flt_tambah(float l_flt_nilai1 = 0, float l_flt_nilai2 = 0) { //Initial Value pada Parameter/Default Parameter,
                                                                      //Dibutuhkan ketika argumen yang diberikan pada fungsi berupa Null (Tidak Punya Nilai)
                                                                      //Mencegah terjadinya NullPointerException
	float l_flt_hasil = l_flt_nilai1 + l_flt_nilai2;
	
	return l_flt_hasil;
}

int main() {
    
    cout<<"Masukkan Angka 1: ";
    cin>>g_flt_nilai1;
    
    cout<<"Masukkan Angka 2: ";
    cin>>g_flt_nilai2;
    
    g_flt_hasil = sqrt(91);
    
    cout<<"Hasil dari Penjumlahan "<<g_flt_nilai1<<" dan "<<g_flt_nilai2<<" adalah "<<g_flt_hasil<<endl;
    
    return 0;
}

/*
Buatlah program kalkulator sederhana (Tambah, Kurang, Bagi, Kali, Modulus, Akar, Pangkat)
Buatlah Masing 
*/
