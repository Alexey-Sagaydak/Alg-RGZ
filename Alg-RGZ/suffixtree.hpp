#ifndef SUFFIXTREE_H
#define SUFFIXTREE_H

#include <string>
#include <vector>

struct Node {
    std::string sub;
    std::vector<int> ch;

    Node();
    Node(const std::string& sub, std::initializer_list<int> children);
};

class SuffixTree {
public:
    SuffixTree(const std::string& str);
    void visualize();

private:
    std::vector<Node> nodes;
    void addSuffix(const std::string& suf);
};

#endif