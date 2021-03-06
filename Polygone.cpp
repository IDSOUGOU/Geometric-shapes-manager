#include "Polygone.h"
#include <iostream>
#include <math.h>

using namespace std;

Polygone::Polygone(const std::vector<std::pair<float,float> >& coord){
    xy=coord;
}

void Polygone::afficher() const {
    vector<std::pair<float,float> >::const_iterator it;
    
    cout << endl << "Polygone " << this << endl;
	cout << "> Coordonnees des " << xy.size() << " points : ";
	for(it=xy.begin();it!=xy.end();it++)
		cout << "(" << (*it).first << "," << (*it).second << ") ";
	cout << endl;
	cout << "> Perimetre : " << obtenirPerimetre() << endl;
}

float Polygone::obtenirPerimetre() const{
	float d=0;

	unsigned int i;
	for(i=0;i<xy.size()-1;i++)
		d+=sqrt((xy[i].first -xy[i+1].first) *(xy[i].first -xy[i+1].first ) +
                (xy[i].second-xy[i+1].second)*(xy[i].second-xy[i+1].second));
    
    d+=sqrt((xy[i].first -xy[0].first) *(xy[i].first -xy[0].first ) +
            (xy[i].second-xy[0].second)*(xy[i].second-xy[0].second));

    return d;
}

void Polygone::translation(float x, float y){
	for(unsigned int i=0;i<xy.size();i++){
		xy[i].first += x;
		xy[i].second += y;
	}
}

void Polygone::translation(std::pair<float, float> pairxy){
	for(unsigned int i=0;i<xy.size();i++){
		xy[i].first += pairxy.first;
		xy[i].second += pairxy.second;
	}
}

Forme* Polygone::dupliquer() const{
	Polygone* F1 = new Polygone(xy);
	return F1;
}


