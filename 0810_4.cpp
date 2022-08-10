#include <iostream>

using namespace std;

class ctestdata
{
    int m_ndata = 0;
    public:
        ctestdata(int nparam): m_ndata(nparam)
        {
            cout << "ctestdata(int)" << endl;
        }
        ctestdata(const ctestdata& rhs): m_ndata(rhs.m_ndata)
        {
            cout << "ctestdata(const ctestdata &)" << endl;
        }

        int getdata() const
        {
            return m_ndata;
        }
        void setdata(int nparam) 
        {
            m_ndata = nparam;
        }
        
};

void testfunc(ctestdata param)
{
    cout << "testfunc()" << endl;
    param.setdata(20);
}

int main()
{
    cout <<"**********begin*********" << endl;
    ctestdata a(10);
    testfunc(a);

    cout << "a: " << a.getdata() << endl;
    cout << "**********End**********" << endl;

    return 0;
}
//30 31 6 7 33 24 9 10 25 26 17 18 35 13 14 36 종료 