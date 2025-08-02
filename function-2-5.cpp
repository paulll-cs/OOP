bool is_descending(int array[], int n){
    int i;
    if (n<1){
        return false;
    }else if (n>1){
        for (i=1;i<n;i++){
            if (array[i-1] > array[i]){
                continue;
            }else{
                break;
                return false;
            }
        }
        return true;
    }else{
        return true;
    }
}