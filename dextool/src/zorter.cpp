#include <vector>
#include <algorithm>

class Zorter {
public:
    static std::vector<int> sort(const std::vector<int> &arr) {
        std::vector sorted(arr);

        const int n = sorted.size();
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;

            for (int j = 0; j < n - i - 1; j++) {
                if (sorted[j] > sorted[j + 1]) {
                    std::swap(sorted[j], sorted[j + 1]);
                    swapped = true;
                }
            }

            if (!swapped)
                break;
        }
        return sorted;
    }
};
