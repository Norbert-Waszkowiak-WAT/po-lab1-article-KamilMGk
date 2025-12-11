#ifndef ARTICLE
#define ARTICLE
#include <string>
#include "author.h"
using namespace std;
class Article{
private:
string title;
Author author;
int publicationYear;
string journal;
public:
Article();
Article(string articleTitle, Author articleAuthor, int year, string journalName);
Article(const Article &other);
void displayinfo();
string getTitle() const;
Author getAuthor() const;
int getPublicationYear() const;
string getJournal() const;
};
#endif    