#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int max) {
    maxNumber = max;
    numOfGuesses = 0;
    srand(time(NULL));
    randomNumber = rand() % maxNumber;
    cout << "KONSTRUKTORI: Peli aloitetaan. Maksimiarvoksi asetettu: " << maxNumber << endl;
}

void Game::play() {
    cout << "Arvaa luku 0-" << maxNumber << endl;

    while (randomNumber != playerGuess){
        cout << "Anna luku: " << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (randomNumber < playerGuess){
            cout << "Arvaus liian suuri." << endl;
        }

        else if (randomNumber > playerGuess){
            cout << "Arvaus liian pieni." << endl;
        }

        else {
            printGameResult();
        }
    }

}

void Game::printGameResult(){
    cout << "Oikea arvaus!" << endl;
    cout << "Arvauksia meni: " << numOfGuesses << endl;
}

Game::~Game(){
    cout << "Objekti tyhjennetty pinosta." << endl;
}
