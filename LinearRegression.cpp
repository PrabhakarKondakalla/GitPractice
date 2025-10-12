#include <bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> &array, int Target, int Left, int Right)
{
    while (Left <= Right)
    {
        int mid = Left + (Right - Left) / 2;
        if (array[mid] == Target)
        {
            return mid;
        }
        else if (array[mid] > Target)
        {
            Right = mid - 1;
        }
        else
        {
            Left = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> array = {1, 2, 3, 4, 5, 6};
    int Target = 3;
    int Left = 0;
    int Right = array.size() - 1;
    int a = BinarySearch(array, Target, Left, Right);
    if (a != -1)
    {
        cout << "The Target Element is Found!!";
    }
    else
    {
        cout << "The Target  Element is NOT Found!!";
    }
    return 0;
    
}