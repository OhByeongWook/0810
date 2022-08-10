#include <iostream>

using namespace std;

class cmydata
{
    private:
        int *m_pndata = nullptr;
    public:
    cmydata(int nparam)
    {
        m_pndata = new int;
        *m_pndata = nparam;
    }
    int getdata()
    {
        if(m_pndata != NULL)
        return *m_pndata;

        return 0;
    }
};

int main()
{
    cmydata a(10);
    cmydata b(a);
    cout << a.getdata() << endl;
    cout << b.getdata() << endl;

    return 0;
}