#include <iostream>
#include <vector>

// Multi-player Connection System
struct Player {
    int id;
    std::string ip;
};

std::vector<Player> connected_players;

void add_player(int id, std::string ip) {
    if (connected_players.size() < 4) { // Max 4 players
        connected_players.push_back({id, ip});
        std::cout << "Player " << id << " joined from " << ip << std::endl;
    }
}