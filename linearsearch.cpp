#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of elements you wish to insert into the array: ";
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cout<<"Enter the "<<i+1<<" element: ";
    cin>>a[i];
  }
  int c;
  cout<<"Enter the number you wish to search in the array: ";
  cin>>c;
  
  for(int i=0;i<n;i++){
    if(a[i]==c){
      cout<<"Element is found. It is at position: "<<i+1;
    }
    else{
      if(i==n-1 && a[i]!=c){
        cout<<"Oops! The number you searched wasn't found.";
      }
    }
  }
}
