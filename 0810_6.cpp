#include <iostream>

using namespace std;

class cmydata 
{
    private:
        int m_ndata;
    public:
        cmydata()
        {
            cout << "cmydata() in" << endl;
        }
        cmydata(const cmydata& rhs)
        {
            this -> m_ndata = rhs.m_ndata;
        }
        int getdata() const 
        {
            return m_ndata;
        }
        void setdata(int nparam)
        {
            m_ndata = nparam;    
        }
        void print_member()
        {
            cout << m_ndata << endl;
        }
};

int main()
{
    cmydata a; //cmydata() in
    a.setdata(10); //a.m_ndata = 10
    a.print_member(); //10

    cmydata b;
    b.getdata();
    b.print_member();
}