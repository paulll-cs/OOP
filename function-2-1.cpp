#include <climits>

int min_element(int array[], int n){
    int min = INT_MAX;
    if (n<1){
        return 0;
    }else{
        for (int i = 0; i < n; i++){
            if (array[i]<min){
                min = array[i];
            }
        }
        return min;
    }   
}