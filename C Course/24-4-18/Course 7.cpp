//Pointer, Address, Struct, Union, List/Array


#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

// List/Array

// List/Array adalah sebuah daftar yang memiliki banyak data

#define JUMLAH_INDEX 6

int g_int_menu, g_int_status;

string g_str_list[JUMLAH_INDEX] = { "Azhar", "Jordie", "Ridho", "Ardi", "Clementius", "Jasmine" };

void fg_showMenu() {
	cout<<"Menu"<<endl;
	cout<<"1. Tampil"<<endl;
	cout<<"2. Ganti"<<endl;
	cout<<"3. Hapus"<<endl;
	cout<<"0. Keluar"<<endl;
}

void fg_changeList() {
	int l_int_index;
	string l_str_newData;
	
	cout<<"Masukkan Index yang Ingin diganti: ";
	cin>>l_int_index;
	
	cout<<"Masukkan Yang ingin diubah: ";
	cin>>l_str_newData;
	
	g_str_list[l_int_index] = l_str_newData;
	
	cout<<"Data Dalam List Berhasil Diganti"<<endl;
}

void fg_showList() {
	
	for( int i = 0; i < JUMLAH_INDEX ; i++ ) {
		cout<<"Index Ke-"<<i<<": "<<g_str_list[i]<<endl;
	}
	
	cout<<"Data Berhasil Ditampilkan"<<endl;
}

void fg_deleteList() {
	int l_int_index;
	
	cout<<"Masukkan Index yang Ingin diganti: ";
	cin>>l_int_index;
	
	g_str_list[l_int_index] = "";
	
	cout<<"Data Berhasil Dihapus";
}

int main() {
	
	g_int_status = true;
	
	while ( g_int_status ) {
		
		fg_showMenu(); //Fungsi Tidak Mengembalikan Nilai
	
		cout<<"Masukkan Menu: ";
		cin>>g_int_menu;
		
		if ( g_int_menu == 1 ) {
			fg_showList();
		} else if ( g_int_menu == 2 ) {
			fg_changeList();
		} else if ( g_int_menu == 3 ) {
			fg_deleteList();
		} else if ( g_int_menu == 0 ) {
			g_int_status = false;
		} else {
			cout<<"Inputan Tidak Valid"<<endl;
		}
	}
	
	return 0;
}
