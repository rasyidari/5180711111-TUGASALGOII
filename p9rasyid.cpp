#include <iostream>
using namespace::std;


 float sisapembagian (int angka1,int pembagi)
{
    cout<<"------ MODULUS ------";
    cout<<"\nMasukkan Angka = ";
    cin>>angka1;
    cout<<"\nPembagian = ";
    cin>>pembagi;
    return angka1%pembagi;
}

main ()
{
    int angka1,pembagi;
    cout<<"Jadi Sisa Pembagiannya adalah = "<<sisapembagian(angka1,pembagi);
}
