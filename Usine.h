#ifndef USINE_H
#define USINE_H

#include "Forme.h"
#include <utility>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Usine{
	private:
   		map<string,Forme*> catalogue;
	public:
	~Usine();
	bool ajouterForme(const string&, const Forme*);
	bool retirerForme(const string&);
	Forme* creerForme(const string&) const;
	vector<string> obtenirCles() const;
};

#endif
