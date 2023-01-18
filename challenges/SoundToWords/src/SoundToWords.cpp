#include <iostream>
#include <limits>
#include <sstream>
#include <map>
#include <string>

#include "SoundToWords.hpp"

using namespace std;

void SoundToWords::main(istream& is, ostream& os) {
    string line;

    map<int, char> mchar;

    /* boundary cases */
    mchar.emplace(pair<int, char>(0, ' '));
    mchar.emplace(pair<int, char>(9, 'w'));

    char c = 'a';
    for (int i = 1; i <= 8; i++) {
        mchar.emplace(pair<int, char>(i, c++));
        mchar.emplace(pair<int, char>(i + 10 * i, c++));
        mchar.emplace(pair<int, char>(i + 10 * i + 100 * i, c++));
        if (i == 7)
            mchar.emplace(pair<int, char>(i + 10 * i + 100 * i + 1000 * i, c++));
    }

    while (getline(is, line)) {
        stringstream ss(line);
        string coding;
        while(getline(ss, coding, ' ')) {
            int nc = stoi(coding);
            os << mchar.find(nc)->second;
        }
    }
}