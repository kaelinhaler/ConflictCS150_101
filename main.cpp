#include <iostream>
using namespace std;


int add(int a, int b);
void say(string word);

int main()
{

   cout<<"codespace\n";
    cout<<"hello world\n";
    cout<<"5+7 = "<<add(5,7)<<endl;
    say("hello");
    
    return 0;
}

int add(int a, int b)
{
    return a+b;
}

void say(string word)
{
    cout<<word<<endl;
}