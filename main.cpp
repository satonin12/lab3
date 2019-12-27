#include <iostream>

using namespace std;

int main (void){
   string hw = "Hello World and ... ";
   string name;
   cout<<"Ââåäèòå ñâîå èìÿ: ";cin>>name;
   if(typeid(name) == typeid(string)){
      cout<<hw<<name<<" 5 "<<endl;
   }else{
      cout<<"Íåïðàâèëüíîå òèï ïåðåìåííîé name";
   }
   return 0;
}