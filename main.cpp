#include <iostream>

using namespace std;

int main (void){
   string hw = "Hello World and ... ";
   string name;
   cout<<"������� ���� ���: ";cin>>name;
   if(typeid(name) == typeid(string)){
      cout<<hw<<name<<" 5 "<<endl;
      cout<<"����� ��������� � ����� master � ������";
   }else{
      cout<<"������������ ��� ���������� name";
   }
   cout<<"������"<<endl;
   return 0;
}