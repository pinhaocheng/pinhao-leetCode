class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int max_altitude = 0;
        int curr_altitude = 0;

        for (int g : gain)
        {
            curr_altitude += g;
            max_altitude = std::max(max_altitude, curr_altitude);
        }

        return max_altitude;
    }
};