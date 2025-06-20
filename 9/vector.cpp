#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<int> intv;
    vector<int>::iterator p;

    intv.push_back(10);
    intv.push_back(11);
    intv.push_back(12);

    for (p = intv.begin(); p != intv.end(); p++) {
        cout << *p << " ";
    }
    cout << "\n";

    intv.push_back(13);
    intv.push_back(14);
    intv.push_back(15);

    for (int i = 0; i < intv.size(); i++) {
        cout << intv[i] << " ";
    }
    cout << "\n";

    return 0;
}
