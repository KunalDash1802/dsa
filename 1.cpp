#include<iostream>
using namespace std;

class A{

  public:
   virtual void display(){
       cout<<"BASE CLASS "<<endl;
    }

};
class B : public A{

 public:
     void display(){

        cout<<"DERIVED CLASS"<<endl;
     }
};

int main(){

  A a1,*p;
  p=&a1;

  p->display();

  B b1;
  p=&b1;

  p->display();


}
