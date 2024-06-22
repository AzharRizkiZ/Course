print("""
      ---------------------
      | Azhar Rizki Zulma |
      |      Bintaro      |
      ---------------------
      """)

while(True):
    g_str_menu = input("Masukkan Menu(+|-|/|*|%|stop): ")
     
    if ( ( g_str_menu == "+" )
      or ( g_str_menu == "-" )
      or ( g_str_menu == "*" )
      or ( g_str_menu == "/" )
      or ( g_str_menu == "%" ) ):
        g_int_nilai1 = int(input("Masukkan Nilai 1: "))
        g_int_nilai2 = int(input("Masukkan Nilai 2: "))
        
        if ( l_str_menu == "+" ):
            l_int_hasil = l_int_nilai1 + l_int_nilai2
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
        elif ( l_str_menu == "-" ):
            l_int_hasil = l_int_nilai1 - l_int_nilai2
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
        elif ( l_str_menu == "*" ):
            l_int_hasil = l_int_nilai1 * l_int_nilai2
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
        elif ( l_str_menu == "/" ):
            l_flt_hasil = l_int_nilai1 / l_int_nilai2
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
        else:
            l_int_hasil = l_int_nilai1 % l_int_nilai2
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
        continue
    else:
        print("Program Berhenti, Terima Kasih telah menggunakan program saya.")            
        break
