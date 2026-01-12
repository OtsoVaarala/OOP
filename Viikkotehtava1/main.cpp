#include <iostream>
#include <ctime>

using namespace std;

int game(int maxNum);

int main()
{
    int guessAmount = 0;
    int maxNum = 40;
    guessAmount = game(maxNum);
    cout << "Arvauksia meni: " << guessAmount << endl;

    return 0;
}

int game(int maxNum){
    int random = 0;
    int guess = 0;
    int guessAmount = 0;

    cout << "Arvaa luku 0-" << maxNum << endl;

    //1. Arvotaan satunnainen luku.
    srand(time(NULL));
    random = rand() % maxNum;
    //2. Kysytään pelaajalta arvaus.
    while(random != guess){
    cout << "Anna luku: " << endl;
    cin >> guess;
    guessAmount ++;
    //3, 4, 5: Tarkistetaan arvaus (<, >, ==), kerrotaan tulos pelaajalle, jos arvaus on oikein lopetetaan loop.
    if (random == guess){
        cout << "Oikea arvaus!" << endl;
     }
    else if (random > guess){
        cout << "Arvaus liian pieni." << endl;
     }
    else {
        cout << "Arvaus liian suuri." << endl;
     }
    }
 return guessAmount;
}
