/* Unsigned & Signed */
/* Variabel Constant */
/* Struct, Union, Array */

#include <stdio.h>

// STRUCT adalah sebuah variabel terstruktur yang berisi banyak member yang merupakan variabel
// Setiap Member Struct memiliki alamat memori yang berbeda-beda

struct g_struct_dataParent {
    char *Nama;         //Misalkan Alamat Memori: 1
    char *Alamat;       //Misalkan Alamat Memori: 2
    char *TanggalLahir; //Misalkan Alamat Memori: 3
    char *NomorTelepon; //Misalkan Alamat Memori: 4
    int Umur;           //Misalkan Alamat Memori: 5
};

void f_input(struct g_struct_dataParent l_struct_dataChild) {
	//
}

void f_output(struct g_struct_dataParent l_struct_dataChild) {
	printf("%s", l_struct_dataChild.Nama);
}

int main() {
	struct g_struct_dataParent l_struct_dataChild;
	
	l_struct_dataChild.Nama = "Test";
	
	f_output(l_struct_dataChild);
	
	return 0;
}


// Buatlah sebuah struct, nilai yang dimasukkan berasal dari inputan
// lalu cetak semua membernya, buat menggunakan 2 fungsi, yaitu
// fungsi input dan fungsi output (cetak)
// Structnya minimal memiliki 10 member


