#include <iostream>

using namespace std;

class cmydata
{
    int m_ndata = 0;
    public:
        cmydata()
        {
            cout << "cmydata()" << endl;
        }
        cmydata(const cmydata &rhs)
        {
            this -> m_ndata = rhs.m_ndata;
            cout << "cmydata(const cmydata &)" << endl;
        }
        int getdata(void) const 
        {
            return m_ndata;
        }
        void setdata(int nparam)
        {
            m_ndata = nparam;
        }
};

int main()
{
    cmydata a; //cmydata
    a.setdata(10);

    cmydata b(a);
    cout << b.getdata() << endl;

    return 0;

}

//복사 생성자를 사용하는 경우
//1. 객체가 함수에 인수로 전달
//2. 함수가 객체를 반환값으로 반환하는 경우
//3. 새로운 객체를 같은 클래스 타입의 기존 객체와 똑같이 초기화 할 때


// 3장 연습문제 1번 private : 해당 클래스에서만 접근가능(117p), 2번 생성자, 반환형이 없다. 클래스와 이름이 동일하다. 3번 생성자 초기 목록 :: 
// 4번 매개변수가 참조형식이면 "반드시" 생성자 초기화 목록을 이용해야한다. 5번 this포인터 6번 변수들에 수정과 편집이 일어나면 안된다.
// 7번 정적멤버에선 this포인터를 사용하지 못한다.
