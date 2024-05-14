#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

unsigned short g_srt_angka;
string g_str_nama;
double g_int_angka2; //otomatis signed (dapat memiliki nilai negatif)

int main(){
	unsigned int l_int_age;
	
	l_int_age = 4;
	
	printf("%d ", l_int_age);
	printf("%d\n", l_int_age);
	
	cout<<l_int_age<<endl; //ends = end with space
	cout<<"test"<<endl;
}
/* Program Berakhir */


/* Variable */
/* Tipe Data */
// Integer = Bilangan Bulat 
// String = Teks/Banyak Character (Termasuk Angka)
// Char = Character Unsigned 0~255 Signed -128~127
// Boolean = Benar/Salah (True/False) (0/1)
// Float = Bilangan Decimal Dalam jumlah range yang lebih kecil dari Double
// Array/List = Daftar
// Enum = Enumeration, Data yang berbentuk array dimulai dari 0 dan bernilai sesuai indexnya
// Struct = Tipe Data yang bisa menyimpan Banyak Variabel
// Union = Mirip Struct, Tipe Data yang bisa menyimpan 
//         banyak Variabel dengan menggunakan address yang sama
// Double = Bilangan Decimal Dalam jumlah range yang lebih besar dari Float
// long = Bilangan Bulat dalam jumlah range yang lebih kecil dari int 
// Short = Bilangan Bulat dalam jumlah range yang lebih kecil dari long, short range = 0~65535 -32768~32767

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
Tipe Data Nama Variable    Isi Variable
*/
