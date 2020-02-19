#include <iostream>
#include <cstring>
using namespace std;

class Fun{
    public:
        void operator()(string s){
            cout<<"Having Fun with "<<s;
        }
};


int main() {

    Fun f; //Constructor
    f("C++"); //Overloaded () Operator = Function Call where f is an object

    

return 0;
}
