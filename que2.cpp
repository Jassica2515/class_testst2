
//  CU Coding-Test 01
//  Question No. 2

//  Name: Jassica Goyal
//  Group No: G8
//  Roll no. 2010990337
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //defining data type
    int i,j,x,c;

   
    cout<<"Enter no. of elements:";
    //for taking input 
    cin>>x;

    

    int set[x];
    cout<<"\nEnter the elements:";
//creating arrray
    for(i=0; i<x; i++)
    {
       cin>>set[i];
    }
    
   //operation to get output
    int flag[x]={0};         
    cout<<"\nRepeated Numbers   frequency:";
    for(i=x-1; i>=0; i--)
    {
      c=0;
      if(flag[i]!=1)       
      {
         for(j=0; j<x; j++)
         {
            if(set[i]==set[j])
            {
              c++;        
              flag[j]=1;     
            }
         }
         if(c>1)      
         {
           cout<<"\n"<<set[i]<<"                     "<<c;
         }
      }
    }
return 0;
}