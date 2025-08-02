double weighted_average(int array[], int n){
    int unique_n[50]; // can only handle 50 unique elements because i am lazy
    int unique_count=0;
    bool unique = false;
    double w_average = 0;
    double local_count;

    for (int i=0;i<n;i++){
        unique=true;
        for(int j=0;j<unique_count;j++){
            if (array[i] == unique_n[j]){
                unique=false;
                break;
            }
        }
        if (unique==true){
            unique_n[unique_count] = array[i];
            unique_count++;
        }
    }

    if (unique_count==1){
        return unique_n[0];
    }

    for (int i=0;i<unique_count;i++){
        local_count = 0.0;
        for (int j=0;j<n;j++){
            if (unique_n[i]== array[j]){
                local_count++;
            }
        }
        w_average += unique_n[i]*local_count/n;
    }
    return w_average;
}

