// CRTPExamples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template<typename specific_animal>
struct animal {
    void who() {
		cout << "---Base Class Who--" << endl;
        static_cast<specific_animal*>(this)->who_dis();
    }
};
struct dog : animal<dog> {
    void who_dis() {
        cout << "dog" << endl;
    }
};
struct cat : animal<cat> {
    void who_dis() {
        cout << "cat" << endl;
    }
};

int main()
{
    cat c;
	c.who();
    dog d;
    d.who();
}