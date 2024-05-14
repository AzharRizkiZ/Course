#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int l_int_suhu; 
string l_str_satuan;
string l_str_satuanbaru;
	
f_input(){
	cout<<"Satuan: "<<ends; getline(cin, l_str_satuan);
	cout<<"Satuan Baru: "<<ends; getline(cin, l_str_satuanbaru);
	cout<<"Suhu: ";
	cin>> l_int_suhu; cout<<endl;
}

int f_int_proses(){
	int l_int_suhubaru;
	if(l_str_satuan == "C" && l_str_satuanbaru == "F"){
		l_int_suhubaru = (l_int_suhu * 9 / 5) + 32;
	}else if(l_str_satuan == "C" && l_str_satuanbaru == "K"){
		l_int_suhubaru = l_int_suhu + 273.15;
	}else if(l_str_satuan == "F" && l_str_satuanbaru == "K"){
		l_int_suhubaru = (l_int_suhu - 32) * 9 / 5 + 273.15;
	}else if(l_str_satuan == "F" && l_str_satuanbaru == "C"){
		l_int_suhubaru = (l_int_suhu - 32) * 5 / 9;
	}else if(l_str_satuan == "K" && l_str_satuanbaru == "C"){
		l_int_suhubaru = l_int_suhu - 273.15;
	}else if(l_str_satuan == "K" && l_str_satuanbaru == "F"){
		l_int_suhubaru = (l_int_suhu - 273.15) * 9 / 5 + 32;
	}
}

f_output(int l_int_suhubaru){
	cout<<l_int_suhubaru<<endl;
}

int main(){
	f_input();
	f_output(f_int_proses());
}
