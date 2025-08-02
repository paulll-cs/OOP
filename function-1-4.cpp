int sum_of_two_arrays(int array1[], int array2[], int n) {
    if (n < 1) {
        return 0;
    }

    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += array1[i] + array2[i];
    }

    return total;
}