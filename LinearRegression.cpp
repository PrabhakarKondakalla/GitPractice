#include <bits/stdc++.h>
using namespace std;
int LinearRegression(vector<int> &array, int Target)
{
    int n = array.size();
    for (size_t i = 0; i < n; i++)
    {
        if (array[i] == Target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> array = {1, 4, 2, 5, 7, 9};
    int Target = 4;
    int A = LinearRegression(array, Target);
    if (A != -1)
    {
        cout << "The Target Element is Found!!";
    }
    else
    {
        cout << "The Target Element is NOT Found!!";
    }
    return 0;
}