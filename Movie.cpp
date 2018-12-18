//
// Created by Pravesh Patel on 12/4/18.
//

#include "Movie.h"

Movie::Movie(std::string titleIn, std::string genreIn, float ratingIn, float durationIn) {
    this->title = titleIn;
    this->genre = genreIn;
    this->rating = ratingIn;
    this->duration = durationIn;
}

Movie::~Movie() {
    this == nullptr;
}

float Movie::getDuration() {
    return duration;
}

std::string Movie::getGenre() {
    return genre;
}

std::string Movie::getName() {
    return title;
}

float Movie::getRating() {
    return rating;
}