double array_mean(int array[], int n){
    int i;
    double sum;
    double avg;
    if (n<1){
        return 0.0;
    }else{
        for (i=0;i<n;i++){
            sum += array[i];
        }
        avg = sum/(sizeof(array)/sizeof(array[0]));
        return avg;
    }
}