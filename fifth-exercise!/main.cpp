#include <iostream>

using namespace std;//روزی از ایام هفته دریافت کند و چندمین روز بودن را مشخص کند

int main()
{
   int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    switch(n)
    {
	
     case 1:cout<<"shanbeh";  break;
     case 2:cout<<"1shanbeh";  break;
       case 3:cout<<"2shanbeh";  break;
         case 4:cout<<"3shanbeh";  break;
           case 5:cout<<"4shanbeh";  break;
             case 6:cout<<"5shanbeh";  break;
               case 7:cout<<"jomeh";  break;
               default:cout<<"Error";
			   }
    return 0;
}
