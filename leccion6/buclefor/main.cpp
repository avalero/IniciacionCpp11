#include <iostream>

using namespace std;

class IntegerNumber{
public:
    IntegerNumber(int _num){
        num = _num;
    }

    int factorial(){
        if(num <= 0){
            throw string{"ERROR: Cannot calculate factorial of negative number"};
        }
        int result{1};
        for( int counter{num}; counter > 0; counter -= 1 ){
            result = result * counter;
        }

        return result;
    }

    int getNum(){
        return num;
    }

private:
    int num;
};

int main()
{
    try {
        int num;
        cout << "Introduce a number: ";
        cin >> num;
        IntegerNumber number(num);
        cout << "The factorial of " << number.getNum() << " is: " << number.factorial() << endl;
    } catch (string error) {
        cout << error << endl;
        return 1;
    }

    return 0;
}
