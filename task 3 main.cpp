#include <iostream>
using namespace std;
int main() 
{
    int age;
    string name;
    float CGPA;
    
    cout<<"Enter the age=";
    cin>>age;
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the CGPA:";
    cin>>CGPA;
    
     if (age >= 18 && CGPA >= 2.5) 
     {
        cout << " You are eligible to apply for the opportunity" << endl;
    }
    else 
    {
        cout << "You are not eligible to apply." << endl;
    }
    
    return 0;
}    
    
    
    
    
