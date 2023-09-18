// vect3.cpp -- using STL functions
#include <iostream>
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

struct Review {
	std::string title;
	int rating;
	double price;
};

bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool FillReview(Review & rr);
void ShowReview(const shared_ptr<Review> & rr);
bool priceJudgeWorse(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
int main()
{
	using namespace std;
	bool exitRequested = true;
	vector<shared_ptr<Review>> books;

	Review temp;
	while (FillReview(temp))
		books.push_back(shared_ptr<Review>(new Review(temp)));
	if (books.size() > 0)
	{
		/*cout << "Thank you. You entered the following "
			<< books.size() << " ratings:\n"
			<< "Rating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);

		sort(books.begin(), books.end());
		cout << "Sorted by title:\nRating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);

		sort(books.begin(), books.end(), worseThan);
		cout << "Sorted by rating:\nRating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);

		random_shuffle(books.begin(), books.end());
		cout << "After shuffling:\nRating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);*/

		// 用户选择排序方式
		cout << "Select sorting order:\n";
		cout << "1. Original Order\n";
		cout << "2. Alphabetical Order\n";
		cout << "3. Rating Ascending Order\n";
		cout << "4. Rating Descending Order\n";
		cout << "5. Price Ascending Order\n";
		cout << "6. Price Descending Order\n";
		cout << "7. Exit\n";

		int choice;
		while (exitRequested) {
			cout << "Make the choice:";
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "Thank you. You entered the following " << books.size() << " ratings:\n" << "Rating\tBook\n";
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 2:
				sort(books.begin(), books.end());
				cout << "Sorted by title:\nRating\tBook\n";
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 3:
				sort(books.begin(), books.end(), worseThan);
				cout << "Sorted by rating:\nRating\tBook\n";
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 4:
				sort(books.begin(), books.end(), worseThan);
				cout << "Sorted by rating reverse:\nRating\tBook\n";
				for_each(books.rbegin(), books.rend(), ShowReview);
				break;
			case 5:
				sort(books.begin(), books.end(), priceJudgeWorse);
				cout << "Sorted by price:\nRating\tBook\n";
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 6:
				sort(books.begin(), books.end(), priceJudgeWorse);
				cout << "Sorted by price reverse:\nRating\tBook\n";
				for_each(books.rbegin(), books.rend(), ShowReview);
				break;
			case 7:
				exitRequested = false;
				break;


			default:
				cout << "Invalid input!" << endl;
				exitRequested = false;
				break;
			}
			
			
		}
		
	}
	else
		cout << "No entries. ";
	cout << "Bye.\n";
	// cin.get();

	system("pause");
	return 0;
}

bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->title < r2->title)
		return true;
	else if (r1->title == r2->title && r1->rating < r2->rating)
		return true;
	else
		return false;
}

bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->rating < r2->rating)
		return true;
	else
		return false;
}

bool FillReview(Review & rr)
{
	std::cout << "Enter book title (quit to quit): ";
	std::getline(std::cin, rr.title);
	if (rr.title == "quit")
		return false;
	std::cout << "Enter book rating: ";
	std::cin >> rr.rating;
	cout << "Enter book price: ";
	cin >> rr.price;
	if (!std::cin)
		return false;
	// get rid of rest of input line
	while (std::cin.get() != '\n')
		continue;
	return true;
}

void ShowReview(const shared_ptr<Review> & rr)
{
	std::cout << rr->rating << "\t" << rr->title << std::endl;
}

bool priceJudgeWorse(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2) {
	if (r1->price < r2->price)
		return true;
	else
		return false;
}