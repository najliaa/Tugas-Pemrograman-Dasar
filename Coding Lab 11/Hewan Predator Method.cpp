#include <iostream>
#include <string>
using namespace std;

class Hewan{
public:
    void predator(){
    cout << "Hewan Ini Predator" << endl;
    }
    void taring(){
    cout << "Hewan Ini Bertaring" << endl;
    }
    void cakar(){
    cout << "Hewan Ini Memiliki Cakar" << endl;
    }
};

class Harimau: public Hewan{
public:
   void predator(){
   cout << "Hewan Ini Adalah Harimau" << endl;
    }
};

class Singa: public Hewan{
public:
   void predator(){
   cout << "Hewan Ini Adalah Singa" << endl;
    }
};

class Macan: public Hewan{
public:
   void predator(){
   cout << "Hewan Ini Adalah Macan" << endl;
    }
};

int main(){
    Harimau hrm;
// hrm.getHarimau();
   hrm.predator();
   hrm.taring();
   hrm.cakar();

   cout<<endl;

   Singa sng;
// sng.getSinga();
   sng.predator();
   sng.taring();
   sng.cakar();

   cout<<endl;

   Macan mcn;
// mcn.getMacan();
   mcn.predator();
   mcn.taring();
   mcn.cakar();

   cout<<endl;

return 0;

}