#include <iostream>

using namespace std;

class Product
{
public:
    static int sum_products;
    string title;
    string author_director;
    int ID;

    Product(string title, string author_director, int id) : title(title), author_director(author_director), ID(id)
    {
        sum_products++;
    }
    virtual void displayInfo() const = 0;
};

class Book : public Product
{
public:
    Book(string title, string author, int id) : Product(title, author, id) {}

    void displayInfo() const
    {
        cout << "title = " << title << endl;
        cout << "author = " << author_director << endl;
        cout << "ID = " << ID << endl;
    }
};

class DVD : public Product
{
public:
    DVD(string title, string director, int id) : Product(title, director, id) {}

    void displayInfo() const
    {
        cout << "title = " << title << endl;
        cout << "director = " << author_director << endl;
        cout << "ID = " << ID << endl;
    }
};

int Product::sum_products = 0;

// class inventorysystem
// {
//     public:
//         void addProducts(Product* product)
//         {
            
//         }  
// };

int main()
{
    Product* products[10];

    products[0] = new Book("A123","rahim",10);
    products[1] = new Book("B123","kahim",12);
    products[2] = new Book("C123","liton",14);
    products[3] = new Book("D123","joy",16);
    products[4] = new Book("E123","hasan",19);

    for(int i=0;i<10;i++)
    {
        products[i]->displayInfo();
    }
    
}