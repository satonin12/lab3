#include <iostream>

using namespace std;

int main (void){
   string hw = "Hello World and ... ";
   string name;
   cout<<"Введите свое имя: ";cin>>name;
   if(typeid(name) == typeid(string)){
      cout<<hw<<name<<endl;
   }else{
      cout<<"Неправильное тип переменной name";
   }
   return 0;
}