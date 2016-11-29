#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
  // Number of variable-length lists
  int n;
  cin >> n;

  int** variableArrays = new int*[n];

  // Number of queries
  int q;
  cin >> q;

  for (int i=0; i<n; i++) {
    // Number of items in dynamic array
    int k;
    cin >> k;
    variableArrays[i] = new int[k];
    for (int j=0; j<k; j++) {
      int x;
      cin >> x;
      variableArrays[i][j] = x;
    }
  }

  for (int j=0; j<q; j++) {
    int topIndex;
    cin >> topIndex;

    int innerIndex;
    cin >> innerIndex;
  }
  return 0;
}

