#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

struct Review {
    std::string title;
    int rating;
    float price;
};

bool operator<(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool worseThan(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool cheaperThan(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool FillReview(std::shared_ptr<Review> & rr);
void ShowReview(const std::shared_ptr<Review> & rr);
void ShowMenu();
void ShowTitle();

int main()
{
    using namespace std;

    vector<shared_ptr<Review>>books;

    shared_ptr<Review> temp;
    while (FillReview(temp))
        books.push_back(temp);


    if (books.size() > 0)
    {

        vector<shared_ptr<Review>>byTitle = books;
        vector<shared_ptr<Review>>byPrice = books;
        vector<shared_ptr<Review>>byRating = books;

        sort(byTitle.begin(), byTitle.end());
        sort(byPrice.begin(), byPrice.end(), cheaperThan);
        sort(byRating.begin(), byRating.end(), worseThan);

        cout << "Thank you. You entered the following "
            << books.size() << " ratings.\n";


        ShowMenu();

        std::string c; getline(std::cin,c);

        while(c!="g"){
          if(c=="a"){
            cout << "Input order\n";
            ShowTitle();
            for_each(books.begin(), books.end(), ShowReview);
          }else if(c=="b"){
            cout << "Alphabetically\n";
            ShowTitle();
            for_each(byTitle.begin(), byTitle.end(), ShowReview);
          }else if(c=="c"){
            cout << "Rating ascending\n";
            ShowTitle();
            for_each(byRating.begin(), byRating.end(), ShowReview);
          }else if(c=="d"){
            cout << "Rating descending\n";
            ShowTitle();
            for_each(byRating.rbegin(), byRating.rend(), ShowReview);
          }else if(c=="e"){
            cout << "Price ascending\n";
            ShowTitle();
            for_each(byPrice.begin(), byPrice.end(), ShowReview);
          }else if(c=="f"){
            cout << "Price descending\n";
            ShowTitle();
            for_each(byPrice.rbegin(), byPrice.rend(), ShowReview);
          }else{
            cout << "Invalid option. Bye.\n";
            break;
          }
          cout << "------------------------------\n";
          getline(std::cin,c);
        }
    }
    else
        cout << "No entries. ";
    cout << "Bye.\n";


    return 0;
}

bool operator<(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool worseThan(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool cheaperThan(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2){
  if(r1->price < r2->price)
    return true;
  else
    return false;
}

bool FillReview(std::shared_ptr<Review> & rr)
{
    rr = (std::shared_ptr<Review>)new Review;
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin, rr->title);
    if (rr->title == "quit")
        return false;
    std::cout << "Enter book rating: ";
    std::cin >> rr->rating;
    if (!std::cin)
        return false;

    while (std::cin.get() != '\n')
        continue;

    std::cout << "Enter book price: ";
    std::cin >> rr->price;

    if (!std::cin)
        return false;

    while (std::cin.get() != '\n')
        continue;

    return true;
}

void ShowReview(const std::shared_ptr<Review> & rr)
{
    std::cout << rr->rating << "\t" << rr->title << "\t" << rr->price << std::endl;
}

void ShowMenu(){
  using std::cout;
  cout << "What order to display the data?\n";
  cout << "a) input\t\t";
  cout << "b) alphabet\n";
  cout << "c) rating ascend.\t";
  cout << "d) rating descend.\n";
  cout << "e) price ascend.\t";
  cout << "f) price descend.\n";
  cout << "g) bye\n";
}

void ShowTitle(){
  std::cout << "Rating\tTitle\tPrice\n";
}