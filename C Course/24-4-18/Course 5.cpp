// Perulangan

// Perulangan dalam bahasa pemrograman merupakan suatu 
// program yang dapat berjalan secara berulang-ulang 
// hingga diberhentikan otomatis atau diberhentikan 
// oleh user

// Perulangan dibagi menjadi 2
// 1. Perulangan yang diketahui jumlah perulangannya = For
// 2. Perulangan yang tidak diketahui jumlah perulangannya = While

// deklarasi for seperti dibawah ini ya
// for ( inisilaisasi/deklarasi nilai awal; kondisi berjalan; increment/decrement )
// increment = i++ ( i = i + 1 )
// decrement = i-- ( i = i - 1 )

// % = modulus
// modulus adalah sisa hasil bagi

// while ( kondisi berjalan )
//

/*
int main() {
	
	unsigned short l_short_break;
	
	cout<<"Masukkan Jumlah Perulangan: ";
	cin>>l_short_break;
	
	int i = l_short_break;
	while ( i > 0 ) {
		int j = 0;
		while ( j < i ) {
			cout<<i;
			j++;
		}
		cout<<endl;
		i--;
	}
	
	int k = 2;
	while ( k <= l_short_break ) {
		int l = 0;
		while ( l < k ) {
			cout<<k;
			l++;
		}
		cout<<endl;
		k++;
	}
	
	return 0;
}
*/



#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

#define FALSE 0
#define TRUE 1

int main() {
	
	string l_str_input;
	
	float l_float_tampung = 0;
	float l_float_hasil;
	unsigned char l_char_status = TRUE;
	unsigned int l_int_bagi = 0;
	while ( l_char_status ) {
		
		cout<<"Masukkan Inputan: ";
		getline(cin, l_str_input);
		
		if ( l_str_input == "A" ) {
			l_float_tampung = l_float_tampung + 4.00;
			l_int_bagi++;
		} else if ( l_str_input == "A-" ) {
			l_float_tampung = l_float_tampung + 3.75;
			l_int_bagi++;
		} else if ( l_str_input == "B+" ) {
			l_float_tampung = l_float_tampung + 3.50;
			l_int_bagi++;
		} else if ( l_str_input == "B" ) {
			l_float_tampung = l_float_tampung + 3.00;
			l_int_bagi++;
		} else if ( l_str_input == "B-" ) {
			l_float_tampung = l_float_tampung + 2.75;
			l_int_bagi++;
		} else if ( l_str_input == "C+" ) {
			l_float_tampung = l_float_tampung + 2.50;
			l_int_bagi++;
		} else if ( l_str_input == "C" ) {
			l_float_tampung = l_float_tampung + 2.00;
			l_int_bagi++;
		} else if ( l_str_input == "C-" ) {
			l_float_tampung = l_float_tampung + 1.75;
			l_int_bagi++;
		} else if ( l_str_input == "D" ) {
			l_float_tampung = l_float_tampung + 1.50;
			l_int_bagi++;
		} else if ( l_str_input == "E" ) {
			l_float_tampung = l_float_tampung + 1.25;
			l_int_bagi++;
		} else if ( l_str_input == "F" ) {
			l_float_tampung = l_float_tampung + 1.00;
			l_int_bagi++;
		} else {
			l_float_hasil = l_float_tampung/l_int_bagi;
			cout<<"Rata-rata nilainya adalah "<<l_float_hasil<<endl;
			l_char_status = FALSE;
		}
		
	}
		
}

/*
Buatlah program fungsi untuk merata-ratakan nilai sesuai dengan kategori
huruf yang diinputkan dimana aturannya adalah sebagai berikut:
A = 4.00
A- = 3.75
B+ = 3.50
B = 3.00
B- = 2.75
C+ = 2.50
C = 2.00
C- = 1.75
D = 1.50
E = 1.2

OUTPUT

Masukkan Kategori Nilai (Tekan Enter Untuk Berhenti): A //4
Masukkan Kategori Nilai (Tekan Enter Untuk Berhenti): B //3
Masukkan Kategori Nilai (Tekan Enter Untuk Berhenti): B //3
Masukkan Kategori Nilai (Tekan Enter Untuk Berhenti): C //2
Masukkan Kategori Nilai (Tekan Enter Untuk Berhenti):   //(4 + 3 + 3 + 2)/4 = 3
Rata-rata nilainya adalah 3.00 dengan Predikat B
*/
