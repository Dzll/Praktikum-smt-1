#include <iostream>
using namespace std;
int main()
{
    double x,t,l_per,l_seg,l4_seg,bangun;
    cout<< "Masukkan x = "; cin>>x;
    l_per=x*x;
    t=0.5*x;
    l_seg=0.5*x*t;
    l4_seg=4*l_seg;
    bangun=l_per+l4_seg;
    cout<< "Luas persegi = "<<l_per<<endl;
    cout<< "Luas 4 segitiga = "<<l4_seg<<endl;
    cout<< "Luas bangun tersebut = "<<bangun<<endl;
}
