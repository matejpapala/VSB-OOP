#include <iostream>
#include <string>
using namespace std;

void swap(int* a, int* b);
void getAndDivide();
void getAndCompare();
void getAndForCycle();
void getAndBiggestCommonDivider();
void getAndDraw();


class Person {
    private:
        string name;
        string surname;
        int age;
    public:
        void introduction();
        Person();
};

void Person::introduction() {
    cout << "Ahoj ja jsem " << name << " " << surname << " a je mi " << age << " let." << endl;
}

Person::Person() {
    string name, surname;
    int age;
    cout << "Napiste jmeno: ";
    cin >> this->name;
    cout << "Napiste prijmeni: ";
    cin >> this->surname;
    cout << "Napiste vek: ";
    cin >> this->age;
}


int main() {
    // cout << "Hello" << endl << "World!" << endl;
    // int a = 5;
    // int b = 10;
    // swap(a,b);
    // cout << "a: " << a << ", b: " << b << endl;
    // getAndDivide();
    //getAndCompare();
    //getAndForCycle();
    //getAndBiggestCommonDivider();
    //getAndDraw();
    Person *me = new Person();
    me->introduction();
    return 0;
}

void swap(int* a, int* b) {
    int tmp = *a;
    a = b;
    *b = tmp;
}

void getAndDivide() {
    int a, b;
    cin >> a;
    cin >> b;
    if(a > b) {
        cout << a / b << endl;
    }else {
        cout << b / a << endl;
    }
}

void getAndCompare() {
    int a,b;
    cin >> a;
    cin >> b;
    if(a > b) {
        cout << "a > b" << endl;
    }else if(b > a) {
        cout << "b > a" << endl;
    }else {
        cout << "a = b" << endl;
    }
}

void getAndForCycle() {
    int n;
    cin >> n;
    for(int i = 1; i < 100; i++) {
        if(n * i >= 100) {
            break;
        }
        cout << n * i << endl;
    }
}

void getAndBiggestCommonDivider() {
    int a,b;
    cin >> a;
    cin >> b;
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    cout << a << endl;
}

void getAndDraw() {
    int x;
    cin >> x;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {
            if(i == 0 || i == x - 1 || j == 0 || j == x - 1) {
                cout << "*";
            }else {
                cout << " ";
            }
        }
        cout << endl;
    }

}

