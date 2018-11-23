CXX = g++
CXXFLAGS = -Wall -g

all: Makao

Makao: Makao.o Deck.o Card.o Stack.o Validity.o Game.o Player.o Ace.o King.o Valet.o Four.o Three.o Two.o
	$(CXX) $(CXXFLAGS) -o Makao Makao.o Deck.o Card.o Stack.o Validity.o Game.o Player.o Ace.o King.o Valet.o Four.o Three.o Two.o

Makao.o: Makao.cpp Deck.h Stack.h Cards.h Game.h Player.h Card.h FunctionalCards.h Ace.h King.h Valet.h Four.h Three.h Two.h
	$(CXX) $(CXXFLAGS) -c Makao.cpp
Deck.o: Deck.h Card.h Cards.h FunctionalCards.h Ace.h King.h Valet.h Four.h Three.h Two.h
Card.o: Card.h Cards.h
Stack.o: Stack.h Card.h Cards.h Validity.h
Validity.o: Validity.h Card.h Cards.h
Game.o: Game.h Stack.h Card.h Cards.h Validity.h Deck.h Card.h Cards.h FunctionalCards.h Ace.h King.h Valet.h Four.h Three.h Two.h Player.h
Player.o: Player.h Validity.h Card.h Cards.h Stack.h Deck.h FunctionalCards.h Ace.h King.h Valet.h Four.h Three.h Two.h
Ace.o: Ace.h Card.h Cards.h
King.o: King.h Card.h Cards.h
Valet.o: Valet.h Card.h Cards.h
Four.o: Four.h Card.h Cards.h
Three.o: Three.h Card.h Cards.h
Two.o: Two.h Card.h Cards.h

clean:
	rm *.o
