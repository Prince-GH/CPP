#include<iostream>
#include<string>
using namespace std;

string NachMeriJan(){
    string Nach="Jb tak hai jan tb tk nachungi 💃";
    return Nach;
}

int main(){
    string SuruKaro=NachMeriJan();
    string PaoMaiDard="Nahi ho raha hai";
    while(PaoMaiDard!="Hone laga"){
        for(int NachteJao=0;NachteJao<=SuruKaro.length();NachteJao++){
            cout<<SuruKaro[NachteJao];
        }
        PaoMaiDard="Hone laga";
    }
    return 0;
}