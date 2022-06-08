class point
{
protected:
    float _x;
    float _y;
    float _rho;
    float _theta;
    void coordPolaires();
    void coordCartesiennes();
public:
    point();
    point(float x);
    point (float x, float y);
    ~point();
    void init();
    void init(float x);
    void init(float x, float y);
    void affiche();
    void afficheCoordPolaires();
    void deplace(float x, float y);
    void homothetie(float x);
    void rotation(float x);
};

