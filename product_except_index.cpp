vector<long long> productExceptIndex(const vector<int>& arr) {
    int size = arr.size();
    vector<long long> output(size, 1);

    long long left_product = 1;
    for (int i = 0; i < size; i++) {
        output[i] = left_product;
        left_product *= arr[i];
    }

    long long right_product = 1;
    for (int i = size - 1; i >= 0; i--) {
        output[i] *= right_product;
        right_product *= arr[i];
    }

    return output;
}

