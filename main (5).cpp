/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
 char n[20];
 gets(n);
 
 int l;
 while(n[l]!='\0')
 {
     l++;
 }
 int f[10]={0};
 for(int i=0;i<l;i++)
 {
     f[n[i]-'0']++;
 }
 for(int i=0;i<l;i++)
 {
     if(f[i]!=n[i]-'0')
     {
         cout<<0;
         return 0;
     }
 }
 int count=0;
 for(int i=0;i<10;i++)
 {
     if(f[i]>0)
     {
         count+=1;
     }
 }
 
 cout<<count;
    
}
