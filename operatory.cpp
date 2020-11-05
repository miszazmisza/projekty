#include <iostream>
#include <bitset>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a,b;
int main(int argc, char** argv) {
	cout<<"podaj liczbe a"<<endl;
	cin>>a;
	cout<<"podaj liczbe b"<<endl;
	cin>>b;
	system("cls");
	cout<<"a czyli liczba "<<a<<" ,w binarnym to: "<<bitset<8>(a).to_string();
	cout<<"\nb czyli liczba "<<b<<" ,w binarnym to: "<<bitset<8>(b).to_string();
	
	cout<<"\na|b to: "<<bitset<8>(a|b).to_string()<<endl;
	cout<<"a^b to: "<<bitset<8>(a^b).to_string()<<endl;
	cout<<"a&b to: "<<bitset<8>(a&b).to_string()<<endl;
	
	return 0;
}
