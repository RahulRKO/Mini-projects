#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

int n, i;
int r;
srand(time(NULL)); // Set seed for random numbers.
cout << "Enter number of dice to roll: ";
cin >> n;
for (i = 1; i <= n; i++) {
r = rand() % 6 + 1; // Get a number 1 to 6
cout << r << " ";
}

return 0;
}
