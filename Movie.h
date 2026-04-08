#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

class Movie {
private:
    string title;
    int year;
    double rating;

public:
    Movie();
    Movie(string t, int y, double r);

    string getTitle() const;
    int getYear() const;
    double getRating() const;

    void setRating(double r);
    void print() const;
};

#endif
