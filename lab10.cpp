#include <iostream>
using namespace std;

class Res{
public:
    string room, brek;
    //char brek;
    int tot=0,num=50;

    void type(){
        while(num!=0){
        cout<<"room types"<<endl;
        cout<<"enter your room type ";
        cin>>room;
        if (room=="d"){
            tot +=2000;
        }
        else {
            tot +=1000;
        }

        cout<<"do you want to get ";
        cin>>brek;
        if (brek=="y"){
            tot+=200;
        }
        cout<<tot;
        num--;
        cout<<num<<endl;
    }

    }

};

int main(){

    Res obj;
    obj.type();




return 0;
}
