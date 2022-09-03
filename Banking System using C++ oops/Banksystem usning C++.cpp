#include<iostream>
#include <bits/stdc++.h>
//#include<conio.h>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

class bank 
{   char name[100],add[100],y;
    int balance;
public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};
void bank :: open_account()
{ 
    cout<<"Enter Full Name: ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter Address:";
    cin.ignore();
    cin.getline(add,100);
    cout<<"Type of account to open saving (s) or current (c)";
    cin>>y;
    cout<<"enter amount for deposite :: ";
    cin>>balance;
    cout<< "your account is created \n";
}
void bank :: deposite_money()
{
    int a;
    cout<<"enter how much you deposite  :: ";
    cin>>a;
    balance+=a;
    cout<<"Total Amount Deposite :: \t"<<balance;
}
void bank :: display_account()
{ 
    cout<<"your full name :: \t "<<name ;
    cout<<"your full Address :: \t "<<add ;
    cout<<"Type of account you open  :: \t "<<y ;
    cout<<"Amount deposite :: \t "<<balance;
    };
    
void bank :: withdraw_money()
{  
    float amount;
    cout<<"\n withdraw :: \t ";
    cout<<"Enter amount to withdraw :: \t ";
    cin>>amount;
    balance -=amount;
    cout<<"Total amount is left :: \t "<<balance ;
    };
    
 int main ()
 {  
     int ch,x;
     bank obj;
do{
     cout<<"1) open account \n";
     cout<<"2) deposite money \n";
     cout<<"3) withdraw money \n";
     cout<<"4) Display account \n";
     cout<<"5) exit \n";
     cout<<"select the option from above \n";
     cin>> ch;
    switch(ch)
    {
       case 1:"1) open account \n"; 
         obj.open_account();
        break;
        
       case 2:"2) deposite money \n"; 
         obj.deposite_money();
         break;
         
       case 3:"3) withdraw money \n"; 
         obj.withdraw_money();
         break;  
       case 4:"4) display money \n"; 
         obj.display_account();
         break;  
        
       case 5:
             if(ch==5)
             {
                 exit(1);
             }
        default:
        cout<< " Invalid \n";
     }
        
        cout<<"\n do you want to select next option press :: y \n";
        cout<<"if want exit press :: N ";
        cin>>x;
        if(x=='n'||x== 'N')
        exit(0);
 } while(x=='y'||x=='Y');
       
         
        
     
     return 0;
 }
    
    
