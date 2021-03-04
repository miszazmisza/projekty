#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	char p;
	bool ii=false;
	bool qq= false;
	ifstream file;
    file.open("dane_obrazki.txt");
	file>>p;
	int t[20][20];
	if (!file.eof()){
    for (int i=0; i<20; i++)
    {
    	if (t[0][i] == t[0][i+10])
    	{
    		ii=true;
		}
    for(int q=0; q<20; q++)
    {
    	if (t[0][q] == t[0][q+10])
    	{
    		qq=true;
		}
    t[i][q] <<p;
    cout<<t[i][q]<<"   ";
    }
    cout <<endl;
    }
   if(ii&&qq==true)
   {
   	cout<<"symetryczny"<<endl;
   }
}
    getchar();
	return 0;
}
