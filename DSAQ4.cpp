#include <iostream>
using namespace std;

int main() {
    int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int arr[100];
  cout << "Enter elements: ";
   for (int i = 0; i < n; i++) cin >> arr[i];
   int start = 0, end = n - 1;
       while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}

