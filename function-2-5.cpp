bool is_descending(int array[], int n) {
    if (n < 1) {
        return false;
    } else if (n == 1) {
        return true;  
    } else {
        for (int i = 1; i < n; i++) {
            if (array[i - 1] <= array[i]) {
                return false;
            }
        }
        return true;
    }
}