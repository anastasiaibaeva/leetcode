/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    std::vector<int> res;
    vector<int> preorder(Node* root) {
        if (root) {
            res.push_back(root->val);
            for (auto & el : root->children) {
                preorder(el);
            }
        }
        return res;
    }
};