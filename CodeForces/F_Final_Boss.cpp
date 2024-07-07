#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Attack {
    int damage;
    int cooldown;
    int next_available_turn;

    Attack(int dmg, int cd) : damage(dmg), cooldown(cd), next_available_turn(0) {}
};

bool compare(Attack &a, Attack &b) {
    return (a.damage / (a.cooldown + 1.0)) > (b.damage / (b.cooldown + 1.0));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int h, n;
        cin >> h >> n;

        vector<Attack> attacks;
        for (int i = 0; i < n; ++i) {
            int damage;
            cin >> damage;
            attacks.emplace_back(damage, 0);
        }

        for (int i = 0; i < n; ++i) {
            int cooldown;
            cin >> cooldown;
            attacks[i].cooldown = cooldown;
        }

        // Sort attacks based on their damage per cooldown
        sort(attacks.begin(), attacks.end(), compare);

        // Priority queue to simulate cooldown management
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // Initial load of all attacks
        for (int i = 0; i < n; ++i) {
            pq.emplace(0, i);  // Store the turn and index of the attack
        }

        int turns = 0;
        while (h > 0) {
            ++turns;
            int damage_this_turn = 0;
            vector<pair<int, int>> next_round;

            // Collect all attacks available this turn
            while (!pq.empty() && pq.top().first <= turns) {
                pair<int, int> current = pq.top();
                pq.pop();
                int index = current.second;
                damage_this_turn += attacks[index].damage;
                attacks[index].next_available_turn = turns + attacks[index].cooldown;
                next_round.emplace_back(attacks[index].next_available_turn, index);
            }

            // Apply damage to the boss
            h -= damage_this_turn;

            // Add all the used attacks back to the priority queue with updated availability
            for (auto &attack_pair : next_round) {
                pq.emplace(attack_pair);
            }
        }

        cout << turns << '\n';
    }

    return 0;
}
