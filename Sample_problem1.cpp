#include <iostream>
#include <string>

using namespace std;

// Implement printArray here
void printArray(int *a, int n) {
  for (int i = 0; i < n; i++) {
    std::cout << a[i] << " ";
  }
}

// Implement getElement here
int getElement(int a[], int n) {
  int first_largest;
  int second_largest;
  for (int i = 0; i < n; i++) {
    if (a[i] > first_largest) {
      second_largest = first_largest;
      first_largest = a[i];
    }
    else if (a[i] > second_largest && a[i] != first_largest) {
      second_largest = a[i];
    }
  }
  return second_largest;
}
// EDIT CODE BELOW ONLY FOR TESTING (YOUR CODE WILL BE GRADED WITH DIFFERENT TESTS)

int main() {
  {
    int myarray[100] = {30, 20, 5, 10, 24};
    int n = 5;
    cout << "Contents of array : ";
    printArray(myarray, n);
    if (getElement(myarray, n) == 24)
	  cout << "PASSED" << endl;
	//else
	  //cout << "Result did not match expected answer: 24" << endl;
  }
  {
    int myarray[100] = {15, 24, 30, 10, 5};
    int n = 5;
    cout << "Contents of array : ";
    printArray(myarray, n);
    if (getElement(myarray, n) == 24)
	  cout << "PASSED" << endl;
	else
	  cout << "Result did not match expected answer: 24" << endl;
  }
  return 0;
}
