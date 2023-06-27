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

    bool is_main_threat = true;
    int num;
    while (is_main_threat) {
        bool is_found = false;
        cout << "\nEnter account number: ";
        cin >> num;
        if (num == -1) break;
        for (const auto& item : data) {
            if (item["id"] == num) {
                cout << "\nLogin - " << item["login"] << endl;
                cout << "Password - " << item["password"] << endl;
                is_found = true;
            }
        }
        if (is_found == false) cout << "\n\nDidn't found account with this number!!!\n\n";
        system("pause");
        system("cls");
    }

}
