#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include<string>

class Personnage
{
    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    Personnage(std::int vie, int mana);
public:
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(string nomNouvelleArme,int m_degatsNouvelleArme);
    bool estVivant() const;

private:
    int m_vie;
    int m_mana;
    std::string m_nomArme;
    int m_degatsArme;
};
#endif // PERSONNAGE_H
