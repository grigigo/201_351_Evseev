#include <iostream>
#include "nlohmann/json.hpp"
#include <fstream>

using json = nlohmann::json;
using namespace std;

int main() {
    json accounts = {
        {"id", 1},
        {"login", "user"},
        {"password", "qwerty"}
    };

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

    bool is_main_threat = true;
    int num;
    while (is_main_threat) {
        bool is_found = false;
        cout << "\nEnter account number: ";
        cin >> num;
        cout << "\nLogin - " << accounts["login"] << endl;
        cout << "Password - " << accounts["password"] << endl;

        system("pause");
        system("cls");
    }

}
