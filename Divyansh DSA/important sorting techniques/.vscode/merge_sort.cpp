#include <iostream>
#include <vector>

using namespace std;

class MergeSort {
public:
    MergeSort(vector<int>& arr) : array(arr) {}

    void sort() {
        mergeSort(0, array.size() - 1);
    }

    void display() {
        cout << "Sorted array is:\n";
        for (int i : array) {
            cout << i << " ";
        }
        cout << "\n";
    }

private:
    vector<int>& array;

    void merge(int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<int> L(n1);
        vector<int> R(n2);

        for (int i = 0; i < n1; i++)
            L[i] = array[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = array[mid + 1 + j];

        int i = 0, j = 0, k = left;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                array[k] = L[i];
                i++;
            } else {
                array[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            array[k] = L[i];
            i++;
            k++;
        }

        while (j < n2) {
            array[k] = R[j];
            j++;
            k++;
        }
    }

    void mergeSort(int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;

            mergeSort(left, mid);
            mergeSort(mid + 1, right);

            merge(left, mid, right);
        }
    }
};

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    MergeSort mergeSortObject(arr);
    mergeSortObject.sort();
    mergeSortObject.display();

    return 0;
}
