#include <iostream>

using namespace std;//


int main()
{

    int a;
    int b;
    int c;
    cout << "enter three numbers:" << endl; 
	 cin>>a>>b>>c;
    if(a>b && b>c)
    cout<<"a is the greatest.";

    else if (b>c && c>a)
    cout<<"b is the greatest.";
    else
    cout<<"c is the greatest.";
        
    return 0;
}
