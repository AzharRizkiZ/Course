#include <stdio.h>

char g_str_operator;                     /* Variabel Global */
static double s_dbl_first, s_dbl_second; /* Variabel Static */

static char fs_str_plus( double l_dbl_first, double l_dbl_second ) {
	return printf("%.1lf + %.1lf = %.1lf", l_dbl_first, l_dbl_second, l_dbl_first + l_dbl_second);
}

static char fs_str_minus ( double l_dbl_first, double l_dbl_second ) {
	return printf("%.1lf - %.1lf = %.1lf", l_dbl_first, l_dbl_second, l_dbl_first - l_dbl_second);
}

static char fs_str_multiple ( double l_dbl_first, double l_dbl_second ) {
	return printf("%.1lf * %.1lf = %.1lf", l_dbl_first, l_dbl_second, l_dbl_first * l_dbl_second);
}

static char fs_str_divide ( double l_dbl_first, double l_dbl_second ) {
	return printf("%.1lf / %.1lf = %.1lf", l_dbl_first, l_dbl_second, l_dbl_first / l_dbl_second);
}

int fg_switchCase( char l_str_operator, double l_dbl_first, double l_dbl_second ){
	
	switch ( l_str_operator ) {
	    case '+':
	    	fs_str_plus( l_dbl_first, l_dbl_second );
	        break;
	    case '-':
	        fs_str_minus( l_dbl_first, l_dbl_second );
	        break;
	    case '*':
	        fs_str_multiple( l_dbl_first, l_dbl_second );
	        break;
	    case '/':
	        fs_str_divide( l_dbl_first, l_dbl_second );
	        break;
	    // operator doesn't match any case constant
	    default:
	        printf("Error! Sepertinya kamu salah memasukkan operator aritmarika");
	        break;
	}
	
	return 0;
  	
}

