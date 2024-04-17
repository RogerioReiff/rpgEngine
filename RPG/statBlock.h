#pragma once
#include "typesDef.h"


struct statBlock {
public:
	statBlock() { 
		strength = (ui16)1u; 
		intellect = (ui16)1u; 
	}

	explicit statBlock(ui16 strn, ui16 intl) { 
		strength = strn; 
		intellect = intl; 
	}
	ui16 getStrength() { return strength; }
	ui16 getIntellect() { return intellect; }

private:
	ui16 strength;
	ui16 intellect;
};