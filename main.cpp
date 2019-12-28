#include <iostream>

using namespace std;

int main (void){
   string hw = "Hello World and ... ";
   string name;
   cout<<"Введите свое имя: ";cin>>name;
   if(typeid(name) == typeid(string)){
      cout<<hw<<name<<" 5 "<<endl;
      cout<<hw<<name<<" 12 "<<endl;
      cout<<"Сдели изменения в ветке master и залили";
   }else{
      cout<<"Неправильное тип переменной name";
   }
   return 0;
}