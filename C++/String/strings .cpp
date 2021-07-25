/*https://www.hackerrank.com/challenges/c-tutorial-strings/problem */

#include <iostream>
#include <string>
using namespace std;

int main() {
   string a,b;
    string str;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl<<(a+b)<<endl;
    str[0]=a[0];
    str[1]=b[0];
    a[0]=str[1];
    b[0]=str[0];
    cout<<a<<" ";
    cout<<b;
  
    return 0;
}
