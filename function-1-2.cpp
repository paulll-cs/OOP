int is_identity(int array[10][10]){
    int array_sum = 0;
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            if (array[i][j] != 1){
                return 0;
            }
            array_sum += array[i][j];
        }
        if (i+1 != array_sum){
            return 0;
        }
    }
    return 1;
}