#include <iostream>
#include "nlohmann/json.hpp"
#include <fstream>

using json = nlohmann::json;
using namespace std;

int main() {
    ifstream fin("accounts.json");
    //if (fin.is_open()) cout << "oopen!\n";
    json data = json::parse(fin);

    
    string enter_pass = "qwerty";
    bool is_entered = false;
    string pass;

    while (!is_entered) {
        cout << "Enter password: ";
        cin >> pass;
        if (enter_pass == pass) is_entered = true;
        else {
            cout << "\nIncorrect password!\n";
            system("pause");
        }
        system("cls");
    }

    

}
