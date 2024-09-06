//
//  main.cpp
//  urok
//
//  Created by paul blazhko on 06.09.2024.
//

#include <iostream>
using namespace std;
class Zhivotnoe
{
protected:
    string ima;
    int vozrast;
    string vid;
public:
    Zhivotnoe(string ima, int vozrast, string vid) : ima(ima), vozrast(vozrast), vid(vid) {}
     void opisanie()
    {
        cout<<ima <<" это "<<vid <<", возраст - "<<vozrast<<" лет"<<endl;
    }
};
class Sobaka : public Zhivotnoe
{
private:
    string poroda;
public:
    Sobaka(string ima, int vozrast, string poroda) : Zhivotnoe(ima,vozrast,"собака"), poroda(poroda) {}
    void opisanie()
    {
        cout<<ima <<" это собака, ее порода "<<poroda<<", возраст - "<<vozrast<< " лет"<<endl;
    }
};
class Koshka : public Zhivotnoe
{
private:
    string okras;
public:
    Koshka(string ima, int vozrast, string okras) : Zhivotnoe(ima,vozrast,"кошка"), okras(okras) {}
    void opisanie()
    {
        cout<<ima <<" это кошка, ее окрас "<<okras<<", возраст - "<<vozrast<< " лет"<<endl;
    }
};
class Popygay : public Zhivotnoe
{
private:
    string okras;
public:
    Popygay(string ima, int vozrast, string okras) : Zhivotnoe(ima,vozrast,"попугай"), okras(okras) {}
    void opisanie()
    {
        cout<<ima <<" это попугай, его окрас "<<okras<<", возраст - "<<vozrast<< " год"<<endl;
    }
};

int main()
{
    Sobaka sobaka("Бобик", 5, "немецкая овчарка");
    sobaka.opisanie();
    Koshka koshka("Тузик", 9, "черный");
    koshka.opisanie();
    Popygay popygay("Шарик",1,"зеленый");
    popygay.opisanie();
}


