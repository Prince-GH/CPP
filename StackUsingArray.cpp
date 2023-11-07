#include<iostream>

using namespace std;

#define MAX 50
int stack[MAX];
int TOP=-1;

void PUSH(){
    if(TOP==MAX-1){
        cout<<"\nOVERFLOW!";
    }else if(TOP==-1){
        cout<<"\nSTACK IS NOT CREATED YET!";
    }else{
        TOP++;
        cout<<"Enter value: ";
        cin>>stack[TOP];
    }
}

void POP(){
    if(TOP==-1){
        cout<<"\nUNDERFLOW";
    }else{
        TOP--;
    }
}

void CreateStack(){
    if(TOP==MAX-1 || TOP>=0){
        cout<<"\nStack is alrady created!!";
    }else{
        int num;
        cout<<"\nEnter No of Value you want to add: ";
        cin>>num;
        for(int i=1;i<=num;i++){
            TOP++;
            cout<<"\nEnter value: ";
            cin>>stack[TOP];
        }
    }
}

void DISPLAY(){
    int i=TOP;
    for(i;i>=0;i--){
        cout<<"\n"<<stack[i];
        if(i==TOP){
            cout<<"-->TOP";
        }
    }
}

int main(){system("cls");



    int c;

    do
    {
        cout<<"\n1.POP     2.PUSH     3.CREATE     4.DISPLAY     5.EXIT\n: ";
        cin>>c;
        cout<<"\n---------------------------------------------------------------";
        
        switch (c)
        {
        case 1:{system("cls");
            POP();
            DISPLAY();
        }break;
        case 2:{system("cls");
            PUSH();
          
            DISPLAY();
        }break;
        case 3:{system("cls");
            CreateStack();
        }break;
        case 4:{system("cls");
            DISPLAY();
        }break;
        case 5:{system("cls");
            cout<<"\nEXIT!";
        }break;
        default:{system("cls");
            cout<<"\nINVALID!";
        }
            break;
        }
    } while (c!=5);
    
    return 0;
}