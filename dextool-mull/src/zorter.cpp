class Zorter {
public:
    static void sort(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            bool swapped = false;

            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Implementing swap logic
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }

            if (!swapped)
                break;
        }
    }
};
