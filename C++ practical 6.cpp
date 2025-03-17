
#include<iostream>
#include <vector>
using namespace std:
int binarySearchRecursive(vector <int> &arr, int left, int right, int key) {
 if(left > right) return -1;
 int mid = left+(right-left)/2 ;
 if (arr[mid]==key) return mid:
 if (arr[mid]>key) return binarySearchRecursive(arr, left, mid- 1, key); 
 return binarySearchRecursive(arr, mid+1, right, key);
}
int binarySearchIterative(vector <int>& arr, int key) {
 int left=0, right=arr.size()-1;
 while (left <=right) {
  int mid = left +(right-left)/2;
  if (arr[mid]==key)
    returnm
eturn mid: (arr(nie) key) right mid

eise left mid

return

int main()(

vector-int arr(1, 3, 5, 7, 9, 11);

Int key = 5

Recursive search

int indexliec binarySearchRecursive(arr,, arr.size(), 1, key); cout "Recursive Binary Search: (indexRec 12 "Found at index to string(indexRec): "Not found") endl;

Iterative search

int indexIter binarySearchIterative(arr, key);

cout Iterative Binary Search: (indexIter 1-12 Found at. Index to_string(indexIter): "Not found") endl;

return
