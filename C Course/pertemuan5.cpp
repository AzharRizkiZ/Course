#include <stdio.h>
#include <iostream>
#include <math.h>

// UNION & LIST 

// STRUCT itu pembungkus banyak variabel tetapi setiap variabel 
// memiliki alamat/address memori yang berbeda2 setiap vaariabel

struct TESTSTRUCT{
	int angka1;
	int angka2;
};

// UNION itu pembungkus banyak variabel tetapi 
// memiliki alamat memori yang sama.

union TESTUNION{
	int angka1;
	int angka2;
};

int main(){
	union TESTUNION g_un_testUnion;
	
	g_un_testUnion.angka1 = 10;
	g_un_testUnion.angka2 = 20;
	
	printf( "%d\n", &g_un_testUnion.angka1 );
	printf( "%d", &g_un_testUnion.angka2 );
	
	return 0;
}
