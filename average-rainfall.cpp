#include <iostream>
using namespace std;
class Rainfall {
int cities, months;
float rain[10][12]; // max 10 cities and 12 months
public:
void input() {
cout << "Enter number of cities: ";
cin >> cities;
cout << "Enter number of months: ";
cin >> months;
for (int i = 0; i < cities; i++) {
cout << "City " << i + 1 << ":\n";
for (int j = 0; j < months; j++) {
cout << " Month " << j + 1 << " rainfall: ";
cin >> rain[i][j];
}
}
}
void display() {
cout << "\nRainfall Table:\n";
for (int i = 0; i < cities; i++) {
float sum = 0;
cout << "City " << i + 1 << ": ";
for (int j = 0; j < months; j++) {
cout << rain[i][j] << " ";
sum += rain[i][j];

}
cout << " | Avg: " << sum / months << "\n";
}
}
};
int main() {
Rainfall rf;
rf.input();
rf.display();
return 0;
}
