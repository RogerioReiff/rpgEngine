#pragma once
#include "healthPoints.h"
#include "statBlock.h"

class Wizard : public healthPoints, public statBlock {

public:
	static const ui16 hpGrowth = (ui16)10u;
	static const ui16 baseStr = (ui16)1u;
	static const ui16 baseIntl = (ui16)4u;
	Wizard() : healthPoints(hpGrowth, hpGrowth), statBlock(baseStr, baseIntl) {}



private:

};