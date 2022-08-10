#include <iostream>
#include <string.h>

using namespace std;

class p_infor
{
    string name;
    int age;

    public:
        p_infor(string myname, int myage)
        {
            name = myname;
            age = myage;
            cout << "p_infor() in" << endl;
        }
        void showinfo()
        {
            cout << "name = " << name << endl;
            cout << "age = " << age << endl;
        }
        ~p_infor()
        {
            cout << "~p_infor()" << endl;
        }
};
int main()
{
    p_infor a ("hong", 20);
    p_infor b = a; //복사객체 = 깊은복사 
    a.showinfo();
    b.showinfo();
}