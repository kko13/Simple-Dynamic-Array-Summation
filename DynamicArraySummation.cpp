#include <iostream>
using namespace std;

int arraySumation(int nArray[], int size)
{
    int sum = 0;
    for (int c = 0; c < size; ++c)
    {
        sum = sum + nArray[c];
    }
    return sum;
}

int main()
{
    int sum;
    int arrSize;
    cout << "How many integers would you like to add together?" << endl;
    cin >> arrSize;
    int *iArray = new int[arrSize];
    for (int c = 0; c < arrSize; ++c)
    {
        cout << "Please enter integer #" << ++c << "..." << endl;
        --c;
        cin >> iArray[c];
    }
    sum = arraySumation(iArray, arrSize);
    cout << "The sum of the array is " << sum << endl;
    return 0;
}