#include <iostream>
#include <vector>

using namespace std;

void QuickSort(vector<int> &array, int left, int right) {
    int i = left;
    int j = right;

    int temporal;
    int pivote = array[(left + right) / 2];

    while (i <= j) {

        while (array[i] < pivote) {
            i++;
        }

        while (array[j] > pivote) {
            j--;
        }

        if (i <= j) {
            temporal = array[i];

            array[i] = array[j];
            array[j] = temporal;

            i++;
            j--;
        }
    }

    if (left < j) {
        QuickSort(array, left, j);
    }
    if (i < right) {
        QuickSort(array, i, right);
    }

}


int main() {
    vector<int> array = {10, 9, 0, 1, 4, 2, 7, 8, 15, 3, 6, 5, 1, 11, 13, 9};

    QuickSort(array, 0, array.size() - 1);

    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }

    return 0;
}