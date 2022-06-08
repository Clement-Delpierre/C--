#include <iostream>
#include <cmath>
#include <iomanip>
#include "Modules/vecteur.h"

vecteur::vecteur()
{
    std::cout << "construction du vecteur" << std::endl;  

    _nb = 0;
}

vecteur::vecteur(int nb)
{
    std::cout << "construction du vecteur" << std::endl;  

    _nb = nb;
    for (int i = 0; i < _nb; i++)
        _tab[i] = 0;
}

vecteur::vecteur(int nb, int* tab)
{
    std::cout << "construction du vecteur" << std::endl;

    nb = _nb;
    for (int i = 0; i < _nb; i++)
        _tab[i] = tab[i];
}

vecteur::~vecteur()
{
    std::cout << "destruction du vecteur" << std::endl;  
}

void vecteur::affiche()
{
    for (int i = 0; i < _nb; i++)
        std::cout << _tab[i] << std::endl;
}
