//
//  main.cpp
//  ca7
//
//  Created by Andrea d Cazares on 9/14/24.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    // as7
    string names[3];
    cout << "Please insert 3 names:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]);
    }
    cout << "The first name is: " << names[0] << endl;
    return 0;
}
