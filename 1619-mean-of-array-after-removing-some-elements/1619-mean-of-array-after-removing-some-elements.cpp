class Solution {
public:
    double trimMean(vector<int>& arr) {
        // Step 1: Sort the array in ascending order
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        
        // Step 2: Calculate 5% of the total number of elements
        int k = n / 20; 
        
        // Step 3: Sum the remaining middle elements (from index k to n - k - 1)
        double sum = accumulate(arr.begin() + k, arr.end() - k, 0.0);
        
        // Step 4: Divide the sum by the count of remaining elements
        return sum / (n - 2 * k);
    }
};