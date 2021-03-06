#ifndef CERCLE_H
#define CERCLE_H

#include "Forme.h"
#include <utility>

class Cercle:public Forme{
	private:
        std::pair<float,float> centre;
        float rayon;
    
	public:
		Cercle(const std::pair<float,float>& xy, float r);
		void afficher() const;
		float obtenirPerimetre() const;
		void translation(float x, float y);
		void translation(std::pair<float, float>);
		Forme* dupliquer() const;
};

#endif
