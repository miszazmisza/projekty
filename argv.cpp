#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{
   cout<<"Program wyswietli zawartosc pliku plik.txt.\n";
   Sleep(1000);
   cout<<endl;
   string zmienna;
   fstream plik;  
   int tab[7];
   int i=0;
   plik.open("plik.txt", ios::in);  
   
   if(plik.good()) 
            while(!plik.eof())  
                  {
                   getline(plik,zmienna); 		
                   cout<<endl;
                   	if(zmienna>=2 && zmienna<=7){
                   	 	tab[i]=tab[zmienna];
						cout<<tab[i];
						i++;
				   }
                   }
                   plik.close(); 
if(i>=4){
	cout<<"ilosc parametrow";
}
cout<<endl;
system("pause");
return 0;
}
