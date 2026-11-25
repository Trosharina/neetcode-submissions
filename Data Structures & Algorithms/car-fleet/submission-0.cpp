class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars(n);
        for (int i = 0; i < n; i++) {
            cars[i] = {position[i], (double)(target - position[i]) / speed[i]};
        }
        sort(cars.begin(), cars.end());

        int fleet = 0;
        double max_time = 0.0;
        for (int i = n - 1; i >= 0; i--) {
            if (cars[i].second > max_time) {
                max_time = cars[i].second;
                fleet++;
            }
        }
        return fleet;
    }
};
