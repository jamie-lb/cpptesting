# include <iostream>

using namespace std;

struct ListNode {
  int data;
  ListNode *next;
};

void PrintList(ListNode*);
void PrintRev(ListNode*);
void PrintNodeValue(int);

int main() {
  ListNode *head = NULL;
  for (int i = 1; i <= 10; i++) {
    ListNode *current = new ListNode;
    current->data = i;
    current->next = head;
    head = current;
  }
  PrintList(head);
  cout << endl << endl << "Reversed:" << endl << endl;
  PrintRev(head);
  delete head;
  head = NULL;
  return 0;
}

void PrintList(ListNode *node) {
  if (node != NULL) {
    PrintNodeValue(node->data);
    PrintList(node->next);
  }
}

void PrintNodeValue(int value) {
    cout << "Node value: " << value << endl;
}

void PrintRev(ListNode *node) {
  if (node != NULL) {
    PrintRev(node->next);
    PrintNodeValue(node->data);
  }
}

