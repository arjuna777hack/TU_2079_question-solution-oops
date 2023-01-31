/*
Create a class author with attributes name and qualification. Also create a class publication with pname. From these classes derive a classes derive a class book having attributes title and price. Each of the three classes should have getdata() method to get their data from user. The classes should have putdata() method to display the data. Create instance of the class book in main.
*/
//coded by ARJUN

#include<iostream>
#include<string>
using namespace std;
//this is author class with argument name and qualification
class Author{
    public:
    string name;
    string qualification;
    void getdata(){
        cout<<"Enter the name of the author"<<endl;
        cin>>name;
        cout<<"Enter the qualification of the author"<<endl;
        cin>>qualification;

    }
    void putdata(){
        cout<<"Author name is : "<<name<<endl;
        cout<<"Author qualification is : "<<qualification<<endl;
    }

};
//publication class with arugument pname
class publication{
    public:
    string pname;
    void getdata()
    {
        cout<<"Enter the publication name"<<endl;
        cin>>pname;
    }
    void putdata(){
        cout<<"publication name is : "<<pname<<endl;
    }
    
};
//this is derive class with the class name book and the author ,publication class linked with it.
class book:public Author,public publication{
    public:
    string title;
    int price;
    void getdata()
    {
        //link one class method with other :: is used class name::method name
        Author::getdata();
        publication::getdata();
        cout<<"Enter the title of the book"<<endl;
        cin>>title;
        cout<<"Enter the price of the book"<<endl;
        cin>>price;
        
    }
    void putdata(){
        Author::putdata();
        publication::putdata();
        cout<<"book tiltle : "<<title<<endl;
        cout<<"book price : "<<price<<endl;
    }
   

};
int main()
{
    //object is created and the above class is accessed through it,
    book Book;
    Book.getdata();
    Book.putdata();

}