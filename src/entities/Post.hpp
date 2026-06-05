#pragma once

#include <iostream>

enum class status{
    PUBLISH , DRAFT , REMOVE
};

const int POST_NOT_HAVE_ID = -1;

struct Post{
    int id{POST_NOT_HAVE_ID};
    status status;
    std::string contentHTML;
};
