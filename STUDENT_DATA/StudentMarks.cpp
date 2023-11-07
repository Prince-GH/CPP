#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct marks{
    int Cpp;
    int DSA;
    int Networking;
};
struct student{
    int ID;
    string name;
    marks Marks;
    float  total;
    float Persentage;
    student*next=NULL;
};

student *StudentList(int NOS){
    student*First=NULL;
    student*Last=NULL;
    for(int i=1;i<=NOS;i++){
        student*newStudent=new student();
        system("cls");
        cout<<"\n----------------ENTER STUDENT DETAILS "<<i<<"------------------\n";
        cout<<"ID: ";
        cin>>newStudent->ID;
        cout<<"Name: ";
        cin>>newStudent->name;
        cout<<"----------------------ENTER MARKS-------------------------\n";
        cout<<"C++: ";
        cin>>newStudent->Marks.Cpp;
        cout<<"DSA: ";
        cin>>newStudent->Marks.DSA;
        cout<<"Networking: ";
        cin>>newStudent->Marks.Networking;
        newStudent->total=newStudent->Marks.Cpp + newStudent->Marks.DSA + newStudent->Marks.Networking;
        float persentage= ceilf((newStudent->total)/300.0*100.0);
        newStudent->Persentage=persentage;
        newStudent->next=NULL;
        cout<<"\n---------------------------------------------------------\n";

        if(First==NULL){
            First=newStudent;
            Last=newStudent;
        }else{
            Last->next=newStudent;
            Last=newStudent;
        }
    }
    return First;
}

void StudentDatabase(student*first){
    cout<<"-------------------------STUDENT DATABASE---------------------------";
    cout<<"\n\nID\tName\tC++\tDSA\tNetworking\tTotal\tPersentage\n";
    while(first!=NULL){
    cout<<"\n"<<first->ID<<"\t"<<first->name<<"\t"<<first->Marks.Cpp<<"\t"<<first->Marks.DSA<<"\t"<<first->Marks.Networking<<"\t\t"<<first->total<<"\t"<<first->Persentage<<"%";
    first=first->next;
    }
    cout<<"\n---------------------------------------------------------------------";
}
void AddStudent(int NOS,student*first){
   
    while(first!=NULL){
    if(first->next==NULL){
        student*NewFirst=NULL;
    student*NewLast=NULL;
    for(int i=1;i<=NOS;i++){
        student*newStudent=new student();
        system("cls");
        cout<<"ID: ";
        cin>>newStudent->ID;
        cout<<"Name: ";
        cin>>newStudent->name;
        cout<<"----------------------ENTER MARKS-------------------------\n";
        cout<<"C++: ";
        cin>>newStudent->Marks.Cpp;
        cout<<"DSA: ";
        cin>>newStudent->Marks.DSA;
        cout<<"Networking: ";
        cin>>newStudent->Marks.Networking;
        newStudent->total=newStudent->Marks.Cpp + newStudent->Marks.DSA + newStudent->Marks.Networking;
        float persentage= ceilf((newStudent->total)/300.0*100.0);
        newStudent->Persentage=persentage;
        newStudent->next=NULL;
        cout<<"\n---------------------------------------------------------\n";
        if(NewFirst==NULL){
            NewFirst=newStudent;
            NewLast=newStudent;
        }else{
            NewLast->next=newStudent;
            NewLast=newStudent;
        }
    }

        first->next=NewFirst;
    }
    first=first->next;
    }
    }


void searchById(int id,student*first){
    cout<<"---------------------STUDENT DETAILS OF ID: "<<id<<"-----------------------";
    cout<<"\n\nID\tName\tC++\tDSA\tNetworking\tTotal\tPersentage\n";
    while(first!=NULL){
        if(first->ID==id){
         cout<<"\n"<<first->ID<<"\t"<<first->name<<"\t"<<first->Marks.Cpp<<"\t"<<first->Marks.DSA<<"\t"<<first->Marks.Networking<<"\t\t"<<first->total<<"\t"<<first->Persentage<<"%";
        }
    first=first->next;
    }
    cout<<"\n---------------------------------------------------------------------";
}

void searchByName(string Name,student*first){
    cout<<"---------------------STUDENT DETAILS OF NAME: "<<Name<<"-----------------------";
    cout<<"\n\nID\tName\tC++\tDSA\tNetworking\tTotal\tPersentage\n";
    while(first!=NULL){
        if(first->name==Name){
         cout<<"\n"<<first->ID<<"\t"<<first->name<<"\t"<<first->Marks.Cpp<<"\t"<<first->Marks.DSA<<"\t"<<first->Marks.Networking<<"\t\t"<<first->total<<"\t"<<first->Persentage<<"%";
        }
    first=first->next;
    }
    cout<<"\n---------------------------------------------------------------------";
}

