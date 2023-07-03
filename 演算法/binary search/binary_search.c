int binary_search(int *num, int numsize, int target) {
    int start = 0, end = numsize - 1;
    int mid = 0;

    while (start <= end){
        mid = (start + end) / 2;

        if (num[mid] == target) {
            return mid;
        }
        else if (num[mid] < target) {
            start = mid + 1;
        }
        else if (num[mid] > target) {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {

    int num_array[5] = {2, 3, 4 ,1 ,6};
    int index = 0;

    index = binary_search(num_array, 5, 3);
    printf("%d", num_array[index]);
    index = binary_search(num_array, 5, 6);
    printf("%d", num_array[index]);
    index = binary_search(num_array, 5, 4);
    printf("%d", num_array[index]);

    return 0;
}