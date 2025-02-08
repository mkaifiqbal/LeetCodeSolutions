class NumberContainers {
public:
    unordered_map<int, int> container;
    unordered_map<int, set<int>> lookup;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(container.count(index))
        {
            int oldNumber = container[index];
            lookup[oldNumber].erase(index);
            if(lookup[oldNumber].empty()) lookup.erase(oldNumber);
        }
        container[index] = number;
        lookup[number].insert(index);
    }
    
    int find(int number) {
        if(lookup.count(number) && !lookup[number].empty())
        {
            return *lookup[number].begin();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */