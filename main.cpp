
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
 int liczbaRekordow = 0;
 
 
 ifstream file; //plik wejsciowy
 ifstream file1;
 ifstream file2;
 ofstream fileOut; //plik wynikowy do zapisu
 char* endptr; // to jest wskaźnik na miejsce, gdzie przy konwersji z systemu czworkowego wystąpi błąd - nieużywana zmienna
 long liczbap,liczbapo,liczbapop,rekord1,rekord2,rekord3; //liczba dziesietna, minimum z pliku
 string liczba1,liczba2,liczba3,liczba4,liczba5,liczba6,liczbal,liczball,liczballl, max, max2,max3; //dwie liczby w systemie czworkowym wczytujemy jako "string" bo mogą być dłuższe od long long
 file.open("dane_systemy1.txt");
 file1.open("dane_systemy2.txt");
 file2.open("dane_systemy3.txt"); //otworz plik liczb
 fileOut.open("wyjscie.txt"); //otworz plik do wynikow
 bool pierwszy = true;  //do algorytmu MINIMUM - zakładamy, że pierwsza liczba jest najmniejsza z dotychczas przeczytanych
 
 if(file.good())  //sprawdzenie czy plik istnieje
     while(!file.eof())        //petla wykonuje sie az program dojedzie do konca pliku
     {
               file>>liczba1 >> liczba2;   // wczyta dwie liczby z pliku (w wierszu) do 2 stringów
               liczbal =  strtol(liczba2.c_str(), &endptr, 4);
               file1>>liczba3 >> liczba4; 
               liczball =  strtol(liczba4.c_str(), &endptr, 4);
               file2>>liczba5 >> liczba6;  
               liczballl =  strtol(liczba6.c_str(), &endptr, 4);
               //^konwersja z systemu czworkowego do dziesietnego, string (C++) trzeba zamienić na char * (C) funkcja .c_str()
               //zmienna endptr wskazuje na znak w stringu, który nie pasuje do systemu czwórkowego - tu niesprawdzone, bo zakładamy, że dane są poprawne!
               if(pierwszy) //jeśli to pierwsza liczba z pliku - będzie nowym MINIMUM
               {
                            max = liczbap;
                            max2 = liczbapo;
                            max3 = liczbapop;
                            pierwszy = false;
               }
               else{ //jeśli to kolejna liczba z pliku...
                  bool rekord1 = false;
				  if(liczbal > max){//... i jest mniejsza od dotychczasowego minimum...
                       max = liczbap; // ... to nadpisz min
                	   rekord1 = true;
                	}
                	bool rekord2 = false;
					if(liczball >max2){//... i jest mniejsza od dotychczasowego minimum...
                       max2 = liczbapo; // ... to nadpisz min
                	   rekord2 = true;
                	}
                	bool rekord3 = false;
                	if(liczballl > max3){//... i jest mniejsza od dotychczasowego minimum...
                       max3 = liczbapop; // ... to nadpisz min
                	   rekord3 = true;
                	}
                	if(rekord1|rekord2|rekord3){
                	liczbaRekordow++;
                	}
				}
     }//eof() koniec pliku
 fileOut<<liczbaRekordow<<endl; //zapisanie najmniejszej liczby z pliku czworkowego do pliku wynikowego
 file.close();
 file1.close();
 file2.close();
 fileOut.close();
 return 0;
}
