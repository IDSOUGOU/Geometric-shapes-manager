#ifndef POLYGONE_H
#define POLYGONE_H

#include "Forme.h"
#include <vector>
#include <utility>

class Polygone:public Forme{
	private:
        std::vector<std::pair<float,float> > xy;

	public:
		Polygone(const std::vector<std::pair<float,float> >& coord);
		void afficher() const;
		float obtenirPerimetre() const;
		void translation(float x, float y);
		void translation(std::pair<float, float>);
		Forme* dupliquer() const;
};

#endif
