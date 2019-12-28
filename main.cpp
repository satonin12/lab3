#include <iostream>

using namespace std;

int main (void){
   string hw = "Hello World and ... ";
   string name;
   cout<<"Ââåäèòå ñâîå èìÿ: ";cin>>name;
   if(typeid(name) == typeid(string)){
      cout<<hw<<name<<" 5 "<<endl;
      cout<<hw<<name<<" 7 "<<endl;
      cout<<"Ñäåëè èçìåíåíèÿ â âåòêå master è çàëèëè";
   }else{
      cout<<"Íåïðàâèëüíîå òèï ïåðåìåííîé name";
   }
   cout<<"Ïðèâåò"<<endl;
   return 0;
}