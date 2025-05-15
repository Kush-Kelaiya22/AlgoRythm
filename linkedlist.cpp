// Create your own linked list data structure using oops in c++

class Node{
public:
int data;
Node* next;
Node(int val){
data=val;
next=NULL;
}
};

class List{
Node* head;
Node* tail;
public:
List(){
head=tail=NULL;
}
//Push front
void push_front(int val){
  Node* newNode=new Node(val);
  if(head==NULL){
    head=tail=newNode;
    return;
  }
  else{
    newNode->next=head;
    head=newNode;
  }
}

//push back in LL
void push_back(int val){
  Node* newNode=new Node(val);
  if(head==NULL){
    head=tail=newNode;
    return;
  }
  else{
    tail->next=newNode;
    tail=newNode;
  }
}

//pop front in LL
void pop_front(){
  if(head==NULL){
    return;
  }
    
  Node* temp=head;
  head=head->next;
  temp->next=NULL;
  delete temp;
}

//pop back in LL

void pop_back(){
  if(head==NULL){
    return;
  }
    
  Node* temp=head;
  while(temp->next!=tail){
    temp=temp->next;
  }
  temp->next=NULL;
  delete tail;
  tail=temp;
}


// Print LL
void printLL(){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  delete temp;
}
};

