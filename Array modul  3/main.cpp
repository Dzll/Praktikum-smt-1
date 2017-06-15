#include <iostream>
using namespace std;
int main()
{
    int jumlah;
    int nilai [100][10];
    int i,j;
    cout<< "Masukkan Banyak Siswa : "; cin>>jumlah;
    cout<< "========================================"<<endl;
    for(i=1;i<=jumlah;i++){
    cout<< "SISWA : "<<i<<endl;
    cout<< "========================================"<<endl;
    for(j=1;j<=2;j++){
    cout<< "Nilai Siswa Semester "<<j<<" = ";
    cin>>nilai[i][j];
    }
    cout<<endl;
    }
    cout<< "========================================"<<endl;
    cout<< "Siswa\tSmt 1\tSmt 2"<<endl;
    cout<< "========================================"<<endl;
    for(i=1;i<=jumlah;i++){
    cout<<i<<"\t";
    for(j=1;j<=2;j++){
    cout<<nilai[i][j]<<"\t";
    }
    cout<<endl;
    }
}
