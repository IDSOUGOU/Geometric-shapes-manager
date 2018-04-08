#include <iostream>
#include "Cercle.h"
#include "Polygone.h"
#include "Usine.h"

using namespace std;

main()
{
	pair <float,float>p1(2,3);
	pair <float,float>p2(8,3);
	pair <float,float>p3(6,4);
	pair <float,float>p4(2,1);
	pair <float,float>p5(9,9);
	Cercle C1(p1,1);
	C1.afficher();
	cout << "Périmetre = " << C1.obtenirPerimetre()<< endl;
	
	pair<float,float> tab[] = {p1,p2,p3,p4,p5};
	vector<pair<float,float> > v1(tab,tab+5);
	
	Polygone P1(v1);
	P1.afficher();
	cout << "Périmetre = " << P1.obtenirPerimetre()<< endl;
	
	//Méthode <float,float>
	//C1.translation(2,3);
	//P1.translation(2,3);
	//Méthode pair<float,float>
	C1.translation(p1);
	P1.translation(p1);
	C1.afficher();
	P1.afficher();
	
	cout << " -----------------"<<endl;
	Cercle* C3 = new Cercle(p1,9);
	Cercle* C4 = new Cercle(p2,2);
	Cercle* C5 = new Cercle(p5,3);
	Polygone* P3 = new Polygone(v1);
	v1.pop_back();
	Polygone* P4 = new Polygone(v1);
	v1.pop_back();
	Polygone* P5 = new Polygone(v1);
	Usine U1;
	U1.ajouterForme("11111111",C3);
	U1.ajouterForme("22222222",C4);
	U1.ajouterForme("33333333",C5);
	U1.ajouterForme("44444444",P3);
	U1.ajouterForme("55555555",P4);
	U1.ajouterForme("66666666",P5);
	delete C3;
	delete C4;
	delete C5;
	delete P3;
	delete P4;
	delete P5;
	
	
	vector<string> vec = U1.obtenirCles();
	for (int i = 0; i != vec.size(); i++)
	{
   		std::cout << vec[i] << std::endl;
	}
	U1.retirerForme("22222222");
	cout << " -----------------"<<endl;
	vec = U1.obtenirCles();
	for (int i = 0; i != vec.size(); i++)
	{
   		std::cout << vec[i] << std::endl;
	}
	
	Forme* F1;
	
	F1 = U1.creerForme("11111111");
	F1 = U1.creerForme("22222222");
	F1 = U1.creerForme("33333333");
	F1 = U1.creerForme("44444444");
	F1 = U1.creerForme("55555555");
	F1 = U1.creerForme("66666666");
	F1 = U1.creerForme("77777777");
	return 0;
}
