#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

//Diluar blok program main hanya bisa melakukan
//Deklarasi variabel, deklarasi nilai constant, pembuatan define, dan deklarasi fungsi

int iniVariabel = 0; //Deklarasi Variabel

int main(){ //Program Core (Program Utama) | Fungsi Utama
	
	printf("Zulma\n"); //Backslash N artinya New Line (Memulai Baris Baru)

    printf("Bintaro\n");

    printf("Software Quality Assurance\n");
}

//Diluar Blok Program


// File C

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;s

/*
Variabel bertipe angka seperti char, short, long dalam C memiliki 2 tipe
1. signed
Variabel yang ditandatangani --> variabel yang dapat menerima nilai negatif maupun positif
2. Unsigned
Variabel yang tidak ditandatangani --> variabel hanya dapat menerima nilai positif
*/

char char_angka = 127; //-128 ~ 127 Defaultnya adalah Signed
short shrt_angka = 32767; //-32768 ~ 32767 Defaultnya adalah Signed
long long_angka = 2147483647; //-2147483648 ~ 2147483647 Defaultnya adalah Signed

unsigned char uchar_angka = 255; //0 ~ 255
unsigned short ushrt_angka = 65535; //0 ~ 65535
unsigned long ulong_angka = 4294967295; //0 ~ 4294967295

int main(){
	printf("%d\n", uchar_angka);
	printf("%d\n", ushrt_angka);
	printf("%d\n", ulong_angka);
	
	return 0;
}
