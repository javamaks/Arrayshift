#include <iostream>

using namespace std;

int main() {
  setlocale(0, "RUS");
  int k;
  const int size = 10;
  int arr[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  int a = arr[0];

  cout << endl << "На сколько элементов сдвиг? ";
  cin >> k;

  for (int i = 0; i < size; i++) {
    if (i == size - k) {
      arr[i] = a;
      break;
    }

    arr[i] = arr[i + k];
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}
