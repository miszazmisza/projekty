#include <iostream>
#include <bitset>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int red=0x00ff0000;
	int green = 0x0000ff00;
	int blue = 0x00000ff;
	int kolor = 0x12345678;
	cout<<hex<<red<<'\n'<<green<<'\n'<<blue<<'\n';
	
	cout<<"jego red: "<<(kolor & red)<<"\n";
	cout<<"jego green: "<<(kolor & green)<<"\n";
	cout<<"jego blue: "<<(kolor & blue)<<"\n";
	return 0;
}
