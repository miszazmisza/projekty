#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream wszystko;
    wszystko.open("dane_ulamki.txt");
    fstream wyn;
    wyn.open("wyniki.txt",ios::out);
    int licznik[1000];
    int mian[1000];
    int minimum=10000;
    int min_mian=100000;
    int min_licz=100000;
    for(int i=0;i<1000;i++)
        wszystko>>licznik[i]>>mian[i];
    wszystko.close();

    for (int i=0;i<1000;i++)
    {
        float iloraz=float(licznik[i])/float(mian[i]);
        if(iloraz==minimum)
        {
            if(mian[i]<min_mian)
                {
                    minimum=iloraz;
                    min_mian=mian[i];
                    min_licz=licznik[i];
                }
        }
        else if(iloraz<minimum)
        {
                minimum=iloraz;
                min_mian=mian[i];
                min_licz=licznik[i];
        }
    }
    wyn<<"a) "<<min_licz<<" "<<min_mian<<endl;
    wyn.close();
    return 0;
}
