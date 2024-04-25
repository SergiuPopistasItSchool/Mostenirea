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

protected:
    int getNumarRoti()
    {
        return numar_roti;
    }
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
        std::cout << "numarul de roti este " << getNumarRoti() << std::endl;
    }
};
class Motocileta : public Vehicul
{
public:
    Motocileta() : Vehicul(2)
    {
        std::cout << "O motocileta a fost creata\n";
    };
    void lineSpliting()
    {
        std::cout << "Line Spliting\n";
    }

};

class A
{
public: A() {
    std::cout << "Construcor A\n";
        };
      ~A() {
          std::cout << "Destructor A\n";
      };
};

class B : virtual public A
{
public: B() { std::cout << "Construcor B\n"; };
      ~B() {
          std::cout << "Destructor B\n";
      };
};

class C : virtual public A
{
public:
    C() {
        std::cout << "Construcor C\n";
    };
    ~C() {
        std::cout << "Destructor C\n";
    };

};

class D : public B , C
{
public:
    D()
    {
        std::cout << "Construcor D\n";
    };
    ~D()
    {
        std::cout << "Destructor D\n";
    };

};



int main()
{
    D d;
    Automobil audi;
    audi.marca = "Audi";//atribut din clasa vehicul
    audi.porneste();//metoda din clasa vehicul
    audi.claxoneaza();//metoda din clasa automobil
    audi.printNumarRoti();
    //audi.numar_roti // error este protected
    //Vehicul v;
    //v.numar_roti // error, este protected
    Motocileta Honda;
    Honda.marca = "Honda";
    Honda.porneste();
    Honda.lineSpliting();
}

/*
Ierarhia Animalelor
Scop: Implementează o clasă de bază Animal 
și clase derivate pentru diferite tipuri de animale, cum ar fi Caine și Pisica.

Descriere:

Clasa Animal va avea membri pentru nume și vârstă, și metode pentru setarea și afișarea acestora.
Clasa Caine și clasa Pisica vor moșteni clasa Animal și vor adăuga comportamente specifice, cum ar fi latra() 
pentru Caine și toarce() pentru Pisica.

*/

