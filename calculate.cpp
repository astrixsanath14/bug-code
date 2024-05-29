#include<iostream>
#inlcude<add>
using namespace std;

void readTwoNumbers(int &a, int &b){
  cin>>a>>b;
}

int main(){
  while(true){
    cout<<"1. Add two numbers"<<"\n";
    cout<<"2. Suubrtact two numbers"<<"\n";
    cout<<"3. Divide two numbers"<<"\n";
    cout<<"4. Multiply two numbers"<<"\n";
    cout<<"5. Exit"<<"\n";
    
    int choice;
    cout<<"Enter your choice"<<"\n";
    cin>>choice;
    
    int a, b, result;
    
    switch (choice){
      case 1:
        readTwoNumbers(a, b);
        result = add(a, b);
      break;
      case 5:
      default:
      return 0;
    }
    cout<<"The result is: " << result;
  }
  return 0;
}
