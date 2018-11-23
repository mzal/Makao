#include "Mbot.h"

bool operator< (const Card& lhs, const Card& rhs) {
     if (lhs.Functional == rhs.Functional)
	  return (unsigned int)lhs.Rank < (unsigned int)rhs.Rank;
     return lhs.Funtional;
}
bool operator> (const Card& lhs, const Card& rhs) {
     return rhs < lhs;
}
bool operator<=(const Card& lhs, const Card& rhs) {
     return !(lhs > rhs);
}
bool operator>=(const Card& lhs, const Card& rhs) {
     return !(lhs < rhs);
}
bool operator==(const Card& lhs, const Card& rhs) {
     return (unsigned int)lhs.Rank == (unsigned int)rhs.Rank;
}
bool operator!=(const Card& lhs, const Card& rhs) {
     return !(lhs == rhs);
}

Mbot::Mbot() {

}

virtual std::vector<Card*> Mbot::MakeAMove(Stack* stack, std::vector<int> otherPlayersCards, std::vector<int> otherPlayersStops) {
     std::vector<Card*> toThrow;

     std::sort(this->Hand.begin(), this->Hand.end());

     toThrow.push_back(this->Hand[0]);
     int index = 1;
     while (this->Hand[index] == this->Hand[index - 1] && index < this->Hand.size()) {
	  toThrow.push_back(this->Hand[index]);
	  index++;
     }

     return toThrow;
}

Mbot::~Mbot() {

}
