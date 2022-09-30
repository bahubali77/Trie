class Trie {
private:
    //Main root node of Trie
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode;
    }
    
    //Insert Word in Trie
    void insert(string word) {
        TrieNode* curr = root;

        for(int i=0;i<word.size();i++){
            char ele = word[i];
            if(!(curr->isPresent(ele))){
                TrieNode* newTrieNode = new TrieNode;
                curr->root[ele-'a'] = newTrieNode;
            }

            curr = curr->getPresent(ele);
        }

        curr->setIsEnd();
    }
    
    //Search for the word in Trie
    bool search(string word) {
        TrieNode* curr = root;

        for(int i=0;i<word.size();i++){
            char ele = word[i];
            if(!(curr->isPresent(ele))){
                return false;
            }
            
            curr = curr->getPresent(ele);
        }

        return curr->getIsEnd();
    }
    
    //Search the prefix in Trie
    bool startsWith(string prefix) {
        TrieNode* curr = root;

        for(int i=0;i<prefix.size();i++){
            char ele = prefix[i];
            if(!(curr->isPresent(ele))){
                return false;
            }
            
            curr = curr->getPresent(ele);
        }

        return true;
    }
};