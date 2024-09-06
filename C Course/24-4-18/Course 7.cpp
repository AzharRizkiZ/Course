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
	
	cout<<"Masukkan Index yang Ingin dihapus: ";
	cin>>l_int_index;
	
	g_str_list[l_int_index] = "";
	
	cout<<"Data Berhasil Dihapus"<<endl;
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
			cout<<"Terima Kasih telah menggunakan program saya"<<endl;
		} else {
			cout<<"Inputan Tidak Valid"<<endl;
		}
		cout<<endl;
	}
	
	return 0;
}


// Address adalah Alamat Memori
// Pointer Pengalihfungsi sebuah variabel dari a ke b ataupun sebaliknya

int g_int_contoh = 10;

int main() {
	
	printf("Nilainya si G = %i\n", g_int_contoh); //Yang dicetak merupakan Nilai
	printf("Alamat Memorinya si G = %i\n", &g_int_contoh); //Yang dicetak merupakan alamat memori
	
	int *l_int_penampung = &g_int_contoh;
	
	printf("Alamat Memori yang dialihfungsikan si L = %i\n", l_int_penampung); //Yang Dicetak Alamat Memori g_int_contoh
	printf("Alamat Memorinya Aslinya si L = %i\n", &l_int_penampung); //Yang Dicetak Memori Asli si L
	printf("Nilainya si L = %i\n", *l_int_penampung); //Yang Dicetak sudah pasti nilai g_int_contoh
	
	int *l_int_penampung2;
	
	l_int_penampung2 = l_int_penampung
	
	printf("Alamat Memori yang dialihfungsikan si L2 = %i\n", l_int_penampung2); //Yang Dicetak Alamat Memori g_int_contoh
	printf("Alamat Memorinya Aslinya si L2 = %i\n", &l_int_penampung2); //Yang Dicetak Memori Asli si L2
	printf("Nilainya si L2 = %i\n", *l_int_penampung2); //Yang Dicetak sudah pasti nilai g_int_contoh
	
	return 0;
}


// Struct & Union
// Struct merupakan tipe data object yang berisi banyak data dan memungkinkan memiliki tipe data berbeda
// (alamat berbeda setiap variabel yang ada didalam struct)
// Union merupkana tipe data object yang digunakan ketika terjadi dua perbedaan opsi,
// meskipun bisa menyimpan banyak data, tetapi union menyimpannya didalam satu alamat yang sama

union senjata {
	int pisau;
	int pistol;
	int riffles;
};

struct dataDiri {
	string nama;
	string asal;
	string sekolah;
};

struct dataDiri g_struct_saya;
union senjata g_un_gunakanSenjata;

int main() {
	
	g_un_gunakanSenjata.pisau = 100;
	
	cout<<"Union"<<endl; //Hanya dapat memiliki isi di salah satu member yang digunakan (alasannya karena menggunakan alamat memori yang sama)
	
	cout<<g_un_gunakanSenjata.pisau<<endl;
	cout<<g_un_gunakanSenjata.pistol<<endl;
	cout<<g_un_gunakanSenjata.riffles<<endl;
	
	cout<<"Struct"<<endl; //Semua member dapat memiliki isi karena setiap member alamatnya berbeda

	g_struct_saya.nama = "Azhar";
	g_struct_saya.asal = "Bintaro";
	g_struct_saya.sekolah = "Binus";
	
}

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

#define max_index 5

struct database{
  string email;
  string username;
  string password;
};
struct database g_struct_login[max_index] = {
  {"email1@example.com", "admin1", "min1"}, //0
  {"email2@example.com", "admin2", "min2"}, //1
  {"email3@example.com", "admin3", "min3"}, //2
  {"email4@example.com", "admin4", "min4"}, //3
  {"email5@example.com", "admin5", "min5"}, //4
};

int main() {
  string l_str_email;
  string l_str_username;
  string l_str_password;
  int l_choice;
  unsigned char l_char_status = true;
  unsigned char l_char_loginSuccess = false;
  
  while(l_char_status){
    cout<<"Choose Credentials: "<<endl;
    cout<<"1. Email: "<<endl;
    cout<<"2. Username: "<<endl;
    cout<<"Pick Credential Type (1/2) : "<<ends;
    cin>>l_choice;
    
    if(l_choice == 1) {
      cout<<"Enter Email: "<<ends;
      cin>>l_str_email;
      cout<<"Enter Password: "<<ends;
      cin>>l_str_password;
      for (int i = 0; i< max_index; i++){
        if(l_str_email == g_struct_login[i].email && l_str_password == g_struct_login[i].password){
          l_char_loginSuccess = true;
          l_char_status = false;
        } 
      }
    } else if (l_choice == 2){
      cout<<"Enter Username: "<<ends;
      cin>>l_str_username;
      cout<<"Enter Password: "<<ends;
      cin>>l_str_password;
      for (int i = 0; i< max_index; i++){
        if(l_str_username == g_struct_login[i].username && l_str_password == g_struct_login[i].password){
          l_char_loginSuccess = true;
          l_char_status = false;
        } 
       }
    } else{
      cout<<"Invalid Choice"<<endl;
    }
  }
  if (l_char_loginSuccess){
    cout<<"Login Successful"<<ends;
  } 
}

// Buatlah sistem login dimana terdapat dua menu pilihan login menggunakan email/username
// Jika email/username atau password salah maka, program akan terus berulang
// dan Jika email/username dan password benar maka akan muncul tampilan login berhasil
// Buat fungsi untuk melakukan input dan cek validasi email/username dan password
