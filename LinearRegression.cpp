#include <bits/stdc++.h>
using namespace std;
int LinearSearch(vector<int> &array, int Target)
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
    vector<int> array = {1, 2, 4, 3, 6, 8, 9, 10};
    int Target = 4;
    int a = LinearSearch(array, Target);
    if (a != -1)
    {
        cout << "The Target Element is Found!!";
    }
    else
    {
        cout << "The Target Element is NOT Found!!!";
    }

    return 0;
}
