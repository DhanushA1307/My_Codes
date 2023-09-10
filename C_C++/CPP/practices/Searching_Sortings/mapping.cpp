#include <bits/stdc++.h>
using namespace std;
class Mapping{
    private:
        unsigned long long int N1,N2;
        typedef class Node{
            public:
                char e;
                unsigned long long int c;
                Node* next;
                Node(char e){
                    this->e = e;
                    c = 1;
                    this->next = nullptr;
                }
        }* node;
    public:
        node Head = nullptr;
        node insert(node Head, char e){
            node temp = new Node(e);
            if(Head == nullptr) { Head = temp; }
            else{
                node t = Head;
                while(t->next != nullptr) { t = t->next; }
                t->next = temp;
            }
            return Head;
        }
        void print(node Head){
            while(Head != nullptr){
                cout << Head->e << ":" << Head->c << endl;
                Head = Head->next;
            }
            if(Head == nullptr) cout << endl;
            free(Head);
        }
        bool isnot(node Head, char a){
            node temp = Head;
            while(temp != nullptr){
                if(temp->e == a) { return false; }
                temp = temp->next;
            }
            return true;
        }
        void increment(node Head, char a){
          node temp = Head;
          while(temp != nullptr){
            if(temp->e == a){
              int count = temp->c;
              ++count;
              temp->c = count;
              break;
            }
            temp = temp->next;
          }
        }
        
        void split(node Head, string s){
            int l = s.length();
            for(int i = 0; i < l; i++){
              if(Head == nullptr || isnot(Head, s[i])) { Head = insert(Head, s[i]); }
              else { increment(Head, s[i]); }
            }
            print(Head);
        }
        void solve() {
            cin >> N1 >> N2;
            while(N1 <= N2) {
                split(Head, to_string(N1));
                N1++;
            }
        }
};
int main(){
    Mapping sol;
    sol.solve();
    return 0;
}
