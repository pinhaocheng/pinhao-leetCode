class RecentCounter
{
private:
    std::queue<int> requests; // queue to store timestamps
public:
    RecentCounter()
    {
    }

    int ping(int t)
    {
        requests.push(t); // add current ping to q
        while (t - requests.front() > 3000)
        {
            requests.pop();
        }
        return requests.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */