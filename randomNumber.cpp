#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess the number 1-100" << endl;

    do {
        cout << "Enter guess: ";
        cin >> guess;

        if (guess > secret) {
            cout << "Too high" << endl;
        }
        else if (guess < secret) {
            cout << "Too low" << endl;
        }
        else {
            cout << "Correct" << endl;
        }

    } while (guess != secret);

    return 0;
}
