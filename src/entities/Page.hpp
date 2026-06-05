#pragma once

#include <iostream>

const int PAGE_NOT_HAVE_ID = -1;

enum class PageTemplate {
    one_column
};


struct Page {
    int id{PAGE_NOT_HAVE_ID};
    PageTemplate pageTemplate{PageTemplate::one_column};
};
