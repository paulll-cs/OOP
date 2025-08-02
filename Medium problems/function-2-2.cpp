#include <climits>

int min_element(int array[], int n){
    int max = INT_MIN;
    int i;
    if (n<1){
        return 0;
    }else{
        for (int i = 0; i < n; i++){
            if (array[i]>max){
                max = array[i];
            }
        }
        return max;
    }   
}