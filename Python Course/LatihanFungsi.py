# -*- coding: utf-8 -*-
"""
Created on Sat Jun 22 13:39:05 2024

@author: binuscenter
"""

def fg_banner():
    print("""
---------------------
| Azhar Rizki Zulma |
|      Bintaro      |
---------------------
          """)

def fg_int_tambah( l_int_nilai1 = 0, l_int_nilai2 = 0 ):
    l_int_hasil = l_int_nilai1 + l_int_nilai2
    return l_int_hasil

def fg_int_kurang( l_int_nilai1 = 0, l_int_nilai2 = 0 ):
    l_int_hasil = l_int_nilai1 - l_int_nilai2
    return l_int_hasil

def fg_int_kali( l_int_nilai1 = 0, l_int_nilai2 = 0 ):
    l_int_hasil = l_int_nilai1 * l_int_nilai2
    return l_int_hasil

def fg_flt_bagi( l_int_nilai1 = 0, l_int_nilai2 = 0 ):
    l_flt_hasil = l_int_nilai1 / l_int_nilai2
    return l_flt_hasil

def fg_int_modulus( l_int_nilai1 = 0, l_int_nilai2 = 0 ):
    l_int_hasil = l_int_nilai1 % l_int_nilai2
    return l_int_hasil

def fg_output( l_str_operasi,
               l_int_nilai1,
               l_int_nilai2,
               l_hasil ):
    if ( l_str_operasi == "Penjumlahan" ):
        print("Hasil " + l_str_operasi + " " + str(l_int_nilai1) + " + " + str(l_int_nilai2) + " adalah " + str(l_hasil))
    elif ( l_str_operasi == "Pengurangan" ):
        print("Hasil " + l_str_operasi + " " + str(l_int_nilai1) + " - " + str(l_int_nilai2) + " adalah " + str(l_hasil))
    elif ( l_str_operasi == "Perkalian" ):
        print("Hasil " + l_str_operasi + " " + str(l_int_nilai1) + " * " + str(l_int_nilai2) + " adalah " + str(l_hasil))
    elif ( l_str_operasi == "Pembagian" ):
        print("Hasil " + l_str_operasi + " " + str(l_int_nilai1) + " / " + str(l_int_nilai2) + " adalah " + str(l_hasil))
    else:
        print("Hasil " + l_str_operasi + " " + str(l_int_nilai1) + " % " + str(l_int_nilai2) + " adalah " + str(l_hasil))

def fg_operation( l_str_menu ):
    g_int_nilai1 = int(input("Masukkan Nilai 1: "))
    g_int_nilai2 = int(input("Masukkan Nilai 2: "))
    
    if ( l_str_menu == "+" ):
        g_int_hasil = fg_int_tambah( g_int_nilai1, g_int_nilai2)
        fg_output( "Penjumlahan", g_int_nilai1, g_int_nilai2, g_int_hasil )
    elif ( l_str_menu == "-" ):
        g_int_hasil = fg_int_kurang( g_int_nilai1, g_int_nilai2)
        fg_output( "Pengurangan", g_int_nilai1, g_int_nilai2, g_int_hasil )
    elif ( l_str_menu == "*" ):
        g_int_hasil = fg_int_kali( g_int_nilai1, g_int_nilai2)
        fg_output( "Perkalian", g_int_nilai1, g_int_nilai2, g_int_hasil )
    elif ( l_str_menu == "/" ):
        g_flt_hasil = fg_flt_bagi( g_int_nilai1, g_int_nilai2)
        fg_output( "Pembagian", g_int_nilai1, g_int_nilai2, g_flt_hasil )
    else:
        g_int_hasil = fg_int_modulus( g_int_nilai1, g_int_nilai2)
        fg_output( "Sisa Bagi", g_int_nilai1, g_int_nilai2, g_int_hasil )

def fg_main():
    fg_banner()
    
    while(True):
        g_str_menu = input("Masukkan Menu(+|-|/|*|%|stop): ")
         
        if ( ( g_str_menu == "+" )
          or ( g_str_menu == "-" )
          or ( g_str_menu == "*" )
          or ( g_str_menu == "/" )
          or ( g_str_menu == "%" ) ):
            fg_operation( g_str_menu )
            continue
        else:
            print("Program Berhenti, Terima Kasih telah menggunakan program saya.")            
            break

fg_main()
