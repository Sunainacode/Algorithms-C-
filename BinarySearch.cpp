#include<iostream>
using namespace std;
int binarysearch(int n, int a[], int d){
  int l=0,r=n-1,mid=(l+r)/2;
  while(a[mid]!=d){
    if(a[mid]>d){
      r=mid;
      mid=(l+r)/2;
    }
    else if(a[mid]<d){
      l=mid;
      mid=(l+r)/2;
    }
  }
  return mid;
}
int main(){
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  int a[n];
  cout<<"Enter elements in ascending order: ";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<"Enter the element to be searched: ";
  int d;
  cin>>d;
  cout<<binarysearch(n,a,d)+1;
}
