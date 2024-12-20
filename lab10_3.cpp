#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    double sum = 0.0;
    double sum_of_squares = 0.0;
    string textline;
    ifstream source("score.txt");

    while (getline(source, textline)) {
        double number = stof(textline); // Convert string to float
        sum += number;
        sum_of_squares += number * number;
        count++;
    }

    source.close();

    double mean = sum / count;
    double variance = (sum_of_squares / count) - (mean * mean);
    double standard_deviation = sqrt(variance);

    cout << "Number of data = " << count << endl;
    cout << fixed << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << standard_deviation << endl;

    return 0;
}