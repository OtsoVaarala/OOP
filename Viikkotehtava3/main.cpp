#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef Chef("Jari");
    Chef.makeSalad(33);
    Chef.makeSoup(25);
    ItalianChef ItalianChef("Giordano");
    ItalianChef.askSecret("pizza", 73, 66);

    return 0;
}
