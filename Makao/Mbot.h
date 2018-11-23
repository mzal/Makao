#pragma once
#include "Player.h"

class Mbot : public Player {
public:
	Mbot();
	virtual std::vector<Card*> MakeAMove(Stack* stack, std::vector<int> otherPlayersCards, std::vector<int> otherPlayersStops);
	~Mbot();
};

