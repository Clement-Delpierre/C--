#include <iostream>
#include <cmath>
#include <iomanip>
#include "Modules/point.h"
#include "Modules/vecteur.h"

using std::cout, std::endl;

void testPoint()
{
    cout << "Phase 1 : point statique" << endl;
    point pt(1, 3);

    cout << "Premier affichage" << endl;
    pt.affiche();
    pt.afficheCoordPolaires();

    cout << "Deplacement" << endl;
    pt.deplace(1,20);
    pt.affiche();
    pt.afficheCoordPolaires();

    cout << "Homothetie" << endl;
    pt.homothetie(3);
    pt.affiche();
    pt.afficheCoordPolaires();

    cout << "Rotation" << endl;
    pt.rotation(5.3);
    pt.affiche();
    pt.afficheCoordPolaires();

    cout << "Initialisation" << endl;
    pt.init(8, 8);
    pt.affiche();
    pt.afficheCoordPolaires(); 

    cout << "Fin de la Phase 1" << endl;

    cout << "Phase 2 : point dynamique" << endl;

    point* pt2 = new point(1,3);

    cout << "Premier affichage" << endl;
    pt2->affiche();
    pt2->afficheCoordPolaires();

    cout << "Deplacement" << endl;
    pt2->deplace(1,20);
    pt2->affiche();
    pt2->afficheCoordPolaires();

    cout << "Homothetie" << endl;
    pt2->homothetie(3);
    pt2->affiche();
    pt2->afficheCoordPolaires();

    cout << "Rotation" << endl;
    pt2->rotation(5.3);
    pt2->affiche();
    pt2->afficheCoordPolaires();

    cout << "Initialisation" << endl;
    pt2->init(0,-5);
    pt2->affiche();
    pt2->afficheCoordPolaires(); 

    cout << "Fin de la Phase 2" << endl;

    delete(pt2);
}

void testVector()
{
    cout << "Test vecteur !" << endl;

    vecteur test(5);
    test.affiche();
}

int main()
{
    //testPoint();
    testVector();

    return 0;
}




