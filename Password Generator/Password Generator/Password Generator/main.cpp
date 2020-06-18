//
//  main.cpp
//  Password Generator
//
//  Created by Vladimir on 17.06.2020.
//  Copyright © 2020 Vladimir. All rights reserved.
//



#include <iostream>
#include <string>
using namespace std;

int randomInt(int start, int finish);
string randomPassword();





int main(int argc, const char * argv[]) {
    
    srand(time(0));

    cout << "Your new passwprd: " <<randomPassword() << "\n";
    
    return 0;
}

int randomInt(int start, int finish) {
    
    return rand() % finish + start;
}
string randomPassword() {
    char elements[55] = { '!', '"', '#', '$', '%', '&',
    '(', ')', '*', ',', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    string password = "";
    
    for (int i = 0; i <= randomInt(6, 10); i++) {
    
        password += elements[randomInt(0, 55)];
    }
    return password;
}
