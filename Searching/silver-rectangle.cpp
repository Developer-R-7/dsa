#include <iostream>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        double width, height;
        cin >> width >> height;
        if (width / height >= 1.6 && width / height <= 1.7)
        {
            count++;
        }
        else if (height / width >= 1.6 && height / width <= 1.7)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}