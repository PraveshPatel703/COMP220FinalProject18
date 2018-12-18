//
// Created by Pravesh Patel on 12/4/18.
//

#ifndef COMP220FINALPROJECT18_MOVIE_H
#define COMP220FINALPROJECT18_MOVIE_H

#include "string"

class Movie{

private:

    std::string title;
    std::string genre;
    float rating;
    float duration;

public:

    Movie(std::string title, std::string genre, float rating, float duration);
    ~Movie();
    std::string getName();
    std::string getGenre();
    float getRating();
    float getDuration();



};

#endif //COMP220FINALPROJECT18_MOVIE_H
