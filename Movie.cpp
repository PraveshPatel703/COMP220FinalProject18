//
// Created by Pravesh Patel on 12/4/18.
//

#include "Movie.h"

Movie::Movie() {
    this->title = title;
    this->genre = genre;
    this->rating = rating;
    this->duration = duration;
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