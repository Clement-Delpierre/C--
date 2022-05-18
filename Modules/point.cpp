#include <iostream>
#include <cmath>
#include <iomanip>

//using namespace std; // intégré directement pour ne pas alourdir
//using std::std::cout, std::std::endl;

class point
{
    float _x;
    float _y;
    float _rho;
    float _theta;
    point();
    point(float x);
    point (float x, float y);
    ~point();
    void coordPolaires();
    void coordCartesiennes();
    void init();
    void init(float x);
    void init(float x, float y);
    void affiche();
    void afficheCoordPolaires();
    void deplace(float x, float y);
    void homothetie(float x);
    void rotation(float x);
};

point::point()
{
    _x = _y = _rho = _theta = 0;
    std::cout << "constrution du point" << std::endl;    
}

point::point(float x)
{
    _x = _y = x;
    coordPolaires();
    std::cout << "constrution du point" << std::endl;  
}

point::point(float x, float y)
{
    _x = x;
    _y = y;
    coordPolaires();
    std::cout << "constrution du point" << std::endl;  
}

point::~point()
{
    std::cout << "destruction du point" << std::endl;  
}

void point::coordPolaires()
{
    _rho = sqrt(_x * _x + _y * _y);
    _theta = atan2(_y, _x);
}

void point::coordCartesiennes()
{
    _x = _rho * cos(_theta);
    _y = _rho * sin(_theta);
}

void point::init()
{
    _x = _y = 0;
}

void point::init(float x)
{
    _x = _y = x;
    coordPolaires();
}

void point::init(float x, float y)
{
    _x = x;
    _y = y;
    coordPolaires();
}

void point::affiche()
{
    std::cout << "x vaut " << std::setprecision(3) << _x << " et y vaut " << std::setprecision(3) << _y << std::endl;
}

void point::afficheCoordPolaires()
{
    // radian vers cartésien : multiplier par 180° / Pi
    std::cout << "rho vaut " << std::setprecision(3) << _rho << " et theta vaut " << _theta * 180 / M_PI << " degres." << std::endl;
}

void point::deplace(float x, float y)
{
    _x += x;
    _y += y;
    coordPolaires();
}

void point::homothetie(float x)
{
    _x *= x;
    _y *= x;
    coordPolaires();
}

void point::rotation(float x)
{
    _theta += (x * M_PI / 180);
    coordCartesiennes();
}

