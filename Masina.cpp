#include "Masina.h"
#include <iostream>

using namespace std;

Masina::Masina()
{
}
Masina::Masina(string Marcagiven, string Culoaregiven, int Pretgiven)
{
    Marcadefault = Marcagiven;
    Culoaredefault = Culoaregiven;
    Pretdefault = Pretgiven;

}



Masina::~Masina()
{
}

void Masina::SchimbPret(int PretNou){
    Pretdefault = PretNou;
}

void Masina::Print(){

cout<<"Marca: "<<Marcadefault<<"\nCuloare: "<<Culoaredefault<<"\nPret: "<<Pretdefault<<" Dolar"<<endl;

}

string Masina::GetMarca(){

return Marcadefault;

}
