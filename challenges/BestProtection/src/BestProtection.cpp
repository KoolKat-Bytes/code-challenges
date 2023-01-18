#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <algorithm>

#include "BestProtection.hpp"

using namespace std;

int getControlCount(map<int, set<int> > ctrlMap, int id) {
    const auto& lookup = ctrlMap.find(id);

    /* Housing */
    if (lookup == ctrlMap.end())
        return 1;

    /* Control */
    int count = 0;
    for (const auto& s_id : lookup->second)
        count += getControlCount(ctrlMap, s_id);

    return count;
}


static void is_getPair(istream& is, int& a, int& b) {
    string line;

    getline(is, line);

    stringstream ss(line);

    ss >> a >> b;
}

void BestProtection::main(istream& is, ostream& os) {
    int N, V;
    is_getPair(is, N, V);

    map<int, set<int> > ctrlMap;

    for (int i = 0; i < N; i++) {
        int a, b;
        is_getPair(is, a, b);

        map<int, set<int>>::iterator it = ctrlMap.find(a);
        if (it != ctrlMap.end()) {
            (*it).second.emplace(b);
        } else {
            set<int> s_ids({b});
            ctrlMap.emplace(pair<int,set<int>>(a, s_ids));
        }
    }

    using elem_type = map<int, set<int> >::value_type;
    auto m = max_element(ctrlMap.begin(), ctrlMap.end(),
        [ctrlMap](const elem_type& lhs, const elem_type& rhs) {
            return getControlCount(ctrlMap, lhs.first) < getControlCount(ctrlMap, rhs.first);});

    os << m->first << endl;
}