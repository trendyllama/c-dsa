#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>

using std::string;
using std::unordered_map;

class PhoneBook 
{

public:

    PhoneBook()
    {


    }

    ~PhoneBook()
    {

    }

    void add(string name, string phoneNumber)
    {
        book[name] = phoneNumber;

        size++;

    }

    string getNumber(string name)
    {
        return book[name];
    }

    void removeName(string name)
    {
        book.erase(name);
    }

    void printBook()
    {
        for (auto &&i : book)
        {
            std::cout << i.first + " " + i.second << std::endl;
            
        }
        
    }


private:

    unordered_map<string, string> book;

    int size;

};


int main()
{

    PhoneBook book;

    book.add("Trent", "4843749882");
    book.add("Kelly", "6108501024");

    book.printBook();

}
