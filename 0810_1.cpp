#include <iostream>

using namespace std;

class ctest
{
    int m_ndata;
    static int m_ncount;
    
    public: 
        ctest(int nparam) 
        {
            m_ncount++;
            cout << m_ncount << endl;
            m_ndata = nparam;
        }
        int getdata()
        {
            return m_ndata;
        }
        void resetcount()
        {
            m_ncount = 0;
        }
        static int getcount()
        {
            return m_ncount;
        }
};
int ctest::m_ncount = 0;

int main()
{
    ctest a(5),b(10);
    cout << a.getdata() << endl;

    a.resetcount();
    cout << ctest::getcount() << endl;

}

//static 멤버변수 1.클래스 안에서 선언을 하지만 정의는 파일 밖에서 수행을 하게 된다. 2.반드시 초기화를 해야한다. 3.private으로 선언했지만 접근이 가능하다. 
//static 멤버함수 1. 객체선언 없이 함수를 접근해서 사용할 수 있다. 2. static 멤버함수안에 쓰이는 변수는 무조건 static 변수여야한다.
