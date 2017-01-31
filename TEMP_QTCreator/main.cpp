#include <iostream>
#include <string>

using namespace std;


class Personnage
{

public:
    void recevoirDegats(int nbDegats)
    {
    m_vie=m_vie-nbDegats;
    }

    void attaquer(Personnage &cible)//Une Reference de type Personnage
    {

    }

    void boirePotionDeVie(int quantitePotion)
    {
    m_vie=m_vie+quantitePotion;

    }

    void changerArme(string nomNouvelleArme,
                     int degatsNouvelleArme)
    {
    m_degatsArme=degatsNouvelleArme;
    }

    bool estVivant()
    {

    }

private:
    int m_vie;
    int m_mana;
    string m_nomArme;
    int m_degatsArme;


}; // N'oubliez pas le point-virgule à la fin !


    int main()
    {
        Personnage david, goliath;
        //Création de 2 objets de type Personnage : david et goliath

        goliath.attaquer(david);    //goliath attaque david
        david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
        goliath.attaquer(david);    //goliath réattaque david
        david.attaquer(goliath);    //david contre-attaque... c'est assez clair non ?

        goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
        goliath.attaquer(david);


        return 0;
    }


