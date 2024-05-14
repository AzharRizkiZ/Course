#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

// Struktur Percabangan dalam Bahasa Pemrograman C/C++
// Nested If

// kata kunci if/else if/else

// ekspresi Boolean dalam Bahasa C/C++
// Benar = True = 1
// Salah = False = 0


// Operator Logika
// AND = && 
// OR = ||
// NOT !

int main() {
	
  	unsigned short l_short_bb, l_short_tb;
  	
  	cout<<"Masukkan Berat Badan Anda: ";
  	cin>>l_short_bb;
  	
  	cout<<"Masukkan Tinggi Badan Anda: ";
  	cin>>l_short_tb;
  
	if ( ( l_short_bb == 30 ) || ( l_short_tb == 150 ) ) {
	  	
		cout<<"Anda Kekurangan Gizi"<<endl;
		
	} else if ( ( l_short_bb == 40 ) || ( l_short_tb == 170 ) ) {
		
		cout<<"Anda Kurus"<<endl;
		
	} else if ( ( l_short_bb == 50 ) || ( l_short_tb == 175 ) ) {
		
	    cout<<"Berat Badan Anda Standar"<<endl;
	    
	} else if ( ( l_short_bb > 60 ) || ( l_short_tb == 160 ) ) {
		
		cout<<"Anda Termasuk Gemuk"<<endl;
		
	} else {
		
		cout<<"Anda Termasuk Obesitas"<<endl;
		
	}

  
  	return 0;
}




/* 

Buat Program untuk mengkategorisasikan umur
inputan bilangan decimal yang dapat diinput oleh user
inputan tidak bisa negatif

Bayi = 0 - 1
Batita = 1 - 3
Balita = 3 = 5
Anak - Anak = 5 - 12
Remaja = 13 - 17
ABG = 18 - 21
Dewasa = 22 - 50
Pra Lansia = 51 - 70
Lansia = 71 keatas

*/

