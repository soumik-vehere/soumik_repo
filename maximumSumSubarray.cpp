#include <bits/stdc++.h>
using namespace std;
int maximum_sum_subarray(vector<int> &arr)
{
    int res = INT32_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        int local_sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            local_sum += arr[j];
            res = max(res, local_sum);
        }
    }
    return res;
}
int main()
{
    vector<int> arr = {-2, -4};
    cout << "Maximum sum sub array " << maximum_sum_subarray(arr);
    cout << endl;
    return 0;
}