void  HMC(student*first){
    student*first2=first;
    int highest=first->Marks.Cpp;
    while (first!=NULL)
    {
        if(first->Marks.Cpp>=highest){
            highest=first->Marks.Cpp;
        }
        first=first->next;
    }
    cout<<"---------------STUDENT DATA HIGHEST MARKS IN C++-----------------";
    cout<<"\n\nID\tName\tC++\n";
    while (first2!=NULL)
    {
        if(first2->Marks.Cpp==highest){
            cout<<"\n"<<first2->ID<<"\t"<<first2->name<<"\t"<<first2->Marks.Cpp;
        }
        first2=first2->next;
    }
    cout<<"\n------------------------------------------------------------";
}

void  LMC(student*first){
    student*first2=first;
    int Lowest=first->Marks.Cpp;
    while (first!=NULL)
    {
        if(first->Marks.Cpp<=Lowest){
            Lowest=first->Marks.Cpp;
        }
        first=first->next;
    }
    cout<<"---------------STUDENT DATA LOWEST MARKS IN C++-----------------";
    cout<<"\n\nID\tName\tC++\n";
    while (first2!=NULL)
    {
        if(first2->Marks.Cpp==Lowest){
            cout<<"\n"<<first2->ID<<"\t"<<first2->name<<"\t"<<first2->Marks.Cpp;
        }
        first2=first2->next;
    }
    cout<<"\n------------------------------------------------------------";
}

void  HMD(student*first){
    student*first2=first;
    int highest=first->Marks.DSA;
    while (first!=NULL)
    {
        if(first->Marks.DSA>=highest){
            highest=first->Marks.DSA;
        }
        first=first->next;
    }
    cout<<"---------------STUDENT DATA HIGHEST MARKS IN DSA-----------------";
    cout<<"\n\nID\tName\tDSA\n";
    while (first2!=NULL)
    {
        if(first2->Marks.DSA==highest){
            cout<<"\n"<<first2->ID<<"\t"<<first2->name<<"\t"<<first2->Marks.DSA;
        }
        first2=first2->next;
    }
    cout<<"\n------------------------------------------------------------";
}

void  LMD(student*first){
    student*first2=first;
    int Lowest=first->Marks.DSA;
    while (first!=NULL)
    {
        if(first->Marks.DSA<=Lowest){
            Lowest=first->Marks.DSA;
        }
        first=first->next;
    }
    cout<<"---------------STUDENT DATA LOWEST MARKS IN DSA-----------------";
    cout<<"\n\nID\tName\tDSA\n";
    while (first2!=NULL)
    {
        if(first2->Marks.DSA==Lowest){
            cout<<"\n"<<first2->ID<<"\t"<<first2->name<<"\t"<<first2->Marks.DSA;
        }
        first2=first2->next;
    }
    cout<<"\n------------------------------------------------------------";
}

void  HMN(student*first){
    student*first2=first;
    int highest=first->Marks.Networking;
    while (first!=NULL)
    {
        if(first->Marks.Networking>=highest){
            highest=first->Marks.Networking;
        }
        first=first->next;
    }
    cout<<"---------------STUDENT DATA HIGHEST MARKS IN NETWORKING-----------------";
    cout<<"\n\nID\tName\tNETWORKING\n";
    while (first2!=NULL)
    {
        if(first2->Marks.Networking==highest){
            cout<<"\n"<<first2->ID<<"\t"<<first2->name<<"\t"<<first2->Marks.Networking;
        }
        first2=first2->next;
    }
    cout<<"\n------------------------------------------------------------";
}

void  LMN(student*first){
    student*first2=first;
    int Lowest=first->Marks.Networking;
    while (first!=NULL)
    {
        if(first->Marks.Networking<=Lowest){
            Lowest=first->Marks.Networking;
        }
        first=first->next;
    }
    cout<<"---------------STUDENT DATA LOWEST MARKS IN NETWORKING-----------------";
    cout<<"\n\nID\tName\tNETWORKING\n";
    while (first2!=NULL)
    {
        if(first2->Marks.Networking==Lowest){
            cout<<"\n"<<first2->ID<<"\t"<<first2->name<<"\t"<<first2->Marks.Networking;
        }
        first2=first2->next;
    }
    cout<<"\n------------------------------------------------------------";
}

void  HM(student*first){
    student*first2=first;
    int highest=first->total;
    while (first!=NULL)
    {
        if(first->total>=highest){
            highest=first->total;
        }
        first=first->next;
    }
    cout<<"---------------STUDENT DATA OF HIGHEST MARKS-----------------";
    cout<<"\n\nID\tName\tTotal\n";
    while (first2!=NULL)
    {
        if(first2->total==highest){
            cout<<"\n"<<first2->ID<<"\t"<<first2->name<<"\t"<<first2->total;
        }
        first2=first2->next;
    }
    cout<<"\n------------------------------------------------------------";
}

void  LM(student*first){
    student*first2=first;
    int Lowest=first->total;
    while (first!=NULL)
    {
        if(first->total<=Lowest){
            Lowest=first->total;
        }
        first=first->next;
    }
    cout<<"---------------STUDENT DATA OF LOWEST MARKS-----------------";
    cout<<"\n\nID\tName\tTotal\n";
    while (first2!=NULL)
    {
        if(first2->total==Lowest){
            cout<<"\n"<<first2->ID<<"\t"<<first2->name<<"\t"<<first2->total;
        }
        first2=first2->next;
    }
    cout<<"\n------------------------------------------------------------";
}

void PS(float passingPersentage,student*first){
    cout<<"---------------PASSED STUDENT DATA-----------------";
    cout<<"\n\nID\tName\tPersentage\n";
    while (first!=NULL)
    {
        if(first->Persentage>=passingPersentage){
            cout<<"\n"<<first->ID<<"\t"<<first->name<<"\t"<<first->Persentage<<"%";
        }
        first=first->next;
    }
    cout<<"\n-------------------------------------------------";
}

void FS(float passingPersentage,student*first){
    cout<<"---------------FAILED STUDENT DATA-----------------";
    cout<<"\n\nID\tName\tPersentage\n";
    while (first!=NULL)
    {
        if(first->Persentage<passingPersentage){
            cout<<"\n"<<first->ID<<"\t"<<first->name<<"\t"<<first->Persentage<<"%";
        }
        first=first->next;
    }
    cout<<"\n-------------------------------------------------";
}

// void GS(float goodPersentage,float excellentPersentage,student*first){
//     cout<<"---------------GOOD STUDENT DATA-----------------";
//     cout<<"\n\nID\tName\tPersentage\n";
//     while (first!=NULL)
//     {
//         if(first->Persentage>=goodPersentage && first->Persentage<=excellentPersentage ){
//             cout<<"\n"<<first->ID<<"\t"<<first->name<<"\t"<<first->Persentage<<"%";
//         }
//         first=first->next;
//     }
//     cout<<"\n-------------------------------------------------";
// }

// void ES(float excellentPersentage,student*first){
//     cout<<"---------------EXCELLENT STUDENT DATA-----------------";
//     cout<<"\n\nID\tName\tPersentage\n";
//     while (first!=NULL)
//     {
//         if(first->Persentage>=excellentPersentage){
//             cout<<"\n"<<first->ID<<"\t"<<first->name<<"\t"<<first->Persentage<<"%";
//         }
//         first=first->next;
//     }
//     cout<<"\n-------------------------------------------------";
// }


int main(){
    system("cls");
    int noOfStudents;
     cout<<"Enter the no of Student: ";
    cin>>noOfStudents;
    student *First=StudentList(noOfStudents);
    system("cls");
    int choose=0;
    do{ 
        cout<<"\n1.ADD NEW STUDENT\n2.STUDENT DATABASE\n3.SEARCH\n4.EXIT\nCHOOSE: ";
        cin>>choose;
        switch (choose)
        {
        case 1:{system("cls");
            int noOfStudents;
            cout<<"Enter the no of Student: ";
            cin>>noOfStudents;
            AddStudent(noOfStudents,First);
        }
        break;
        case 2:{system("cls");
            StudentDatabase(First);
        }

        break;
        case 3:{system("cls");
             int c;
             do
             {
                cout<<"\n1.BY ID\n2.BY NAME\n3.BY MARKS\n4.BY PERSENTAGE\n5.EXIT\nCHOOSE: ";
                cin>>c;
                switch (c)
                {

                case 1:{system("cls");
                    int id;
                    cout<<"Enter ID: ";
                    cin>>id;
                    searchById(id,First);
                }break;
                case 2:{system("cls");
                    string Name;
                    cout<<"Enter Name: ";
                    cin>>Name;
                    searchByName(Name,First);
                }break;
                case 3:{system("cls");
                    int c;
                    do
                    {
                        cout<<"\n1.BY SUBJECT\n2.BY TOTAL MARKS\n3.EXIT\nCHOOSE: ";
                        cin>>c;
                        switch (c)
                        {
                        case 1:{system("cls");
                            int c;
                            do
                            {
                                cout<<"\n1.IN C++\n2.IN DSA\n3.IN NETWORKING\n4.EXIT\nCHOOSE: ";
                                cin>>c;
                                switch (c)
                                {
                                case 1:{system("cls");
                                    int c;
                                    do
                                    {
                                        cout<<"\n1.HIGHEST\n2.LOWEST\n3.EXIT\nCHOOSE: ";
                                        cin>>c;
                                        switch (c)
                                        {
                                        case 1:{system("cls");
                                            HMC(First);
                                        }break;
                                        case 2:{system("cls");
                                            LMC(First);
                                        }break;
                                        case 3:{system("cls");
                                            cout<<"EXIT>>";
                                        }break;
                                        default:{system("cls");
                                            cout<<"Choose Valid Option";
                                        }
                                            break;
                                        }
                                    } while (c!=3);
                                    
                                }break;
                                case 2:{system("cls");
                                     int c;
                                    do
                                    {
                                        cout<<"\n1.HIGHEST\n2.LOWEST\n3.EXIT\nCHOOSE: ";
                                        cin>>c;
                                        switch (c)
                                        {
                                        case 1:{system("cls");
                                            HMD(First);
                                        }break;
                                        case 2:{system("cls");
                                            LMD(First);
                                        }break;
                                        case 3:{system("cls");
                                            cout<<"EXIT>>";
                                        }break;
                                        default:{system("cls");
                                            cout<<"Choose Valid Option";
                                        }
                                            break;
                                        }
                                    } while (c!=3);
                                }break;
                                case 3:{system("cls");
                                     int c;
                                    do
                                    {
                                        cout<<"\n1.HIGHEST\n2.LOWEST\n3.EXIT\nCHOOSE: ";
                                        cin>>c;
                                        switch (c)
                                        {
                                        case 1:{system("cls");
                                            HMN(First);
                                        }break;
                                        case 2:{system("cls");
                                            LMN(First);
                                        }break;
                                        case 3:{system("cls");
                                            cout<<"EXIT>>";
                                        }break;
                                        default:{system("cls");
                                            cout<<"Choose Valid Option";
                                        }
                                            break;
                                        }
                                    } while (c!=3);
                                }break;
                                case 4:{system("cls");
                                    cout<<"EXIT>>";
                                }break;
                                default:{system("cls");
                                    cout<<"Choose Valid Option";
                                }break;
                                }
                            } while (c!=4);
                            
                        }break;
                        case 2:{system("cls");
                             int c;
                                    do
                                    {
                                        cout<<"\n1.HIGHEST\n2.LOWEST\n3.EXIT\nCHOOSE: ";
                                        cin>>c;
                                        switch (c)
                                        {
                                        case 1:{system("cls");
                                            HM(First);
                                        }break;
                                        case 2:{system("cls");
                                            LM(First);
                                        }break;
                                        case 3:{system("cls");
                                            cout<<"EXIT>>";
                                        }break;
                                        default:{system("cls");
                                            cout<<"Choose Valid Option";
                                        }
                                            break;
                                        }
                                    } while (c!=3);
                        }break;
                        case 3:{system("cls");
                            cout<<"\nEXIT>>>";
                        }break;                        
                        default:
                            break;
                        }
                    } while(c!=3);
                    
                }break;
                case 4:{system("cls");
                    cout<<"\nSet Persentage Criteria";
                    cout<<"\n----------------------------";
                    float pass=0.0f,good=0.0f,excellent=0.0f;
                    cout<<"\nPssing Persentage: ";
                    cin>>pass;
                    cout<<"\ngood Persentage: ";
                    cin>>pass;
                    cout<<"\nExcilent Persentage: ";
                    cin>>excellent;
                    int c;
                    do
                    {
                        cout<<"\n1.PASSED STUDENTS\n2.FAILED STUDENT\n3.EXIT\nCHOOSE: ";
                        cin>>c;
                        switch (c)
                        {
                        case 1:{system("cls");
                            PS(pass,First);
                        }break;
                        case 2:{system("cls");
                            FS(pass,First);
                        }break;
                        // case 3:{system("cls");
                        //     GS(good,excellent,First);
                        // }break;
                        // case 4:{system("cls");
                        //     ES(excellent,First);
                        // }break;
                        case 3:{system("cls");
                            cout<<"EXIT>>";
                        }break;
                        default:{system("cls");
                            cout<<"Choose Valid Option";
                        }
                            break;
                        }
                    } while (c!=3);
                    
                }break;
                case 5:{system("cls");
                    cout<<"EXIT>>>>";
                }break;
                default:{system("cls");
                    cout<<"Choose Valid Option.";
                }break;
                
                  }
                    }while (c!=5);
        }
        break;
        case 4:{system("cls"); 
            cout<<"EXIT>>>>>";
        }
        
        default:{system("cls");
            cout<<"Enter valid choice.";
        }
            break;
        }
    } while (choose!=4);
    return 0;
}

