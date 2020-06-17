//
//  main.cpp
//  Temperature Converter
//
//  Created by Vladimir on 17.06.2020.
//  Copyright © 2020 Vladimir. All rights reserved.
//
double celsiusToFahrenheit(double degrees);
double fahrenheitToCelsius(double degrees);

#include <iostream>

int main(int argc, const char * argv[]) {
    double t;
    std::cout << "Type temperature: ";
    std::cin >> t;
    if(t) {
        std::cout << t << "°C = " << celsiusToFahrenheit(t) << "°F\n";
        std::cout << t << "°F = " << fahrenheitToCelsius(t) << "°C\n";
        
    } else {
        std::cout << "Error! Wrong format!\n";
    }
    return 0;
}

double celsiusToFahrenheit(double degrees)
{
    return degrees * 9 / 5  + 32;
}
double fahrenheitToCelsius(double degrees)
{
    
    return (degrees - 32) * 5/9;
}
