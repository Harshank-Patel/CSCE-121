#include <iostream>
#include <string>

using std::string;

struct Person {
    string name;
    int weight;
};

struct Doctor : public Person {
    string specialty;
};

int main() {
    Person p;
    p.name = "George";
    p.weight = 187;
    Doctor d;
    d.name = "Sam";
    d.weight = 165;
    d.specialty = "surgeon";
    Person w;
    w = d;
    std::cout << w.name << std::endl;
    std::cout << w.weight << std::endl;
    std::cout << w.specialty << std::endl;
}

