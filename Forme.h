#ifndef FORME_H
#define FORME_H

#include <utility>

class Forme{
	public:
		virtual void afficher() const=0;
		virtual float obtenirPerimetre() const=0;
		virtual ~Forme(){};
		virtual void translation(float x, float y) =0;
		virtual void translation(std::pair<float, float>) =0;
		virtual Forme* dupliquer() const =0;
};

#endif
