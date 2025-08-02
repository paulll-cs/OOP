int array_sum(int array[], int n){
    int sum = 0;
    int i;
    if (n < 1){
        return 0;
    }else{
        for (i=0;i<n;i++){
            sum += array[i];
        };
    }
    return sum;
}
