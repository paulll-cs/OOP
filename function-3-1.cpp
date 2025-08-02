bool is_fanarray(int array[], int n){
    int i;
    //guard clause 1
    if (n<1){
        return false;
    }
    //guard clause 2 (palindrome/mirror)
    for (i=0;i<n/2;i++){
        if (array[i] != array[n-1-i]){
            return false;
        }
    }
    //guard clause 3(ascending)
    for (i=1;i<n/2;i++){
        if (array[i-1]>array[i]){
            return false;
        }
    }
    return true;
}