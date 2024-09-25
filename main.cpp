#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double x , left , result , condition_result;
    cout << "input number : "; cin >> x;

    left = pow(x,2) + sin((4* x) / 3); // розвязок лівої частини

    // скорочена
    if (x < -5)  { condition_result = 1/(tan(x)); }
    if (x >= -5 && x <= 0)  { condition_result = 4 - (pow(x, 2) / 2); }
    if (x > 0)  { condition_result = log(pow(x, 2)) - ( (4*x)/3 ); }

    result = left + condition_result;
    cout << "1) y = " << result << endl;

    // повна
    if( x < -5 )  { condition_result = 1/(tan(x)); }
    else if (x > 0)  { condition_result = log(pow(x, 2)) - ( (4*x)/3 ); }
    else  { condition_result = 4 - (pow(x, 2) / 2 ); }

    cout << "2) y = " << result << endl;

    cin.get();
    return 0;

}
