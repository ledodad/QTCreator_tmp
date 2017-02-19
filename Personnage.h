#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include<iostream>
#include<Arme.h>
#include<string>

class Personnage
{
public:
    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    //Personnage(std::int vie, int mana);//From asked exercise
    ~Personnage();
    int getDegats() const;
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void afficherEtat() const;
    
private:
    int m_vie;
    int m_mana;
    Arme m_arme;
};
#endif // PERSONNAGE_H
