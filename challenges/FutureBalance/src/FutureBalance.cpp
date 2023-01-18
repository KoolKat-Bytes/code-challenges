#include <iostream>
#include <limits>
#include <map>
#include <sstream>
#include <string>
#include <cmath>

#include "FutureBalance.hpp"

using namespace std;

void FutureBalance::main(istream& is, ostream& os) {
    string line;

    map<char, int> loads;
    loads.emplace (make_pair('A', 0));
    loads.emplace (make_pair('B', 0));
    loads.emplace (make_pair('C', 0));

    while (std::getline(is, line))
    {
        for (auto c = line.cbegin(); c != line.cend(); c++)
            loads.at(*c)++;
    }

    int cA = loads.at('A');
    int cB = loads.at('B');
    int cC = loads.at('C');
    if (abs(cA - cB) <= 2 && abs(cA - cC) <= 2 && abs(cB - cC) <= 2) {
        os << "YES";
    } else {
        os << "NO";
    }
}