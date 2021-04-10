// 10 Classes and Objects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Book
{
	private:
		string title;
	public:
		string author;
		int pages;
		
		void setTitle(string aTitle)
		{
			title = aTitle;
			if (aTitle.empty())
			{
				cout << "Didn't enter in valid title.";
			}
		}

		string getTitle()
		{
			return title;
		}
		
		Book()
		{

		}

		Book(string AuthorOfBook, int PagesOfBook)
		{
			author = AuthorOfBook;
			pages = PagesOfBook;
		}

		Book(string title, string AuthorOfBook, int PagesOfBook)
		{
			setTitle(title);
			author = AuthorOfBook;
			pages = PagesOfBook;
		}

		void isBookLong()
		{
			if (pages > 300)
			{
				cout << "That is a long book!";
			}
			else
				cout << "That's a short book.";
		}

};

int main()
{
	Book book1 = Book("Author1", 300);
	//book1.setTitle("");
	book1.setTitle("Title1Change");
	
	Book book2;
	book2.author = "Author2";
	book2.setTitle("Title2");
	book2.pages = 400;
	book2.setTitle("TitleChange2");

	cout << book1.getTitle() << " " << book2.getTitle() << endl;

	book1.isBookLong();
	cout << "\n";
	book2.isBookLong();
}