#include <bits/stdc++.h>

using namespace std;

class Cat
{
public:
    Cat(int age, int weight, bool isMale, string name, string species);
    int getAge() { return age; }
    int getWeight() { return weight; }
    void setAge(int age) { age = age; }
    void setWeight(int weight) { weight = weight; }

private:
    int age;
    int weight;
    bool isMale;
    string m_name;
    string m_species;
};

Cat::Cat(int age, int weight, bool isMale, string name, string species) : age(age), weight(weight), isMale(isMale), m_name(name), m_species(species) {}

int main()
{

    return 0;
}