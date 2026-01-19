#include <iostream>
#include <string>
using namespace std;

class User {
public:
    int id;
    string name;
    bool active;
    User* left;
    User* right;

    User(int id, string name) {
        this->id = id;
        this->name = name;
        active = true;
        left = NULL;
        right = NULL;
    }


};