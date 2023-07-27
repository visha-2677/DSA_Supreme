#include <iostream>
#include <queue>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node* buildTree(std::vector<int>& levelOrder) {
    if (levelOrder.empty())
        return nullptr;

    Node* root = new Node(levelOrder[0]);
    std::queue<Node*> queue;
    queue.push(root);
    int i = 1;

    while (i < levelOrder.size()) {
        Node* current_node = queue.front();
        queue.pop();

        int left_data = (i < levelOrder.size()) ? levelOrder[i] : -1;
        if (left_data != -1) {
            current_node->left = new Node(left_data);
            queue.push(current_node->left);
        }
        i++;

        int right_data = (i < levelOrder.size()) ? levelOrder[i] : -1;
        if (right_data != -1) {
            current_node->right = new Node(right_data);
            queue.push(current_node->right);
        }
        i++;
    }

    return root;
}

// Function to perform level order traversal of the tree
void levelOrderTraversal(Node* root) {
    if (root == nullptr)
        return;

    std::queue<Node*> queue;
    queue.push(root);

    while (!queue.empty()) {
        Node* current_node = queue.front();
        queue.pop();

        std::cout << current_node->data << " ";

        if (current_node->left)
            queue.push(current_node->left);
        if (current_node->right)
            queue.push(current_node->right);
    }
}

int main() {
    std::vector<int> levelOrder = {1, 2, 3, 4, 5, 6, 7};
    Node* root = buildTree(levelOrder);

    std::cout << "Level Order Traversal: ";
    levelOrderTraversal(root);

    return 0;
}
