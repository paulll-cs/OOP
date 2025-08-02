int num_count(int array[], int n, int number){
    int count = 0;
    int i;
    if (n<1){
        return 0;
    }else {
            for (i=0;i<n;i++){
            if (array[i] == number){
                count++;
            }
        }   
    }
    return count;
}