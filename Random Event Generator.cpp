#include<iostream>
#include<ctime>

using namespace std;

int main(){
    srand(time(NULL));
    int num;
    int randNum =(rand() % 20) + 1 ;

    cout<<"Enter your lottery number:";
    cin>>num;

    switch (randNum)
    {
    case 1:
        cout<<"You won a CAR!!"<<endl;
        break;
    case 2:
        cout<<"You won a BIKE!"<<endl;
        break;
    case 3:
        cout<<"You won a FRIDGE!!"<<endl;
        break;
    case 4:
        cout<<"You won a TV!!"<<endl;
        break;
    case 5:
        cout<<"You won a IPHONE!!"<<endl;
    default:
        cout<<"You won NOTHING,better luck next time"<<endl;
        break;
    }
}