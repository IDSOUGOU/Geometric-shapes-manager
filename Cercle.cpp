#include "Cercle.h"
#include <iostream>
#include <math.h>

using namespace std;

Cercle::Cercle(const std::pair<float,float>& xy, float r){
	centre=xy;rayon=r;
}

void Cercle::afficher() const {
	cout << endl << "Cercle " << this << endl;
	cout << "> Coordonnees du centre : (" << centre.first << "," << centre.second << ")" << endl;
	cout << "> Rayon : " << rayon << endl;
	cout << "> Perimetre : " << obtenirPerimetre() << endl;
}

float Cercle::obtenirPerimetre() const{
	return (float(M_PI*2*rayon));
}

void Cercle::translation(float x, float y){
		centre.first += x;
		centre.second += y;
}

void Cercle::translation(std::pair<float, float> pairxy){
		centre.first += pairxy.first;
		centre.second += pairxy.second;
}

Forme* Cercle::dupliquer() const{
	Forme* C1 = new Cercle(centre,rayon);
	return C1;
}
