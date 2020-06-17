//
//  main.cpp
//  Age is Seconds
//
//  Created by Vladimir on 17.06.2020.
//  Copyright © 2020 Vladimir. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned int age = 0;
    cout << "How old are you?: ";
    cin >> age;
    if(age > 0) {
        cout << "You have lived " << age * 60 * 60 * 24 * 365 << " seconds.\n\n";
    } else {
        cout << "Error! Wrong format!\n";
    }
    
    
    return 0;
}
