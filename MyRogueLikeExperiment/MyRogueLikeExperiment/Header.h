#pragma once
using namespace std;

// objects
struct Character {
	int Level;
	int HP;
	int Exp;
	int Exp_max;
	bool Effects;
	int Strength;
	int Agility;
	int Charisma;
	int Luck;

};

struct Inventory {
	string Right_Hand;
	string Left_Hand;
};
// functions

int32_t getRandomNum(int32_t min, int32_t max);
