double sum_even(double array[], int n){
    double sum;
    if (n<1){
        return 0.0;
    }
    for (int i=0;i<n;i+=2){
        if (i+2 > n){
            return sum;
        }
        sum += array[i];
    }
    return sum;
}