#include<iostream>
using namespace std;
void function(string str)
{
    if(str.length()==0){
    return;
    }
    function(str.substr(1));
    cout<<str[0];
}
int main()
{
	string str;
    cin>>str;
    function(str);    
    return 0;
}
