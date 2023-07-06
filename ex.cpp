#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Type number: ";
    cin >> n;
    for (int i; i = n; i++) {
        if (n > 0 || n < 0) {
            cout << "you wright wrong number, try again: ";
            cin >> n;
        } else if (n == 0) {
            cout << "You wright 0";
            break;
        }
    }


    return 0;
}
