/* https://www.hackerrank.com/challenges/c-tutorial-struct/problem */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int age,standard;
    string first_name,last_name;
};

int main() 
{
    struct Student st1;
    
    cin >> st1.age >> st1.first_name >> st1.last_name >> st1.standard;
    cout << st1.age << " " << st1.first_name << " " << st1.last_name << " " << st1.standard;
    
    return 0;
}
