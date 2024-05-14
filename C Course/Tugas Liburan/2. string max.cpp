#include <stdio.h>

//Unsigned -> Variabel yang tidak memiliki nilai negatif
//Signed -> variabel yang memiliki nilai negatif

unsigned char g_uint_AngkaUnsigned = 0;
//char ukuran data unsigned 0-255
//Long ukuran data unsigned 0-65535
//int ukuran data unsigned 0-65535

int main(){
	
	g_uint_AngkaUnsigned = g_uint_AngkaUnsigned + 64; //-255
	printf("%d", g_uint_AngkaUnsigned);
	
	return 0;
}
