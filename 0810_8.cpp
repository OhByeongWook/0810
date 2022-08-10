#include <iostream>
#include <string.h>

using namespace std;

class student
{
    int hakbun;
    string name;
    int kor;
    int eng;
    int math;

    public:
        student(int a, string b, int c, int d, int e)
        {
            hakbun = a;
            name = b;
            kor = c;
            eng = d;
            math = e;
        }
        student(const student& rhs) // 복사생성자
        {
            hakbun = rhs.hakbun;
            name = rhs.name;
            kor = rhs.kor;
            eng = rhs.eng;
            math = rhs.math;
        }
        int hap()
        {
            return kor + eng + math;
        }
        double avg()
        {
            return (kor + eng + math) / 3.0;
        }
};
void result(student& rhs)
{
    cout << rhs.hap() << endl;
    cout << rhs.avg() << endl;
}

int main()
{
    student ex1(1, "hong", 100, 100, 100);
    result(ex1);

    student ex2(ex1);
    result(ex2);
}