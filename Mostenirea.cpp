#include <iostream>
#include <string>
class Vehicul
{
public:
    Vehicul(int nr_roti): numar_roti(nr_roti)
    {
        std::cout << "Un vehicul a fost creat\n";
    }
    ~Vehicul()
    {
        std::cout << "Un vechiul a fost distrus\n";
    }
    std::string marca;
    void porneste()
    {
        std::cout << "Vehicolul a pornit " << std::endl;
    }
private:
    int numar_roti;
};

// class Derivata : tip_mostenire clasa_de_baza
class Automobil : public Vehicul
{
public:
    Automobil() : Vehicul(4)
    {
        std::cout << "Un automobil a fost creat\n";     
    }
    ~Automobil()
    {
        std::cout << "Un automobil a fost distrus\n";
    }
    void claxoneaza()
    {
        std::cout << "Beep Beep!" << std::endl;
    }
    void printNumarRoti()
    {
        std::cout << "numarul de roti este " << numar_roti << std::endl;
    }
};


int main()
{
    Automobil audi;
    audi.marca = "Audi";//atribut din clasa vehicul
    audi.porneste();//metoda din clasa vehicul
    audi.claxoneaza();//metoda din clasa automobil
    //audi.numar_roti // error este protected
    //Vehicul v;
    //v.numar_roti // error, este protected
}

