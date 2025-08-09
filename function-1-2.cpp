int is_identity(int array[10][10]) {
    for (int i = 0; i < 10; i++) {
        int row_sum = 0;
        for (int j = 0; j < 10; j++) {
            row_sum += array[i][j];
            if (i == j && array[i][j] != 1) {
                return 0;
            }
            if (i != j && array[i][j] != 0) {
                return 0;
            }
        }
        if (row_sum != 1) {
            return 0;
        }
    }
    return 1;
}