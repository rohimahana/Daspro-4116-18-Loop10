#include <iostream>

using namespace std;

int main()
{
    int i;
    int j;
    for(i = 1; i <= 7; i++){
        cout << "Looping Yang Ke-" << i << endl;
        for(int j = 1; j <= 10; j++){
            cout << "-angka " << j << "-" << endl;
        }
        cout << endl;
    }
}
