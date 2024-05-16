#include "suffixtree.hpp"

// Visualization https://brenden.github.io/ukkonen-animation/
// Source code   https://favtutor.com/blogs/ukkonen-algorithm-suffix-tree

int main() {
    std::string base = "a";
    for (int i = 1; i <= 100; ++i) {
        std::string input = base;
        SuffixTree tree(input);
        std::cout << input.length() << " " << tree.time_microseconds << std::endl;
        base += std::string(10, 'a');
    }

    std::cout << std::endl;

    base = "a";
    char next_char = 'b';
    for (int i = 1; i <= 100; ++i) {
        std::string input = base;
        SuffixTree tree(input);
        std::cout << input.length() << " " << tree.time_microseconds << std::endl;
        base += std::string(10, next_char);
        next_char++;
    }
    
    return 0;
}