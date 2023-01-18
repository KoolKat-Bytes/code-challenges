#include <string>
#include <iostream>

#include "FutureEnergy.hpp"

#define MONTH_COUNT 4

using namespace std;

void FutureEnergy::main(istream &is, ostream &os) {
    string line;

    while(getline(is, line)) {
        int power = stoi(line);
        for(int i = 0; i < MONTH_COUNT; i++) {
            if(power % 3 == 0)
                power /= 3;
            else if(power % 2 == 0)
                power /= 2;
            else
                power -= 1;
        }

        os << power << endl;
    }
}