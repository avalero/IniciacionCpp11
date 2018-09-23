#include <iostream>

using namespace std;

class Person{
public:
    Person(){
        name = "";
        age = 0;
        weight = 0;
    }

    Person(string _name, unsigned short int _age, unsigned short int _weight ){
        setName(_name);
        setAge(_age);
        setWeight(_weight);
    }

    string getName(){
        return name;
    }

    unsigned short int getAge(){
        return age;
    }

    unsigned short int getWeight(){
        return weight;
    }

    void setName(string _name){
        name = _name;
    }

    void setAge(unsigned short int _age){
        if (_age > 150){
            throw string{"Age cannot be greater than 150"};
        }else{
            age = _age;
        }
    }

    void setWeight(unsigned short int _weight){
        if (_weight > 200){
            throw string{"Weight cannot be greater than 200"};
        }else{
            weight = _weight;
        }
    }

private:
    string name;
    unsigned short int age;
    unsigned short int weight;
};

int main()
{
    Person someBody;
    try{
        cout << "Please introduce your name: ";
        string name;
        cin >> name;
        someBody.setName(name);

        cout << "Please introduce your age: ";
        unsigned short int age;
        cin >> age;
        someBody.setAge(age);

        cout << "Please introduce your weight: ";
        unsigned short int weight;
        cin >> weight;
        someBody.setWeight(weight);

        cout << "Hello " << someBody.getName()
             << ", you are " << someBody.getAge()
             << ", you weight "  << someBody.getWeight() << " kg."
             << endl;
    }catch(string msg){
        cout << msg << endl;
        return 1;
    }

    return 0;
}
