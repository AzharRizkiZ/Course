#include <stdio.h>
#include "1. tugas.cpp"

int main(){
	
	printf("Enter an operator (+, -, *, /): ");
  	scanf("%c", &g_str_operator);
  	printf("Enter first operands: ");
  	scanf("%lf", &s_dbl_first);
  	printf("Enter second operands: ");
  	scanf("%lf", &s_dbl_second);
	
	fg_switchCase( g_str_operator, s_dbl_first, s_dbl_second );
	
}
