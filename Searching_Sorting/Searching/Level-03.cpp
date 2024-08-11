#include <iostream>
using namespace std;

int getQuotient(int divisor, int dividend) {
  int s = 0;
  int e = dividend;
  int ans = -1;
  int mid = s + (e-s)/2;

  while(s <= e) {
    
    if(mid * divisor == dividend) {
      return mid;
    }
    if(mid * divisor < dividend) {
      //ans store
      ans = mid;
      //right me jao
      s = mid+1;
    }
    else {
      //left
      e = mid - 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}
 
int searchNearlySorted(int arr[], int n, int target) {
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;

  while(s <= e) {
    if(mid-1 >= 0 &&  arr[mid-1] == target) {
      return mid-1;
    }
    if(arr[mid] == target)
      return mid;
    
    if(mid+1 < n && arr[mid+1] == target)
      return mid+1;

    if(target > arr[mid] ){
      //right
      s = mid + 2;
    }
    else {
      //left
      e = mid - 2;
    }
    mid = s + (e-s)/2;
  }
  return -1;
}

int findOddOccuringElement(int arr[], int n) {
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;

  while(s <= e) {

    //single element
    if(s == e) {
      return s;
    }

    //mid check -> even or odd
    if(mid & 1) { //mid&1 -> true -> odd number
      if(mid-1 >=0 && arr[mid-1] == arr[mid]) {
        //right me jao
        s = mid + 1;
      }
      else {
        //left me jao
        e = mid - 1;
      }
    }
    else {
      //even
      if(mid+1 < n && arr[mid] == arr[mid+1]){
        //right me jao
        s = mid + 2;
      }
      else {
        //ya toh main right part pr khada hu
        //ya toh main answer k upar khada hu
        //that's why e = mid krra hu
        // kyoki e = mid - 1; se ans lost ho skta h 
        e = mid;    
      }
    }
    mid = s + (e-s)/2;
  }
  return -1;
}












int main() {



  int arr[] = {10,10,10};
  int n = 13;

  int ansIndex = findOddOccuringElement(arr, n);

  cout << "Final Ans is: "<< arr[ansIndex] << endl; 

  








  
  return 0;
}