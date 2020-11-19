#ifndef MASINA_H
#define MASINA_H
#include <iostream>

using namespace std;


class Masina
{
    public:
        Masina();
        Masina(string, string, int);
        ~Masina();
        void SchimbPret(int);
        void Print();
        string GetMarca();

    protected:

    private:
        string Marcadefault, Culoaredefault;
        int Pretdefault;

};

#endif // MASINA_H
