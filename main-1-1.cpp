extern int* readNumbers();
extern void printNumbers(int* array, int length);

int main() {
    int length = 10;

    int* nums = readNumbers();
    printNumbers(nums, length);
    delete[] nums;

    return 0;
}