#include "article.h"
#include <iostream>
using namespace std;
Article:: Article(): title(""), author(Author("","")), publicationYear(0), journal(""){

}
Article:: Article(string articleTitle, Author articleAuthor, int year, string journalName): title(articleTitle), author(articleAuthor), publicationYear(year), journal(journalName){

}
Article:: Article(const Article &other): title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal){

}
void Article:: displayinfo(){
    cout<<"67";
}
 string Article:: getTitle() const{
    return title;
}
Author Article:: getAuthor() const{
    return author;
}
int Article:: getPublicationYear() const{
    return publicationYear;
}
string Article:: getJournal() const{
    return journal;
}