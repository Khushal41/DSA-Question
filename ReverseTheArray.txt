// Question : -Reverse The Array
//                Link : -https: // www.codingninjas.com/studio/problems/reverse-the-array_1262298

#include <bits/stdc++.h>
void reverseArray(vector<int> &arr, int m)
{
    // Write your code here.
    int n = arr.size();
    int i = m + 1; // start
    int j = n - 1; // end

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
