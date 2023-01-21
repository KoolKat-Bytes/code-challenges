#include <cmath>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "RebuildInfrastructure.hpp"

using namespace std;

void RebuildInfrastructure::main(istream& is, ostream& os) {
    string line;

    while(getline(is, line)) {
        stringstream ss(line);
        long A, B, C;

        ss >> A >> B;
        vector<long> candidates;

        candidates.push_back(A * A + B * B);
        candidates.push_back(A * A - B * B);
        candidates.push_back(B * B - A * A);

        C = -1;
        for (const auto & p: candidates) {
            if (p <= 0) continue;

            double sq = sqrt(p);
            long r = sq;
            if ((sq - r) == 0) {
                C = r;
                break;
            }
        }

        os << C;
    }
}