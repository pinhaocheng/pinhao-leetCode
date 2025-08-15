class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        std::vector<int> remaining;

        for (int a : asteroids)
        {
            // Inside your for loop for each asteroid 'a'
            bool still_alive = true;

            // This while loop handles all chain-reaction collisions for 'a'
            while (!remaining.empty() && a < 0 && remaining.back() > 0)
            {
                if (abs(a) > abs(remaining.back()))
                {
                    remaining.pop_back(); // Top explodes, 'a' continues.
                }
                else if (abs(a) < abs(remaining.back()))
                {
                    still_alive = false; // 'a' explodes.
                    break;               // Stop collisions for 'a'.
                }
                else
                {                         // They are equal
                    still_alive = false;  // 'a' explodes.
                    remaining.pop_back(); // Top also explodes.
                    break;                // Stop collisions for 'a'.
                }
            }
            // After the while loop, if 'a' is still alive, add it.
            if (still_alive)
            {
                remaining.push_back(a);
            }
        }
        return remaining;
    }
};