#include <iostream>
#include <string>
using namespace std;

namespace namespace1{
    int age = 25;
    string name = "Mehrin";
}

namespace namespace2{
    int age = 100;
    string name = "Mehrin";
}

int main(){
    int input;
    cout<< "namespace 1 scope : " << namespace1::age << endl;
    cout<<"namespace 2 scope : " << namespace2::age << endl;
    cout << "String Length: " << namespace1::name.length() <<endl;
}