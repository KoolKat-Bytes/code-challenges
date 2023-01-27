#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "ClimateChange.hpp"

using namespace std;

/* insert value at the right position in ascending order  */
void sortInsert(vector<int>& vals, int &val) {
    vector<int>::iterator it;

    for (it = vals.begin(); it != vals.end(); it++) {
        if (*it > val)
            break;
    }

    /* inserts value before iterator */
    vals.insert(it, val);
}

/*
 * The idea is to make a sort insertion then output the median every two items
 * have been added to the list of numbers.
 */

void ClimateChange::main(istream& is, ostream& os) {
    string line;

    while(getline(is, line)) {
        int N = stoi(line);

        getline(is, line);
        stringstream ss(line);
        vector<int> vals;

        for (int i = 0; i < N; i++) {
            int val;
            ss >> val;

            sortInsert(vals, val);

            /* output every time two additional elements have been added */
            if (0 == (i % 2)) {
                /* as we are dealing with odd number size the median will be
                 * the middle element of the list.
                 */
                int mid = vals.size() / 2;
                os << vals.at(mid);

                if (N != vals.size())
                    os << " ";
            }
        }
    }
}