#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>

class PhoneBook 
{

public:

    PhoneBook()
    {

    }

    ~PhoneBook()
    {

    }

    void add(std::string name, std::string phoneNumber)
    {
        book[name] = phoneNumber;

        size++;

    }

    std::string getNumber(std::string name)
    {
        return book[name];
    }

    void removeName(std::string name)
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

    std::unordered_map<std::string, std::string> book;

    int size;

};


int main()
{

    PhoneBook book;

    book.add("Trent", "4843749882");
    book.add("Kelly", "6108501024");

    book.printBook();

}
