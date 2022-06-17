class vecteur
{
protected:
    int _tab[200];
    int _nb;
public:
    vecteur();
    vecteur(int nb);
    vecteur(int nb, int* tab);
    ~vecteur();
    void init();
    void init();
    void init(float x, float y);

    void affiche();

};