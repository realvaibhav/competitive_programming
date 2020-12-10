#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  

    char c;
    string s1 , s2 ;
    getline(cin,s1);
    getline(cin,s2);  
    cout << s1.size() << " " << s2.length() <<  endl;
    cout << s1+s2 << endl ;
    c=s1[0];
    s1[0]=s2[0];
    s2[0]=c ;
    cout << s1 << " " << s2 << endl ;



    return 0;
}
    