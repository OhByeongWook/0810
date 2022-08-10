#include <iostream>

using namespace std;

class two_hap
{
    int num1;
    int num2;

        public:
            two_hap()
            {
                num1 = 1;
                num2 = 2;
            }
        two_hap(const two_hap& rhs)
        {
            this -> num1 = rhs.num1;
            this -> num2 = rhs.num2;
        }
        int result()
        {
            return num1 + num2;
        }
        
};
int func(two_hap& rhs)
{
    return rhs.result();
}

int main()
{
    two_hap ex1;
    two_hap ex2(ex1);

    cout << func(ex1);
    cout << func(ex2);
}