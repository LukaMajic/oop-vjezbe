#include <iostream>
#include <string>
#include <stdexcept> 
#include <vector>

using namespace std;

class Enemy {
public:
    string ime;
    int zdravlje; 
    int steta;

    Enemy(const string& ime, int zdravlje, int steta);
        
    
    virtual void attack()=0;
    virtual void displayInfo()=0;
};

class Boss : public Enemy {
public:
    string oruzje;

    Boss(const string& ime, int zdravlje, int steta, const string& oruzje);
     

    void attack() override;
       

    void displayInfo() override;
    
   
};

class Monster : public Enemy {
public:
    string sposobnosti;

    Monster(const string& ime, int zdravlje, int steta, const string& sposobnosti);
        

    void attack() override;
        

    void displayInfo() override;
        
};