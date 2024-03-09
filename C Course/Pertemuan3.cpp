// Pemrograman Berorientasi Object adalah sebuah konsep paradigma dalam menulis
// program berdasarkan object

// Object sendiri di C itu bisa berupa kelas atau Fungsi
// Paling umum adalah fungsi

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

void fg_iniFungsi(string l_int_param) {
	cout<<l_int_param<<ends;
}

int main(void){
	string l_str_angka;
	
	//cout<<"Masukan Angka Acak: "; cin>> l_int_angka; cout<<endl;
	cout<<"Masukkan Angka Bebas:"<<ends; getline(cin, l_str_angka);
	
	fg_iniFungsi(l_str_angka); //Ini adalah Pemanggilan Object
	
	return 0;
}

/*

Seseorang ingin membeli makanan di sebuah restoran. Dia dapat memilih makanannya,
memasukkan jumlah mkanannya, dan memasukkan harga makanannya, serta diskonnya, PPN
ditentukan sebesar 10%

INPUT:
Nama Menu
Jumlah Menu
Harga Menu
Besar Diskon

PROSES:
Akumulasi jumlah harga makanan, diskon dan PPN

OUTPUT
Hasil Harga Total

RUMUS:
TOTAL HARGA MAKANAN = Jumlah * Harga - ( JUMLAH * HARGA * DISKON / 100 ) + ( JUMLAH * HARGA * PPN / 100 )

CLUE:
GUNAKAN Pemrograman Berorientasi Object dengan menggunakan 3 Object Fungsi (INPUT, PROSES, OUTPUT)


*/

/*

Seseorang ingin mengubah Suhu dari derajat Ceclius menjadi derajat fahrenheit ataupun sebaliknya

INPUT
Suhu (Derajat Celcius/Fahrenheit/Kelvin)

PROSES
Perkalian Celcius dengan tetapan 9/5 lalu ditambah 32
Perkalian Fahrenheit dengan tetapan dikurang 32 lalu dikali 5/9
Perkalian Kelvin dengan 

Output
Suhu (Derajat Celcfius/Fahrenheit/Kelvin)

RUMUS
Fahrenheit = (Celcius * 9 / 5) + 32 //Celcius Ke Fahrenheit
//Celcius ke Kelvin
Celcius = (Fahrenheit - 32) * 5/9 //Fahrenheit Ke Celcius
//Fahrenheit ke Kelvin
//Kelvin ke Celcius
//Kelvin ke Fahrenheit

Gunakan Paradigma Pemrograman Berorientasi Objek dengan minimal 3 Object/Fungsi

*/
