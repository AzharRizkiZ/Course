//1 PENGENALAN C++ & VARIABEL & NILAI KONSTAN Min: Nadia
//2 OPERASI ARITMATIKA
//3 IF ELSE
//4 While & For Min: Nasyifa
//5 Fungsi & Struct Min: Nasyifa & Keyra
//6 Fungsi Rekursif & Union & List
//7 Rekap Materi Min: Keyra & Fathih
//8 Ujian/Materi

//Dokumentasi Aturan Pengetikan Standar dalam Pemrograman

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

#define TRUE 1

string g_str_nama;

//Fungsi itu adalah sebuah pecahan program, digunakan ketika dibutuhkan
//saja jika program terlalu panjang

string fs_str_inputNama(string l_str_nama) {
	
	cout<<"Masukkan Nama: "<<ends;
	getline(cin, l_str_nama);
	
	return l_str_nama;
	
}

void fs_banner()  {
	cout<<"- Program Perulangan -"<<endl;
	cout<<"- By Siapa           -"<<endl;
}

//WHILE digunakan ketika kondisi perulangannya jumlahnya tidak diketahui
//FOR digunakan ketika kondisi perulangannya diketahui

/* Fungsi Utama untuk Menjalankan Program */
int main(void) {
	
	fs_banner(); //cout<<"- Program Perulangan -"<<endl;
	
    	g_str_nama = fs_str_nama(g_str_nama);
	
	/*
	Penulisan while ([Kondisi]) {
		isi program whilenya
	}
	*/
	/* Perulangan yang digunakan untuk Mencetak nama */
	int l_int_index = 0;
	while(1) { //1 = True
		if ( l_int_index < 20 ) {
			cout<<l_int_index + 1<<". "<<g_str_nama<<endl;
			l_int_index++; // l_int_index = l_int_index + 1
		} else {
			break; //Kata Kunci break untuk memberhentikan perulangan
		}
	}
	
	/*
	for ([Deklarasi index nilai awal]; [Kondisi untuk Berhenti]; [Increment/Decrement]) {
		isi program whilenya
	}
	*/	
	/* Perulangan yang digunakan untuk Mencetak nama tanpa hingga */
	//for (int i = 5; i > 0; i--) { // 5 ~ 1 // i = i - 1
	for (int i = l_int_index; i < 40; i++) { // 0 ~ 4 // i = i + 1
		cout<<i + 1<<". "<<g_str_nama<<endl;
	}
	
	return 0;
}
