#include <vector>
#include <map>
#include <algorithm>
#include <sstream>
#include <istream>
#include <ostream>

#include "SolarStormPrediction.hpp"

using namespace std;

void SolarStormPrediction::main(istream &is, ostream &os) {
    vector<string> obss;
    vector<map<char, int>> hashs;
    string line;

    while (getline(is, line)) {
        obss.push_back(line);
    }

    for (auto &obs : obss) {
        int i;
        map<char, int> hash;
        for (auto &c : obs) {
            hash.emplace(pair<char, int>(c, i));
            i++;
        }
        hashs.push_back (hash);
    }

    vector<char> traits;
    for (auto& entry : hashs[0]) {
        auto lookup = hashs[1].find(entry.first);
        if (lookup != hashs[1].end()) {
            traits.push_back(entry.first);
        }
    }

    vector<string> subss;
    for (auto &obs : obss) {
        string subs;
        copy_if(obs.begin(), obs.end(),
            back_inserter(subs),
                [traits](char c) {
                    return traits.end() != find(traits.begin(), traits.end(), c);});

        subss.push_back(subs);
    }

    stringstream ss;
    if (!subss[0].empty() && !subss[0].compare(subss[1])) {
        ss << "TEMPETE" << endl;
        ss << subss[0];
    } else {
        ss << "NORMAL";
    }
    os << ss.str() << endl;

}