#include "typesDef.h"


class hp {
public:
	//returns TRUE if set successfully
	bool setMaxHP(ui16 newMaxHP) {
		if (newMaxHP < 1)
			return false;

		maxHP = newMaxHP;
		
		if (currentHP > maxHP)
			currentHP = maxHP;

		return true;
	}

	ui16 getMaxHP() {
		return maxHP;
	}

	ui16 getCurrentHP() {
		return currentHP;
	}

	void takeDamage(ui16 damage) {
		if (damage > currentHP) {
			currentHP = 0;
			return;
		}

		currentHP -= damage;
	}

	void healHP(ui16 amount) {
		if (amount + currentHP > maxHP) {
			currentHP = maxHP;
			return;
		}

		currentHP += amount;
	}

	hp() { currentHP = 1; maxHP = 1; }
	hp(ui16 cHP,ui16 mHP) {
		currentHP = cHP;
		maxHP = mHP;
		if (currentHP > maxHP)
			currentHP = maxHP;
	}


private:

	ui16 currentHP;
	ui16 maxHP;
};