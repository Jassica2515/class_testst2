//  CU Coding-Test 01
//  Question No. 1

//  Name: Jassica Goyal
//  Group No: G8
//  Roll no. 2010990337
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //taken x as a number of digits in arr
     int x;
     cin>>x;
     //created an array
     int arr[x];
     int arr2[x];
//take an input in array
     for(int i=0;i<x;i++){
         cin>>arr[i];
     }
     //sorting an array in decending order by using sort function defined in cpp
   sort(arr, arr + x, greater<int>());
//giving output
    cout<<"Non-repeated numbers are ";
    for(int i=0;i<x;i++){
     if(arr[i-1]!=arr[i]&& arr[i]!=arr[i+1] ){
    
        cout<<arr[i]<<" ";
       
     }
  
    }
    return 0;
}
