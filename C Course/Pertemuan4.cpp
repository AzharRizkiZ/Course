//Kata kunci typedef adalah kata kunci untuk mendefinisikan tipe data baru.

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

/*
struct Mahasiswa
{
    char *name; //Pointer Char Name
    char *address; //Pointer Char Address
    int age; //Integer Age
};

/* STRUCT BIASA */
// membuat struct

/*
struct Distance{
    int feet;
    float inch;
};

void main() {
    // menggunakan struct
    struct Distance d1, d2;
} */

/* TYPEDEF STRUCT */
// membuat struct dengan typedef
typedef struct {
	char tipe[50]];
	int feet;
    float inch;
} distances;
 
int main(void)
{
  	distances dist1;
 
 	cout<<"Masukkan (Tinggi/Lebar/Panjang): "<<ends;
 	cin>>dist1.tipe;cout<<endl;
 	cout<<"Masukkan dalam Meter: "<<ends;
 	cin>>dist1.feet;cout<<endl;
 	cout<<"Masukkan dalam Inci: "<<ends;
 	cin>>dist1.inch;cout<<endl;
 	
 	printf("%s\n", dist1.tipe);
  	printf("Dalam Meter: %i\n", dist1.feet);
  	printf("Dalam Meter: %f\n", dist1.inch);
 
  	return 0;
}

// TUGAS TYPEDEF 1
//Buat Tugas 2 menjadi menggunakan Typedef


//TUGAS 2
// Buat Program untuk Mencari Akar Persamaan Kuadrat dan Determinan
// Hati2 Jika inputannya 0 maka itu bukan merupakan persamaan kuadrat
// Jika hasil determinan > 0 maka memiliki akar berbeda
// Jika hasil Determinan < 0 maka merupakan akar imaginer
// Dan jika determinan = 0 maka merupakan akar kembar
// CLUE: Inputan ada 3
// Referensi Program dan rumusnya bisa kamu cari di internet
