#include<iostream>
#include<math.h>
using namespace std;

void add(int a, int b)
 {
 	cout<<a<<"+"<<b<<"="<<a+b<<endl;
 }
 
void add(double a, double b)
 {
 	cout<<a<<"+"<<b<<"="<<a+b<<endl;
 } 


 
void sub(int a, int b)
{
 	cout<<a<<"-"<<b<<"="<<a-b<<endl;
 }
 void sub (double a, double b)
 {
 	cout<<a<<"-"<<b<<"="<<a-b<<endl;
 }
 
 
 void mul(int a, int b)
 {
 	cout<<a<<"*"<<b<<"="<<a*b<<endl;
 }
 void mul(double a, double b)
 {
 	cout<<a<<"*"<<b<<"="<<a*b<<endl;
 }
 
 
 void division(int a, int b)
{
 	cout<<a<<"/"<<b<<"="<<a/b<<endl;
 }
 void division (double a, double b)
 {
 	cout<<a<<"/"<<b<<"="<<a/b<<endl;
 }
 
 
 int main()
 {
 	
 	system("cls");

    
     add(2, 3);
     add(2.2, 3.3);
     cout <<endl;

    sub(2, 3);
    sub(2.2, 3.3);
    cout <<endl;

     mul(2, 3);
     mul(2.2, 3.3);
     cout <<endl;

     division(2, 3);
     division(2.2, 3.3);
     cout <<endl;


 	return 0;
 }
 
 
