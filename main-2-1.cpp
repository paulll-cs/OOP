extern void hexDigits(int* array, int length);


int main() {
    int arr[] = {11, 12, 3, 4, 15, 6, 7, 8, 9, 10};
    int length = sizeof(arr) / sizeof(arr[0]);

    hexDigits(arr, length);

    return 0;
}