#include <iostream>

using namespace std;

int main (void){
   string hw = "Hello World and ... ";
   string name;
   cout<<"������� ���� ���: ";cin>>name;
   if(typeid(name) == typeid(string)){
      cout<<hw<<name<<endl;
   }else{
      cout<<"������������ ��� ���������� name";
   }
   return 0;
}