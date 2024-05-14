/******************************************************************************/
/*  LATIHAN 1 BINUS CENTER                                                    */
/*----------------------------------------------------------------------------*/
/*  Copyright (C) 2023 BINUS CENTER                                           */
/*  Licensed material of BINUS CENTER                                         */
/*----------------------------------------------------------------------------*/
/*  Object              : CONTOH                                              */
/*  Outline             : EXXAMPLE PROGRAM                                    */
/*  File ID             : CONTOH-1                                            */
/*----------------------------------------------------------------------------*/
/*  Author              : Azhar Rizki                                         */
/*  Revision Author     : -                                                   */
/*  Created Time        : 2023-12-14 18:15 UTC +07:00                         */
/*  Modification Time   : 2023-12-14 18:15 UTC +07:00                         */
/*  Version             : 1 (Number of Version)                               */
/*  Revision            : 0 (Number of Revision)                              */
/******************************************************************************/

/******************************************************************************/
/*        INCLUDE HEADER                                                      */
/******************************************************************************/
#include <stdio.h> //For Input & Output Function

/******************************************************************************/
/*        CONSTANT DATA                                                       */
/******************************************************************************/


/******************************************************************************/
/*        GLOBAL VARIABLE                                                     */
/******************************************************************************/
/* Global | Public Variable */
char g_str_iniBox[] = "Apel"; /* Variabel yang digunakan di mana saja */
							  /* Bahkan bisa digunakan di file lain, */
							  /* Selain file deklarasinya (File ini Contoh.cpp) */

/******************************************************************************/
/*        STATIC VARIABLE                                                     */
/******************************************************************************/
/* Static | Private Variable */
static char s_str_iniBox[] = "Jeruk"; /* Variabel yang hanya digunakan di file deklarasinya */
                                      /* berarti hanya bisa digunakan di file Contoh.cpp */
                                     
int fungsi(int parameter1, parameter2) {
	
	/* Local Variable */
    char l_str_iniBox[] = "Jambu"; /* Variabel yang hanya bisa digunakan di dalam fungsi */
                                   /* atau digunakan di dalam fungsi deklarasinya saja */
	printf( l_str_iniBox );
	
	return 0;
	
}


