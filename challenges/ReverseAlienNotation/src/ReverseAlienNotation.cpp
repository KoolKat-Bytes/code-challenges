#include <iostream>
#include <sstream>
#include <string>
#include <deque>

#include "ReverseAlienNotation.hpp"

using namespace std;

inline void extract_oldest(deque<int>& dq, int& a) {
    a = dq.front();
    dq.pop_front();
}

void ReverseAlienNotation::main(istream& is, ostream& os) {
    string line;

    while (getline(is, line)) {
        stringstream ss(line);
        string word;
        deque<int> dq;

        while (getline(ss, word, ' ')) {
            int a, b;
            if (!word.compare("+")) {
                extract_oldest(dq, a);
                extract_oldest(dq, b);

                dq.push_back(a + b);
            } else if (!word.compare("*")) {
                extract_oldest(dq, a);
                extract_oldest(dq, b);

                dq.push_back(a * b);
            } else if (!word.compare("<>")) {
                extract_oldest(dq, a);
                extract_oldest(dq, b);

                dq.push_back(b);
                dq.push_back(a);
            } else if (!word.compare("-")) {
                extract_oldest(dq, a);

                dq.push_back(-a);
            } else {
                a = stoi(word);

                dq.push_back(a);
            }
        }

        os << dq.front();
    }
}