class Node {
public:
    int key, value;
    Node* prev;
    Node* next;

    Node(int k, int v) {
        key = k;
        value = v;
        prev = NULL;
        next = NULL;
    }
};
class LRUCache {
public:
       unordered_map<int,Node*>mp;
       Node* head;
       Node* tail;
       int cap;
    void addnode(Node* node){
        node->next=head->next;
        node->prev=head;
        head->next->prev=node;
        head->next=node;
    }
    void deletenode(Node* node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
    LRUCache(int capacity) {
       cap=capacity;
       head=new Node(-1,-1);
       tail=new Node(-1,-1);
       head->next=tail;
       tail->prev=head; 
    }
    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        }
        Node* node=mp[key];
        deletenode(node);
        addnode(node);
        mp[key]=node;
        return node->value;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node* node=mp[key];
            deletenode(node);
            node->value=value;
            addnode(node);
        }
        else{
            if(mp.size()==cap){
                Node* lru=tail->prev;
                deletenode(lru);
                mp.erase(lru->key);
                delete lru;
                Node* node=new Node(key,value);
                addnode(node);
                mp[key]=node;
            }
            else{
                Node* node=new Node(key,value);
                addnode(node);
                mp[key]=node;
            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */