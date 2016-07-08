#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Reading {
    int hour;
    double temperature;
};

int main() {

    cout << "Please, enter input file name: ";
    string iname;
    cin >> iname;
    ifstream ist {iname};
    if (!ist) {
        cout << "Error reading input file";
        return 1;
    }

    string oname;
    cout << "Please, enter output file name: ";
    cin >> oname;
    ofstream ost {oname};
    if (!ost) {
        cout << "Error reading output file";
        return 1;
    }

    vector<Reading> temps;
    int hour;
    double temperature;
    while (ist >> hour >> temperature) {
        if (hour < 0 || 23 < hour) {
            cout << "Time is incorrect";
            return 1;
        } else {
            temps.push_back(Reading{hour, temperature});
        }
    }
    for (int i = 0; i < temps.size(); ++i) {
        ost << '(' << temps[i].hour << ','
            << temps[i].temperature << ")\n";
    }

    return 0;
}
