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
  int input = 1;
  while (cin >> input && input > 0) {
    ListNode *current = new ListNode;
    current->data = input;
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

void PrintList(ListNode* list) {
  if (list != NULL) {
    PrintNodeValue(list->data);
    PrintList(list->next);
  }
}

void PrintNodeValue(int value) {
    cout << "Node value: " << value << endl;
}

void PrintRev(ListNode* list) {
  if (list != NULL) {
    PrintRev(list->next);
    PrintNodeValue(list->data);
  }
}

