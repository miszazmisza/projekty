#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ifstream plik;
	plik.open("dane_obrazki.txt");
	
	int i,s;
	
	for(s=0;s<20;s++){
		string krotka;
		plik>>krotka;
		int ilosc=0; //ilosc jedynek
		for(i=0;i=20;i++){
			if(krotka[i]=='1'){
				ilosc++;
			}
			cout<<"ilosc jedynek to"<<ilosc;
		}
	}
	getchar();
	return 0;

}
