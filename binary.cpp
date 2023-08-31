#include <iostream>
using namespace std;



int main(){
    int age;
    int low=0;
    int high=100;
    string ans1;
    string ans2;

    while(true){
        int mid=(low+high)/2;
        cout <<"Are you " << mid << "years old?(Yes or No)"<< endl;
        cin >> ans1;
        if(ans1=="No"){
            cout << "Up or Down?" << endl;
            cin >> ans2;
            if(ans2=="Up"){
                low=mid;
            }
            else{
                high=mid;
            }
        }
        else{
            cout << "You are " << mid << "years old" << endl;
            break;
        }
    }
    return 0;


}