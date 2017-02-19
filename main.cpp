#include<iostream>
#include<Personnage.h>

using namespace std;

int main()
{
    Personnage david, goliath("Épée aiguisée", 20);

    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);
            
    cout<<"David"<<endl;
    david.afficherEtat();
    cout<<"\nGoliath"<<endl;
    goliath.afficherEtat();

    return 0;
}
