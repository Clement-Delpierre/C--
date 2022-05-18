#include <iostream>

/***

TD3

class Mystring
{ [...] }

class MyStringstat : public Mystring // fille de Mystring
{
    protected :
        int *stat;
        void fcpte();
    public :
        void f();
        Mystringstat();
        Mystringstat(const char*);
        Mystringstat(int, char);
        ~Mystringstat();
        Mystringstat(const Mystringstat&);
}

Mystringstat::Mystringstat(): Mystring() // fonction à compléter
{
    stat = new int[s];
    for (int i = 0; i < s; i++) // fcpte()
        stat[i] = 0;
}

Mystringstat::Mystringstat(cont char *p): Mystring(p)
{
    stat = new int[s];
    for(int i = 0)
}
------------
Mystringstat::Mystringstat(const Mystringstat &s) : Mystring(s)
// Gros problème : pas de la même classe : convertion du Mystringstat en Mystring
// transtypage possible seulement de l'enfant vers le parent
{
    stat = new int[s];
    for(int i = 0; i < s; i++)
        stat[i] = s.stat[i];
}

Mystringstat Mystringstat::concat(const Mystringstat &s)
{
    qqch = Mystring::concat(s); // appelle de la méthode mère
}

Mystringstat& Mystringstat::operator: (const Mystringstat &s)
{
    if (this != &s)
    {
        Mystring::operator=(s);
        // équivaut à this -> Mystring::operator=(s);
        // this -> renvoie à l 'écriture dans la partie mère du =
        // (s) renvoie à la partie mère de s
        // équivaut à : (Mystring)(*this) = (Mystring)(s)

        // 1) this -> ~Mystringstat(); delete stat; // ici la synthèse d'écriture n'est pas possible a priori
        // 2) stat = new int[s];
        //    for (int i = 0; i < s; i++)
        //      stat[i] = s.stat[i];      
    }
    return *this;
}

***/

int main()
{
    std::cout << "Hello World" << std::endl;
}
