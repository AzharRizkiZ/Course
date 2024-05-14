// Variabel Constant/Konstanta

// Clean Code / Penulisan code yang baik dan benar
// Penamaan Camel Case
// Camel Case penamaan sebuah variabel dimana setiap kata dibatasi dengan huruf kapital

int g_int_NamaVariabel;
/*
int main( void ) {
	string l_str_inputan;
	
	//Input
	//printf ("Contoh membaca dan menulis, ketik nilai integer: ");
	//scanf("%f", &l_int_inputan);
	cout<<"Contoh membaca dan menulis, ketik String:"<<ends;
	//cin>>l_str_inputan; // Ini input string tidak dapat menggunakan spasi
	getline(cin, l_str_inputan); // Ini Input String dengan spasi
	
	//Output
	//printf("%s", l_str_inputan);
	cout<<l_str_inputan<<endl;
	
}
*/

// Operasi Aritmatika
// Operator Aritmatika
// + : Untuk Menjumlahkan
// - : Untuk Mengurangi
// * : Untuk Perkalian
// / : Untuk Pembagian
// % : Untuk mendapatkan nilai sisa hasil bagi

// Operator Penugasan
// Variabel++ : Ditambahkan setelah Variabel (Variabel + 1)
// ++Variabel : Ditambahkan sebelum Variabel (1 + Variabel)
// Variabel-- : Ditambahkan setelah Variabel (Variabel - 1)
// --Variabel : Ditambahkan sebelum Variabel (1 - Variabel)

/*
int main( void ) {
	
	int l_int_iniAngka;
	
	l_int_iniAngka = 5;
	
	l_int_iniAngka++;
	
	cout<<l_int_iniAngka<<endl;
}
*/

// Operasi Boolean
// Boolean itu adalah sebuah kondisi yang hanya memiliki
// 2 kondisi yaitu Benar (True | 1) atau Salah (False | 0)

// Operator Pembanding
// <  : Lebih Kecil
// >  : Lebih Besar
// == : Sama Dengan
// != : Tidak Sama Dengan
// <= : Lebih Kecil atau Sama Dengan
// >= : Lebih Besar atau Sama Dengan

// Operator Logika
// && : Dan --> Semua variabel harus berhasil, kalau ada yang salah meskipun 1 pasti gagal
// || : Atau --> Salah satu variabel harus berhasil, kalau semua salah pasti gagal
// !Variabel : Negasi/Kebalikan --> Selain dari Variabel hasilnya kebalikan si Variabel

/*
int main ()
{
  int TRUE=1;
  int FALSE=0;
   printf ("Ini nilai TRUE AND TRUE  : %d \n",  TRUE && TRUE ); //1
   printf ("Ini nilai TRUE OR FALSE  : %d \n",  TRUE || FALSE); //1
   printf ("Ini nilai FALSE AND TRUE  : %d \n",  FALSE && TRUE ); //0
   printf ("Ini nilai FALSE OR FALSE  : %d \n",  FALSE || FALSE ); //0
   printf ("Ini nilai NOT TRUE  : %d \n", !TRUE); //0
   printf ("Ini nilai NOT FALSE  : %d \n", !FALSE ); //1
  
  int X=5;
  int Y=8;
   printf ("Hasil X < Y  : %d \n",  X < Y); //1
   printf ("Hasil X > Y  : %d \n",  X > Y); //0
   printf ("Hasil X <= Y : %d \n",  X <= Y ); //1
   printf ("Hasil X >= Y : %d \n",  X >= Y ); //0
   printf ("Hasil X == Y : %d \n", X == Y ); //0 
   printf ("Hasil X != Y : %d \n", X != Y); //1 
 
   printf ("Hasil X == X : %d \n", X == X ); //1
   printf ("Hasil X != X : %d \n",X != X); //0
   
   return 0;
}
*/

// Operasi Percabangan/Operasi Kondisional
// Operasi yang mengarahkan program ke kondisi tertentu
// if      : kondisi pertama program berhasil
// else if : kondisi ini akan berhasil ketika kondisi if gagal
// else    : kondisi ini akan berhasil ketika semua kondisi diatasnya gagal


#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

// Konstanta dengan keyword Define termnasuk kategori VALUE/nilai bernama
#define NOL 0 // Nilai yang disisipkan langsung ke compiler dan bukan termasuk variabel
#define SATU 1

// Konstanta dengan keyword Cosntant dan termasuk jenis Variabel
const int c_int_iniConstant = 5; //Unsigned = 0~65535 | Signed = -32768~32767

int main ( void ) {
	string l_str_email, l_str_pass;
	string l_str_emailOnDatabase = "azharrizki@zulma.id"
	string l_str_passOnDatabase = "1234"
	
	cout<<"Masukkan Email:"<<ends;
	cin>>l_str_email;
	
	cout<<"Masukkan Password:"<<ends;
	cin>>l_str_pass;
	
	if ( ( l_str_email == l_str_emailOnDatabase )
      && ( l_str_pass == l_str_passOnDatabase   ) ) {
      
		cout<<"Login Berhasil"<<endl;
		
	} else if ( ( l_str_email != l_str_emailOnDatabase )
	         && ( l_str_pass == l_str_passOnDatabase   ) {
		
		cout<<"Email Wrong!"<<endl;
		
	} else if ( ( l_str_email == l_str_emailOnDatabase )
	         && ( l_str_pass != l_str_passOnDatabase   ) {
		
		cout<<"Password Wrong!"<<endl;
		
	} else {
		
		cout<<"Email & Password Wrong"<<endl;
		
	}
	
}

// Buat kategorisasi Nilai
// Dari Inputan berupa Angka
// A nilai range 92-100
// B nilai range 85-91
// C nilai range 76-84
// D nilai range 50-75
// E nilai range dibawah 50
// Nilai inputan di filter dari 0~100
// "Harap masukkan nilai dari 0~100"


