// DimitriiTrater
// Created by 1 on 07.10.2022.
//

#include <iostream>

using namespace std;


double inputNumberDegree() {
    double degree;
    cout << "Enter the degree:";
    cin >> degree;
    return degree;
}
// c -> f
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// f -> c
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
// c -> k
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}
// k -> c
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// general func
double generalFunctionOfTaskOne() {
    double num_of_function;
    cout << "What do you want to do?" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cin >> num_of_function;
    if (num_of_function == 1) {
        return celsiusToFahrenheit(inputNumberDegree());
    } else if (num_of_function == 2) {
        return fahrenheitToCelsius(inputNumberDegree());
    } else if (num_of_function == 3) {
        return celsiusToKelvin(inputNumberDegree());
    } else if (num_of_function == 4) {
        return kelvinToCelsius(inputNumberDegree());
    }
    return 1;
}
