#include <vector>
#include <list>
using namespace std;

class MyHashMap {
private:
    static const int SIZE = 1000; // number of buckets
    vector<list<pair<int,int>>> table;

    int hash(int key) {
        return key % SIZE; // simple modulo hash
    }

public:
    MyHashMap() {
        table.resize(SIZE);
    }

    void put(int key, int value) {
        int idx = hash(key);
        for (auto &p : table[idx]) {
            if (p.first == key) {
                p.second = value; // update existing
                return;
            }
        }
        table[idx].push_back({key, value}); // insert new
    }

    int get(int key) {
        int idx = hash(key);
        for (auto &p : table[idx]) {
            if (p.first == key) return p.second;
        }
        return -1; // not found
    }

    void remove(int key) {
        int idx = hash(key);
        for (auto it = table[idx].begin(); it != table[idx].end(); ++it) {
            if (it->first == key) {
                table[idx].erase(it);
                return;
            }
        }
    }
};
/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */