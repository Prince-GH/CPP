#include<iostream>
#include<vector> //vector header file is use to use the ADT 
using namespace std;
int main(){

    vector<int> v; //To decleare the vector use this syntax " vector<datatype> vector_name; "
    cout<<"Size of vector: "<<v.size()<<endl; //To check featch the size of the vector use the ADT " vector_name.size(); "
    // v.resize(1); //To change the size the size the of a vector use ADT resize " vector_name.resize(); "
    v.push_back(56);
    cout<<"\nSize of vector: "<<v.size();
    v.push_back(100);
    v.push_back(4);
    v.push_back(85);
    v.push_back(66);
    cout<<"\nSize of vector: "<<v.size();
    cout<<"\nCapacity of vector: "<<v.capacity();
    v.push_back(100);
    v.push_back(4);
    v.push_back(85);
    v.push_back(66);
     cout<<"\nSize of vector: "<<v.size();
    cout<<"\nCapacity of vector: "<<v.capacity();
    cout<<"\nVector: ";
    for(int i:v){
        cout<<" | "<<i;
    }
    int m;
    cout<<"Enter the value of the given size: ";
    cin>>m;
    vector<int> v;
    v.resize(m);
    cout<<"SIZE OF THE VECTOR IS :"<<v.size();
    


    
return 0;
}