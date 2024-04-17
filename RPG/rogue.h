#pragma once
#include "healthPoints.h"
#include "statBlock.h"

class Rogue : public healthPoints, public statBlock {

public:
	static const ui16 hpGrowth = (ui16)12u;
	static const ui16 baseStr = (ui16)3u;
	static const ui16 baseIntl = (ui16)2u;
	Rogue() : healthPoints(hpGrowth, hpGrowth), statBlock(baseStr, baseIntl) {}



private:
};