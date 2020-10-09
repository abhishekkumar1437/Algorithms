#include"includes.h"
int arr[]={33,22,33,44,56,45,33,21};
int main(){
  int n=count(arr,arr+8,33);
  cout<<"There are "<<n<<" 33's in the array!";
  return 0;
}