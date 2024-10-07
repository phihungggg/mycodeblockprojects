#include <iostream>

using namespace std;


void get(int &a )
{
    int c=2;
    a=c;

}

int main()
{
    int a=1;
    get(a);
    cout<< a<<endl;
    return 0;
}
