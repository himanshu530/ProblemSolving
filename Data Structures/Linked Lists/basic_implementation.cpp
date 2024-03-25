#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
        int data;
        Node * next;

    //constructors
    public : 
        Node(int data, Node * next){
            this->data = data;
            this->next = next;
        } 

        Node(int data){
            this->data = data;
            next = nullptr;
        }   

};

int length(Node * head){
    if(head==nullptr){
        return 0;
    }

    if(head->next = nullptr){
        return 1;
    }

    int count = 0;

    Node * temp = head;
    while(temp!=nullptr){
        count++;
        temp = temp->next;
    }

    return count;

    
}

Node * convertToLL(vector<int> arr){

    int n = arr.size();

    if(n==0){
        return nullptr;
    }
    if(n==1){
        return new Node(arr[0]);
    }

    Node * head = new Node(arr[0]);
    Node * start = head;

    for(int i=1;i<n;i++){
        Node * temp = new Node(arr[i]);
        start->next = temp;
        start = start->next;
    }

    return head;
}

//Complexity = O(1)

Node * deleteHead(Node * head){
    if(head==NULL){
        return head;
    }

    Node * temp = head;
    head = head->next;

    delete temp;

    return head;
}

//Complexity = O(N)

Node * deleteTail(Node * head){

    if(head==NULL){
        return head;
    }

    if(head->next==NULL){
        delete head;
        return NULL;
    }

    Node * temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }

    delete temp->next;

    temp->next = nullptr;

    return head;

}

//Complexity = O(N) Average case

Node* deleteKthNode(Node* head, int k){

    if(head==NULL){
        return head;
    }

    //Edge case : head node

    if(k==1){
        Node * temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;
    int count = 0;

    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next = temp->next;
            delete temp;
            break;
        }

        prev = temp;
        temp = temp->next;

    }
    return head;

}


void printLL(Node* head){
    if(head==nullptr){
        return;
    }

    Node * temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
}

//check palindrom list
bool isPalindrome(Node* head){

    if(head->next==nullptr){
        return true;
    }

    Node* temp = head;
    stack<int> st;

    while(temp!=NULL){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while(!st.empty()){
        int data = st.top();
        st.pop();
        if(data!=temp->data){
            return false;
        }
        temp = temp->next;
    }

    return true;

}

int main(){

    vector<int> arr {1,2,3,4,5};

    Node * ll = convertToLL(arr);
    cout<<"Printing LL"<<"\n";
    printLL(ll);

    return 0;

}