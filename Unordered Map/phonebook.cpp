#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;


int main(){

    unordered_map<string,vector<string> > phonebook;

    phonebook["rahul"].push_back("9110");
    phonebook["rahul"].push_back("9112");
    phonebook["rahul"].push_back("9113");
    phonebook["rahul"].push_back("9114");
    phonebook["kajal"].push_back("8112");
    phonebook["kajal"].push_back("8113");
    phonebook["kajal"].push_back("8114");

    for(auto p:phonebook){
        cout<<"Name" <<p.first<<" ->";
        for(string s:p.second){
            cout<<s<<",";
        }
        cout<<endl;
    }

    string name;
    cin>>name;

    if(phonebook.count(name)==0){
        cout<<"Absent ";
    }
    else{
        for(string s:phonebook[name]){
            cout<<s<<endl;
        }
    }




    return 0;
}
