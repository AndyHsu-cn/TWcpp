#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Character
{
protected:
    static const int EXP_LV = 100;
    string name;
    int level;
    int exp;
    int power;
    int knowledge;
    int luck;
    // pInc: power    kInc: knowledge   lInc: luck
    void levelUp(int pInc, int kInc, int lInc);
public:
    Character(string n, int lv, int po, int kn, int lu);
    virtual void print();
    virtual void beatMonster(int exp) = 0;
    string getName();
};

Character::Character(string n, int lv, int po, int kn, int lu) 
: name(n), level(lv), exp(pow(lv - 1, 2) * EXP_LV), 
  power(po), knowledge(kn), luck(lu)
{
}

void Character::print()
{
    cout << this->name
    << ": Level " << this->level << " (" << this->exp << "/" << pow(this->level, 2) * EXP_LV
    << "), " << this->power << "-" << this->knowledge << "-" << this->luck << "\n";
}

string Character::getName()
{
    return this->name;
}

void Character::levelUp(int pInc, int kInc, int lInc)
{
    this->level++;
    this->power += pInc;
    this->knowledge += kInc;
    this->luck += lInc;
}
// end of definition of Character


class Warrior : public Character
{
private:
    static const int PO_LV = 10;
    static const int KN_LV = 5;
    static const int LU_LV = 5;
public:
    Warrior(string n, int lv = 1) 
    : Character(n, lv, lv * PO_LV, lv * KN_LV, lv * LU_LV)
    {
    }
    
    void print()
    {
        cout << "Warror ";
        Character::print();
    }

    void beatMonster(int exp)
    {
        this->exp += exp;
        while(this->exp >= pow(this->level, 2) * EXP_LV)
            this->levelUp(PO_LV, KN_LV, LU_LV);
    }
};
// end of definition of Warrior



class Wizard : public Character
{
private:
    static const int PO_LV = 4;
    static const int KN_LV = 9;
    static const int LU_LV = 7;
public:
    Wizard(string n)
    : Character(n, 1, PO_LV, KN_LV, LU_LV)
    {
    }

    Wizard(string n, int lv) 
    : Character(n, lv, lv * PO_LV, lv * KN_LV, lv * LU_LV)
    {
    }

    void print()
    {
        cout << "Wizard ";
        Character::print();
    }

    void beatMonster(int exp)
    {
        this->exp += exp;
        while(this->exp >= pow(this->level, 2) * EXP_LV)
            this->levelUp(PO_LV, KN_LV, LU_LV);
    }
};
// end of definition of Wizard


class Team
{
private:
    int memberCount;
    Character * member[10];
public:
    Team();
    ~Team();
    void addWarrior(string name, int lv);
    void addWizard(string name, int lv);
    void memberBeatMonster(string name, int exp);
    void printMember(string name);
};
Team::Team()
{
    memberCount = 0;
    for (int i = 0; i < 10; i++)
        member[i] = nullptr;
}

Team::~Team()
{
    for (int i = 0; i < 10; i++)
        delete member[i];
}

void Team::addWarrior(string name, int lv)
{
    if(memberCount < 10)
    {
        member[memberCount] = new Warrior(name, lv);
        memberCount++;
    }
}

void Team::addWizard(string name, int lv)
{
    if(memberCount < 10)
    {
        member[memberCount] = new Wizard(name, lv);
        memberCount++;
    }
}

void Team::printMember(string name)
{
    for (int i = 0; i < this->memberCount; i++)
    {
        if(this->member[i]->getName() == name)
            this->member[i]->print();
    }
}

void Team::memberBeatMonster(string name, int exp)
{
    for (int i = 0; i < this->memberCount; i++)
    {
        if(this->member[i]->getName() == name)
        {
            this->member[i]->beatMonster(exp);
            break;
        }
    }
}
// end of definition of Team

int main(void)
{
    Team thu;

    thu.addWarrior("andy", 10);
    thu.addWizard("lp", 9);
    thu.printMember("andy");
    thu.printMember("lp");
    thu.memberBeatMonster("andy", 10000);
    thu.printMember("andy");

    cout << "------------------------" << endl;
    Character * c[3];
    c[0] = new Warrior("Alice", 10);
    c[1] = new Wizard("Sophie", 8);
    c[2] = new Warrior("Amy", 12);
    c[0]->beatMonster(10000);
    for (int i = 0; i < 3; i++)
        c[i]->print();
    for (int i = 0; i < 3; i++)
        delete c[i];

    return 0;
}