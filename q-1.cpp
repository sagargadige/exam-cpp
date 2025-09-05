#include<iostream>
using namespace std;
class Rectangle{

    private:
        float length;
        float width;
    public:
        void setdata(){
            cout<<"Enter the length:";
            cin>>length;
            cout<<"Enter the width:";
            cin>>width;
        }
        void getdata(){
                cout<<"--------------------------"<<endl;
                cout<<"The area of Rectangle is:"<<length*width<<endl;
        }
};
int main()
{
    Rectangle obj;
    obj.setdata();
    obj.getdata();
    return 0;
}
