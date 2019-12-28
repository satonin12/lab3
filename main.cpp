#include <iostream>

using namespace std;

int main (void){
   string hw = "Hello World and ... ";
   string name;
   cout<<"Введите свое имя: ";cin>>name;
   if(typeid(name) == typeid(string)){
      cout<<hw<<name<<" 5 "<<endl;
      cout<<"Сдели изменения в ветке master";
   }else{
      cout<<"Неправильное тип переменной name";
   }
   return 0;
}