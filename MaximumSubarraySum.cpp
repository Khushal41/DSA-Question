// Question : -Maximum Subarray Sum
// Link : -https: // www.codingninjas.com/studio/problems/maximum-subarray-sum_630526

long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {

        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0)
        {
            sum = 0;
        }
    }
    // To consider the sum of the empty subarray
    // uncomment the following check:

    if (maxi < 0)
        maxi = 0;
    return maxi;
}