typedef struct Node {
    Node(int s = 0, int e = 0, int t = 1) :start(s), end(e), times(t), next(NULL) {}
    int start;
    int end;
    int times;
    Node* next;
}Node;
class MyCalendarTwo {
public:
    MyCalendarTwo() {
        Head = new Node;
    }
    void Recursion(int start, int end, Node* front) {
        if (!front->next || end < front->next->start) {
            Node* tmp = new Node(start, end, 1);
            tmp->next = front->next;
            front->next = tmp;
            return;
        }
        if (start < front->next->start) {
            Node* tmp = new Node(start, front->next->start - 1, 1);
            tmp->next = front->next;
            front->next = tmp;
            front = tmp;
            start = front->next->start;
        }
        if (start == front->next->start) {
            if (end < front->next->end) {
                int tmp = front->next->end;
                front->next->end = end;
                front->next->times++;
                front = front->next;
                Node* t = new Node(front->end + 1, tmp, front->times - 1);
                t->next = front->next;
                front->next = t;
                return;
            }
            front->next->times++;
            if (end == front->next->end)
                return;
            Recursion(front->next->end + 1, end, front->next);
        }
        else {
            int e = front->next->end;
            front->next->end = start - 1;
            front = front->next;
            if (end < e) {
                Node* t1 = new Node(start, end, front->times + 1);
                Node* t2 = new Node(end + 1, e, front->times);
                t2->next = front->next;
                t1->next = t2;
                front->next = t1;
                return;
            }
            Node* t1 = new Node(start, e, front->times + 1);
            t1->next = front->next;
            front->next = t1;
            front = t1;
            if (end == front->end)
                return;
            Recursion(front->end + 1, end, front);
        }
    }
    bool book(int start, int end) {
        Node* front = Head;
        while (front->next && front->next->end < start)
            front = front->next;
        Node* tmp = front;
        while (tmp->next && tmp->next->start <= end - 1) {
            if (tmp->next->times == 2)
                return false;
            tmp = tmp->next;
        }
        Recursion(start, end - 1, front);
        return true;
    }
private:
    Node* Head;
};