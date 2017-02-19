#ifndef ARME_H
#define ARME_H

#include<iostream>
#include<string>

class Arme
{
  public:
    Arme();
    Arme(std::string nom, int degats);
    int getDegats() const;
    void changer(std::string nom, int degats);
    void afficher() const;

  private:
    std::string m_nom;
    int m_degats;
};

#endif // ARME_H
