class TrieTrieNode {
public:
    TrieNode* arr[257];

    //isEnd to check whether any words at that particular node or not
    bool isEnd;

    /*
    Constructor
    isEnd as false
    all arr elements as NULL;
    */
    TrieNode(){
        isEnd = false;
        for(int i=0;i<257;i++){
            arr[i] = NULL;
        }
    }

    //Check if any char present in the current node
    bool isPresent(char curr){
        return this->arr[curr-'a'] == NULL ? false : true;
    }

    //Give the node of curr char
    TrieNode* getPresent(char curr){
        return this->arr[curr-'a'];
    }

    void setIsEnd(){
        this->isEnd = true;
    }

    bool getIsEnd(){
        return this->isEnd;
    }

};
