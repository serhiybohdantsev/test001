#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A{}, B{};
    cout << "\nВведіть A: ";
    cin >> A;
    cout << "\nВведіть B: ";
    cin >> B;
    cout << "\n Істинність твердження: " << boolalpha << (a > 2 && b >= 3) << endl;
    system("pause");
    return 0;
}