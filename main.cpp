#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double x , A , result , B;
    cout << "input number : "; cin >> x;

    A = pow(x,2) + sin((4* x) / 3); // розвязок лівої частини

    // скорочена
    if (x < -5)  { B = 1/(tan(x)); }
    if (x >= -5 && x <= 0)  { B = 4 - (pow(x, 2) / 2); }
    if (x > 0)  { B = log(pow(x, 2)) - ( (4*x)/3 ); }

    result = A + B;
    cout << "1) y = " << result << endl;

    // повна
    if( x < -5 )  { B = 1/(tan(x)); }
    else if (x > 0)  { B = log(pow(x, 2)) - ( (4*x)/3 ); }
    else  { B = 4 - (pow(x, 2) / 2 ); }

    cout << "2) y = " << result << endl;

    cin.get();
    return 0;

}
