#ifndef PIEZA_H
#define PIEZA_H

class Pieza {
public:
    
    Pieza();
    Pieza(bool , bool);
    Pieza(const Pieza& orig);
    virtual ~Pieza();
    
    bool getBando();
    void setBando(bool);
    bool isReina();
    void setToReina(bool);
    
private:
    bool esReina;
    bool bando;
};

#endif /* PIEZA_H */