#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <bitset>
#include <cstdlib>

using namespace std; 

int main(int argc, char** argv) {
	int i=0;
	
	int y=0;
	
	int sum0;
	
	int obr[i][y];
	
	ifstream file;
    file.open("C:\Users\dane_obrazki.txt");
    if (!file.eof()){
    	for(i; i<=20; i++)
    	{
    		file>>obr[i][y];
    		if(obr[i][y]==0)
    		{
    			sum0++;
			}
		}
			for(y; y<=20; y++)
    	{
    		file>>obr[i][y];
    			if(obr[i][y]==0)
    		{
    			sum0++;
			}
		}
	cout<<"Liczba zer: "<<sum0;
	 
	getchar();
}
	return 0;
}
