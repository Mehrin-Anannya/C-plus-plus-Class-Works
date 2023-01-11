#include<iostream>
using namespace std;
 int test();

int main(){
    cout << "Hello" << endl;
    test();
    return 0;
}
 int test(){
        cout<<"Test funcion inside main function" << endl;
        return 0;
    }