//
// Created by Anton Golovin on 1/20/2022.
//

#include "../headers/objects.h"

using getrealgoodutils::objects;

bool objects::is_null(void *o) {
    return o == nullptr;
}


bool objects::is_not_null(void *o) {
    return o != nullptr;
}