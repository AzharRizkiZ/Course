#include <stdio.h>

struct g_struct_dataParent {
	char Name[10];
	char Alamat[64];
	char Tanggallahir[10];
	char NomorTelepon[240];
	
};


int main(){
	struct g_struct_dataParent l_struct_dataChild;
	int l_int_TL1, l_int_BL, l_int_TL2, l_int_NT1, l_int_NT2, l_int_NT3;
	char l_str_symbolNT;
	char l_str_symbolTL;
	
	printf("Nama: ");
	scanf("%s", l_struct_dataChild.Name);
	printf("Alamat: ");
	scanf("%s", l_struct_dataChild.Alamat);
	printf("Tanggal lahir: ");
	scanf("%d%s%d%s%d", l_int_TL1, l_str_symbolTL,l_int_BL, l_str_symbolTL,l_int_TL2);
	printf("Nomor Telepon: ");
	scanf("%d%s%d%s%d", l_int_NT1, l_str_symbolNT, l_int_NT2, l_str_symbolNT, l_int_NT3);
	
	l_struct_dataChild.Tanggallahir == "%d%s%d%s%d", l_int_TL1, l_str_symbolTL,l_int_BL, l_str_symbolTL,l_int_TL2;
	
	l_struct_dataChild.NomorTelepon == "%d%s%d%s%d", l_int_NT1, l_str_symbolNT, l_int_NT2, l_str_symbolNT, l_int_NT3;
	
	printf("%s\n", l_struct_dataChild.Name);
	printf("%s\n", l_struct_dataChild.Alamat);
	
	switch ( l_str_symbolTL ) {
	    case '-':
	    	printf("%s\n", l_struct_dataChild.Tanggallahir);
	        break;
	    
	    // operator doesn't match any case constant
	    default:
	        printf("Error! Sepertinya kamu salah memasukkan simbol");
	        break;
	}
	
	switch ( l_str_symbolNT ) {
	    case '/':
	    	printf("%s\n", l_struct_dataChild.NomorTelepon);
	        break;
	    
	    // operator doesn't match any case constant
	    default:
	        printf("Error! Sepertinya kamu salah memasukkan simbol");
	        break;
	}
	
	
	return 0;
}
