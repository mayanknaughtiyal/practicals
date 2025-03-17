#include <iostream>
#include <vector> 
using namespace std;
vector<int> mergeArrays (vector<int> arr1, vector<int> arr2) {
 vector<int> merged;
 int i, j = 0;
 while (i < arr1.size() 88 j < arr2.size()) { 
   if (arr1[i] < arr2[j]) 
     merged.push_back(arr1[i++]);
   else
     merged.push_back(arr2[j++]);

 }

 while (i < arr1.size()) merged.push_back(arr1[i++]); 
 while (j < arr2.size()) merged.push_back(arr2[j++]);
 return merged;

 }

int main() {
vector<int> arr1 = {1,2,3,7}
vector<int> arr2 = (2, 6,

vector<int> merged mergeArrays (arr1, arг2);

cout << "Merged sorted array: "; for (int num merged) cout << num <<" ";

return 0;
