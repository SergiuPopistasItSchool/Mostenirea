#include <iostream>
#include <string>
class Vehicul
{
public:
    std::string marca;
    void porneste()
    {
        std::cout << "Vehicolul a pornit " << std::endl;
    }
};

// class Derivata : tip_mostenire clasa_de_baza
class Automobil : public Vehicul
{
public:
    void claxoneaza()
    {
        std::cout << "Beep Beep!" << std::endl;
    }
};


int main()
{
    std::cout << "Hello World!\n";
}

