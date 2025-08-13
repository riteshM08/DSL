
#include <iostream>
using namespace std;

class Temp {
    int cities, days;
    float tempData[50][50];

public:
    void input() {
        cout << "Enter the number of cities: ";
        cin >> cities;
        cout << "Enter the number of days: ";
        cin >> days;

        cout << "Enter temperature data for " << cities << " cities and " << days << " days:\n";
        for (int i = 0; i < cities; i++) {
            cout << "City No " << i + 1 << ":\n";
            for (int j = 0; j < days; j++) {
                cout << "  Temperature on day " << j + 1 << ": ";
                cin >> tempData[i][j];
            }
        }
    }

    void display() {
        cout << "\nTemperature Data:\n";
        cout << "City\\Day  ";
        for (int j = 0; j < days; j++)
            cout << "Day " << j + 1 << "   ";
        cout << "Average\n";

        for (int i = 0; i < cities; i++) {
            float sum = 0;
            cout << "City " << i + 1 << "   ";
            for (int j = 0; j < days; j++) {
                cout << tempData[i][j] << "       ";
                sum += tempData[i][j];
            }
            cout << sum / days << "\n";
        }
    }
};

int main() {
    Temp td;
    td.input();
    td.display();
    return 0;
}
