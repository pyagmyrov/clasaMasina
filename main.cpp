#include <iostream>

using namespace std;

#include "Masina.h"
#include <fstream>
int main()
{

    Masina Masina1("Opel", "Negru", 2000);
    Masina Masina2("Mercedes", "Alb", 5000);
    Masina Masina3("BMWl", "Gri", 7000);

    Masina1.Print();
    Masina1.SchimbPret(3000);
    Masina1.Print();

    string marcaMasina1 = Masina1.GetMarca();
    string marcaMasina2 = Masina2.GetMarca();
    cout << marcaMasina1;

    ofstream agosh;
    agosh.open("DataMasina.txt");
    agosh << marcaMasina1<< " " << marcaMasina2;



    agosh.close();

    return 0;
}
