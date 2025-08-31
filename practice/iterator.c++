#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> cars{1,4,2,7,4,9,56,33,4,2};

  vector<int>::iterator it;

  for (it = cars.begin(); it != cars.end(); ++it) {
  // for (it = cars.end()-1; it != cars.begin(); it--) {
    cout << *it << " ";
  }

  return 0;
}
