#include <iostream>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#include "FutureVision.hpp"

using namespace std;

void FutureVision::main(istream& is, ostream& os) {
    string line;
    set <char> letters;
    map <char, char> swap;

    while(getline(is, line)) {
        string::iterator pos = line.begin();
        string::iterator last_swaped;

        for (auto& c : line) {
            if (letters.size() < 2)
                letters.emplace(c);

            if (letters.size() > 1) {
                if (swap.size() < 2) {
                    last_swaped = pos;
                    swap.emplace(make_pair(*letters.begin(), *letters.rbegin()));
                    swap.emplace(make_pair(*letters.rbegin(), *letters.begin()));
                }

                c = swap.find(c)->second;
            }
            pos++;
        }

        string::iterator it;
        for (it = line.begin(); it != last_swaped; it++)
            *it = swap.find(*it)->second;

        os << line;

        /* A straight forward solution can be written in just three lines */
        // replace(line.begin(), line.end(), *letters.cbegin(), 'a');
        // replace(line.begin(), line.end(), *letters.crbegin(), *letters.cbegin());
        // replace(line.begin(), line.end(), 'a', *letters.crbegin());

    }

}