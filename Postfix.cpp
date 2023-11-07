#include<iostream>
#include<string>
using namespace std;

#define MAX 50
int stack[MAX];
int TOP = -1;

void PUSH(int num){
    if(TOP==MAX-1){
        cout<<"\nOVERFLOW";
    }else{
    TOP++;
    stack[TOP]=num; 
    }
}

void POP(){
    if(TOP==-1){
        cout<<"\nUNDERFLOW";
    }else{
        TOP--;
    }
}

int postfixToInfix(string postfix){
    int oprator1,oprator2,result;
    for(int i=0;i<postfix.length();i++){
        if(postfix[i]=='+' || postfix[i]=='-' || postfix[i]=='/' || postfix[i]=='*'){
            oprator1 = stack[TOP];
            POP();
            oprator2 = stack[TOP];
            POP();
            switch (postfix[i])
            {
            case '+':{
                result=oprator2+oprator1;
                PUSH(result);
            }break;
            case '-':{
                result=oprator2-oprator1;
                PUSH(result);
            }break;
            case '/':{
                result=oprator2/oprator1;
                PUSH(result);
            }break;
            case '*':{
                result=oprator2*oprator1;
                PUSH(result);
            }break;
            
            default:{
                cout<<"\nINVALID OPRATOR DETACTED!!!";
            }
                break;
            }
        }else{
            PUSH(postfix[i]-'0');
        }
    }
    return stack[TOP];
}

int main(){
string postfix;
cout<<"Enter the postfix expression: ";
cin>>postfix;
int result=postfixToInfix(postfix);
cout<<"\nRESULT: "<<result;
    return 0;
}