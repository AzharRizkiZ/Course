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

Void merupakan fungsi yang tidak memiliki nilai kembalian

//Initial Value pada Parameter/Default Parameter,
//Dibutuhkan ketika argumen yang diberikan pada fungsi berupa Null (Tidak Punya Nilai)
//Mencegah terjadinya NullPointerException

*/

#define FALSE 0
#define TRUE 1

float g_flt_nilai1, g_flt_nilai2, g_flt_hasil;
string g_str_menu;
int g_int_status = TRUE;

void fg_inputNilai() { //NULL

	cout<<"Masukkan Angka 1: ";
    cin>>g_flt_nilai1;
    
    cout<<"Masukkan Angka 2: ";
    cin>>g_flt_nilai2;
    
}

float fg_flt_tambah(float l_flt_nilai1 = 0, float l_flt_nilai2 = 0) {
	
	float l_flt_hasil = l_flt_nilai1 + l_flt_nilai2;
	
	return l_flt_hasil;
}

float fg_flt_kurang(float l_flt_nilai1 = 0, float l_flt_nilai2 = 0) {
	
	float l_flt_hasil = l_flt_nilai1 - l_flt_nilai2;
	
	return l_flt_hasil;
}

float fg_flt_kali(float l_flt_nilai1 = 0, float l_flt_nilai2 = 0) {
	
	float l_flt_hasil = l_flt_nilai1 * l_flt_nilai2;
	
	return l_flt_hasil;
}

float fg_flt_bagi(float l_flt_nilai1 = 0, float l_flt_nilai2 = 0) {
	
	float l_flt_hasil = l_flt_nilai1 / l_flt_nilai2;
	
	return l_flt_hasil;
}

float fg_flt_modulus(int l_flt_nilai1 = 0, int l_flt_nilai2 = 0) {
	
	float l_flt_hasil = l_flt_nilai1 % l_flt_nilai2;
	
	return l_flt_hasil;
}

void fg_output(string l_str_operasi, float l_int_hasil) {
	cout<<"Hasil dari "<<l_str_operasi<<" "<<g_flt_nilai1<<" dan "<<g_flt_nilai2<<" adalah "<<l_int_hasil<<endl;
}

int main() {
    
    while( g_int_status ) {
    	
    	cout<<"Masukkan Menu(+|-|/|*|%|c [untuk berhenti]): ";
    	cin>>g_str_menu;
    	
    	if ( g_str_menu == "+" ) {
    		
    		fg_inputNilai();
    		
    		g_flt_hasil = fg_flt_tambah( g_flt_nilai1, g_flt_nilai2 );
    		
		    fg_output("penjumlahan", g_flt_hasil);
		    
		} else if ( g_str_menu == "-" ) {
			
			fg_inputNilai();
			
			g_flt_hasil = fg_flt_kurang( g_flt_nilai1, g_flt_nilai2 );
			
		    fg_output("pegurangan", g_flt_hasil);
		    
		} else if ( g_str_menu == "*" ) {
			
			fg_inputNilai();
			
			g_flt_hasil = fg_flt_kali( g_flt_nilai1, g_flt_nilai2 );
			
		    fg_output("perkalian", g_flt_hasil);
		    
		} else if ( g_str_menu == "/" ) {
			
			fg_inputNilai();
			
			g_flt_hasil = fg_flt_bagi( g_flt_nilai1, g_flt_nilai2 );
			
		    fg_output("pembagian", g_flt_hasil);
		    
		} else if ( g_str_menu == "%" ) {
			
			fg_inputNilai();
			
			g_flt_hasil = fg_flt_modulus( g_flt_nilai1, g_flt_nilai2 );
			
		    fg_output("modulus", g_flt_hasil);
		    
		} else if ( g_str_menu == "c" ) {
			
			cout<<"Program Dihentikan"<<endl;
			
			g_int_status = FALSE;
			
		} else {
			
			cout<<"Inputan Tidak Valid"<<endl;
			
		}
	}
    
    return 0;
}

/*
Buatlah program kalkulator sederhana (Tambah, Kurang, Bagi, Kali, Modulus)
Buatlah Masing-masing fungsi untuk setiap operasi
Program dapat berulang sampai dihentikan oleh user
lalu user juga dapat memilih menu operasi
*/
