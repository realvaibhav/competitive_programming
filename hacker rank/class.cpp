#include <iostream>
#include <sstream>
using namespace std;

class student
{
    private:
    int age , standard;
    string first_name, last_name;
    public:
    void setdata()
    {
        cin >> age >> first_name >> last_name >> standard ;
    }
    void getdata()
    {
        cout << age << "\n" << last_name << ", " << first_name << "\n" << standard << "\n" ;
        cout <<"\n" << age<<","<<first_name<<","<<last_name<<","<<standard << "\n" ;
        
    }
};

   int main() 
   {
    
    student st;
    st.setdata();
    st.getdata();
    
    return 0;
   }
