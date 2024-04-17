#pragma once
#include "healthPoints.h"
#include "statBlock.h"

class Warrior : public healthPoints, public statBlock {
	
public:
	static const ui16 hpGrowth = (ui16)20u;
	static const ui16 baseStr = (ui16)4u;
	static const ui16 baseIntl = (ui16)1u;
	Warrior() : healthPoints(hpGrowth, hpGrowth),  statBlock(baseStr, baseIntl){}



private:

};