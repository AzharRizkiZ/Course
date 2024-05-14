#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

// Switch Case

// Switch Case merupakan metode percabangan selain dari if
// Penggunaannya lebih simple dan tidak dapat digunakan untuk
// memfilter operasi logika menggunakan operator logika
// dan juga tidak dapat menggunakan operator pembanding

// kata kunci:
// - switch
// - case
// - break


int main() {
	
  	unsigned short l_short_break;
  	
  	cout<<"Masukkan Jumlah Perulangan: ";
  	cin>>l_short_break;
  	
  	for ( int i = l_short_break; i > 0; i-- ) {
  		for ( int j = 0; j < i; j++ ) {
  			cout<<i;
		}
		cout<<endl;
	}

  	return 0;

}

/*
Buatlah program dengan keluaran output seperti dibawah ini menggunakan perulangan for

Output Tugas 1
1
22
333
4444
55555
666666
7777777

Output Tugas 2
7777777
666666
55555
4444
333
22
1
22
333
4444
55555
666666
7777777

// ATM
// Amati, Tiru, Modifikasi

int main() {
  unsigned short l_short_break = 7; 
  
  
  for ( int i = l_short_break; i > 0; i-- ) { 
    for ( int j = 1; j <= i; j++ ) { 
      cout<<i;

    } 
    cout<<endl;
  } 
  
  for ( int i = 2; i <= l_short_break; i++ ) { 
    for ( int j = 1; j <= i; j++ ) { 
      cout<<i;
    } 
    cout<<endl; 
  } 
  return 0; 

}


int main() {
  unsigned short l_short_break = 7; 
  
  
 
  for ( int i = 0; i <= l_short_break; i++ ) { 
    for ( int j = 0; j < i; j++ ) { 
      cout<<i<< ends; 
    } 
    cout<<endl; 
  } 
  return 0; 

}
*/

