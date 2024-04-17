#pragma once
#include "healthPoints.h"
#include "statBlock.h"

class Cleric : public healthPoints, public statBlock {

public:
	static const ui16 hpGrowth = (ui16)15u;
	static const ui16 baseStr = (ui16)2u;
	static const ui16 baseIntl = (ui16)3u;
	Cleric() : healthPoints(hpGrowth, hpGrowth), statBlock(baseStr, baseIntl) {}



private:

};