#include <iostream>
#include <vector>
using namespace std;
int change(vector<int>&a){
    a[0]=100;
}
int main() {
  vector<int> v;
  v.push_back(5);
  v.push_back(7);
  v.push_back(9);
  v.push_back(2);

  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  // Sort the vector
  sort(v.begin(), v.end());

  // Print the sorted vector
  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  return 0;
}
