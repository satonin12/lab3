

using namespace std;

class Time{
   int hour;
   int min;
public:
   Time();
   ~Time();
   int& operator[] (const int index);
}

int& Time:: operator[](const int index){
   if(this.min+=index >=60){
      this.hour++;
      this.min=_abracadabra_cast(this);