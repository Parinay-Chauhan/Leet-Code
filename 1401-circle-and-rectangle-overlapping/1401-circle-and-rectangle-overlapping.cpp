class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x = std::max(x1, std::min(xCenter, x2)) - xCenter;
        int y = std::max(y1, std::min(yCenter, y2)) - yCenter;

        return x * x + y * y <= radius * radius;
    }
};