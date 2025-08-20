class Solution
{
public:
    string predictPartyVictory(string senate)
    {
        std::queue<int> radiant;
        std::queue<int> dire;
        const int N = senate.size();

        // 1. Setup Phase: Populate the queues completely
        for (int i = 0; i < N; ++i)
        {
            if (senate[i] == 'R')
            {
                radiant.push(i);
            }
            else
            {
                dire.push(i);
            }
        }

        // 2. Game Phase: Run the simulation until one queue is empty
        while (!radiant.empty() && !dire.empty())
        {
            int r_idx = radiant.front();
            int d_idx = dire.front();

            dire.pop();
            radiant.pop();

            if (r_idx < d_idx)
            {
                radiant.push(r_idx + N);
            }
            else
            {
                dire.push(d_idx + N);
            }
        }

        // 3. Victory Declaration Phase: Check the result AFTER the game is over
        if (!dire.empty())
        {
            return "Dire";
        }
        else
        {
            return "Radiant";
        }
    }
};