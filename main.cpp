#include "src/entities/Page.hpp"
#include "src/entities/Post.hpp"

int main() {

    Page homePage;
    homePage.id = 1;
    homePage.pageTemplate = PageTemplate::one_column;

    Post homePost;
    homePost.id = 1;
    homePost.status = status::DRAFT;
    homePost.contentHTML = "<h1>Hello World</h1>";

    return 0;
}
