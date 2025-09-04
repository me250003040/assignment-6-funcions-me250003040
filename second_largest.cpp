int secondLargest(const vector<int>& arr) {
    if (arr.size() < 2) return INT_MIN; // Not enough elements

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            second = largest;
            largest = num;
        } else if (num > second && num < largest) {
            second = num;
        }
    }

    return second;
}
