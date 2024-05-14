/* Perulangan */

/*

Umumnya konsep perulangan dalam pemrograman merupakan sebuah konsep penulisan
sebuah kode program yang tidak perlu melakukan penulisan kode program yang sama
secara berulang kali

Perulangan dalam bahasa pemrograman itu ada 2 yaitu WHILE & FOR

WHILE --> Digunakan ketika jumlah perulangannya tidak diketahui

FOR --> Digunakan ketika jumlah perulangannya diketahui

int main ( void ) {
	/*
	printf("Perulangan ke-0\n");
	printf("Perulangan ke-1\n");
	printf("Perulangan ke-2\n");
	printf("Perulangan ke-3\n");
	printf("Perulangan ke-4\n");
	printf("Perulangan ke-5\n");
	printf("Perulangan ke-6\n");
	*/
	//for ( definisi awal nilai index; kondisi untuk berhenti; increment/decrement i++/i-- )
	// i++ : i = i + 1
	// i-- : i = i - 1
	// ++i : i = 1 + i
	// --i : i = 1 - i
	/*
	for ( int index = 0; index < 7; index++ ) {
		cout<<"Perulangan ke-"<<index<<endl;
	} */
	
	//while ( kondisi ) {
	//   kondisi untuk berhenti (bisa menggunakan increment/decrement atau keyword break)
	//}
	
	/*
	int index = 0;
	
	while ( index < 7 ) {
		cout<<"Perulangan ke-"<<index<<endl;
		index++;
	}
}
*/

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

#define TRUE 1

string g_str_status;

int main (void) {
	
	string l_str_email, l_str_pass;
	
	cout<<"Jalankan Server (ON/OFF):"<<ends;
	cin>>g_str_status;
	
	if ( g_str_status == "ON" ) {
		
		int index = 1;
		
		while ( TRUE ) {
			
			int l_int_menuNum;
			
			cout<<"--------------------"<<endl;
			cout<<"-       MENU       -"<<endl;
			cout<<"--------------------"<<endl;
			cout<<"- 1. CREATE DATA   -"<<endl;
			cout<<"- 2. READ DATA     -"<<endl;
			cout<<"- 3. UPDATE DATA   -"<<endl;
			cout<<"- 4. DELETE DATA   -"<<endl;
			cout<<"- 5. SHUTDWON      -"<<endl;
			cout<<"--------------------"<<endl;
			cout<<"-   INPUT NUMBER   -"<<endl;
			cout<<"--------------------"<<endl;
			cin>>l_int_menuNum;
			
			if ( l_int_menuNum == 1 ) {
				
				cout<<"--------------------"<<endl;
				cout<<"-   CREATE DATA    -"<<endl;
				cout<<"--------------------"<<endl;
				
				cout<<"Buat Email:"<<ends;
				cin>>l_str_email;
				
				cout<<"Buat Password:"<<ends;
				cin>>l_str_pass;
				
			} else if ( l_int_menuNum == 2 ) {
				
				cout<<"--------------------"<<endl;
				cout<<"-    READ DATA     -"<<endl;
				cout<<"--------------------"<<endl;
				
				cout<<l_str_email<<endl;
				
				cout<<l_str_pass<<endl;
				
			} else if ( l_int_menuNum == 3 ) {
				
				cout<<"--------------------"<<endl;
				cout<<"-   UPDATE DATA    -"<<endl;
				cout<<"--------------------"<<endl;
				
				cout<<"Update Email:"<<ends;
				cin>>l_str_email;
				
				cout<<"Update Password:"<<ends;
				cin>>l_str_pass;
				
			} else if ( l_int_menuNum == 4 ) {
				
				cout<<"--------------------"<<endl;
				cout<<"-   DELETE DATA    -"<<endl;
				cout<<"--------------------"<<endl;
				
				l_str_email = "";
				
				l_str_pass = "";
				
			} else {
				
				cout<<"--------------------"<<endl;
				cout<<"- Program Selesai  -"<<endl;
				cout<<"--------------------"<<endl;
				break;
				
			}
			
			cout<<"--------------------"<<endl;
			cout<<"- Perulangan ke-"<<index<<"  -"<<endl;
			cout<<"--------------------"<<endl;
			index++;
		}
		
	} else {
		
		cout<<"Server Tidak Berjalan"<<endl;
		
	}
	
}



// Buatlah sebuah kdoe program yang dapat melakukan CRUD

// C REATE --> INPUT
// R EAD --> CETAK
// U PDATE --> INPUT
// D ELETE --> DELETE
// STOP SERVER

// Didalam While ada sebuah menu untuk melakukan CREATE, READ, UPDATE, DELETE & STOP SERVER
// Agar terlihat terjadi berapa kali perulangan maka tambahkan metode 
// increment didalam while



