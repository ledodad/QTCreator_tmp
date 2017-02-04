
#include<Personnage.h>

using namespace std;

Personnage::Personnage() : m_vie(100), m_mana(100), m_nomArme("Épée rouillée"), m_degatsArme(10)
{
    //Rien à mettre dans le corps du constructeur, tout a déjà été fait !
}

Personnage::Personnage(int nomArme, int degatsArme) : m_vie(100), m_mana(100),m_nomArme(nomArme), m_degatsArme(degatsArme)
{

}
Personnage(std::int vie, int mana):m_vie(vie),m_mana(mana),m_nomArme("Épée rouillée"),m_degatsArme(10)
{

}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie-=m_degatsArme;

    if (m_vie < 0) //Pour éviter d'avoir une vie négative
        {
            m_vie = 0; //On met la vie à 0 (cela veut dire mort)
        }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatsArme);
}


void Personnage::boirePotionDeVie(int quantitePotion)
    {
      m_vie+=quantitePotion;

      if (m_vie > 100)
          {
              m_vie = 100;
          }
    }

void Personnage::changerArme(string nomNouvelleArme,int degatsNouvelleArme)
{
      m_nomArme=nomNouvelleArme;
      m_degatsArme=degatsNouvelleArme;

}

    bool Personnage::estVivant()
    {
        return m_vie > 0; //Renvoie true is m_vie > 0 et false sinon.
    }
    }


