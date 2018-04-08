#include "Usine.h"
#include <iostream>
#include <math.h>

using namespace std;

Usine::~Usine(){
	map<string,Forme*>::iterator it;
	for (it=catalogue.begin(); it!=catalogue.end(); ++it)
		delete it->second;
}

bool Usine::ajouterForme(const string& str, const Forme* obj){
	catalogue[str]=obj->dupliquer();
	return 0;
}

bool Usine::retirerForme(const string& str){
	map<string,Forme*>::iterator it;
	it=catalogue.find(str);
	if (it != catalogue.end()){
		delete catalogue.find(str)->second;
		catalogue.erase(str);
		return 1;
	}
	else
		return 0;
}

Forme* Usine::creerForme(const string& str) const{
	map<string,Forme*>::const_iterator it;
	it=catalogue.find(str);
	if (it != catalogue.end())
		return it->second->dupliquer();
	else
		return NULL;
}

vector<string> Usine::obtenirCles()const{
	vector<string> vec;
	map<string,Forme*>::const_iterator it;
	for (it=catalogue.begin(); it!=catalogue.end(); ++it)
		vec.push_back(it->first);
	return vec;
}
