class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        std::unordered_map<std::string, int> row_counts;
        int n = grid.size(); // The grid is n x n

        // Loop through each row index
        for (int i = 0; i < n; ++i)
        {
            // grid[i] IS the vector for the current row
            std::vector<int> &current_row = grid[i];

            // Now, convert this row vector to a string
            std::string row_as_string = "";
            for (int number : current_row)
            {
                row_as_string += std::to_string(number) + ",";
            }

            // Store it in the map
            row_counts[row_as_string]++;
        }

        int total_pairs = 0;

        // Loop through each column index 'j'
        for (int j = 0; j < n; ++j)
        {
            // 1. Create an empty vector to hold the column elements
            std::vector<int> current_col;

            // 2. Loop DOWN the rows to build the column
            for (int i = 0; i < n; ++i)
            {
                current_col.push_back(grid[i][j]);
            }

            // 3. Now that we have the column as a vector,
            //    convert it to a string just like we did for the rows.
            std::string col_as_string = "";
            for (int number : current_col)
            {
                col_as_string += std::to_string(number) + ",";
            }

            // 4. Look up this column string in our map of rows
            if (row_counts.count(col_as_string))
            {
                total_pairs += row_counts[col_as_string];
            }
        }
        return total_pairs;
    }
};