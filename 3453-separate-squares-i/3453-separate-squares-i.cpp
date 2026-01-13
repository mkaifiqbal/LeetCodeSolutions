class Solution {
public:
     bool check(long double mid, vector<vector<int>>& squares, long double totalArea) {
        long double areaBelow = 0;

        for (auto &sq : squares) {
            long double y = sq[1];
            long double side = sq[2];

            // fully below
            if (mid >= y + side) {
                areaBelow += side * side;
            }
            // partially cut
            else if (mid > y) {
                areaBelow += side * (mid - y);
            }
        }

        return areaBelow * 2 >= totalArea;
    }

    double separateSquares(vector<vector<int>>& squares) {
        long double low = 0, high = 0;
        long double totalArea = 0;

        // calculate total area and upper bound
        for (auto &sq : squares) {
            long double y = sq[1];
            long double side = sq[2];
            totalArea += side * side;
            high = max(high, y + side);
        }

        // binary search
        for (int i = 0; i < 60; i++) {
            long double mid = (low + high) / 2;
            if (check(mid, squares, totalArea))
                high = mid;
            else
                low = mid;
        }

        return (double)low;
    }
};
