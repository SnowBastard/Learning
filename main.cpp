#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {

    int value = 8;
    int $ref = value;
    cin >> $ref;
    cout << value << "-" << $ref << endl;



    int value = 8;
    int  *ptrvalue = &value;
    int **ptr_ptrvalue = &ptrvalue;
    cout << value << endl;

    const float pi = 3.14;
    cout << pi << endl;
    int arr[3] [2] = {{23,34},{1,2},{5,7}};
    for (int i= 0; i < 3; i++)
        for (int j =0; j < 2; j++) {
            cout << " " << arr [i][j];
        }
    for  (int i = 0; i < 3; i++)
        cin >> arr [i];
    for (int i = 0; i < 3; i++)
        cout << "" << arr {i};



    int counter;
    for (int counter = 10; counter < 0; counter--) {
        cout << " " << counter;
    }
    int i;
    while (i < 20) {
        cout << "" << i;
        i/=3;
    }
    int i = 0;
    do {
        cout << "" << i;
        i++;
    } while (i < 0)

    cin.get();
    return 0;
}
