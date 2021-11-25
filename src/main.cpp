#include "sleepy_discord/sleepy_discord.h"
#include <iostream>

std::string token;

class MyClientClass : public SleepyDiscord::DiscordClient {
public:
	using SleepyDiscord::DiscordClient::DiscordClient;
	void onMessage(SleepyDiscord::Message message) override {
		if (message.startsWith("whcg hello"))
			sendMessage(message.channelID, "Hello " + message.author.username);
	}
};

int main(int argc, char* argv[]) {
        std::cout << "Welcome to Cosmic Discord Bot :)\n";
        if (argv[1])
        {
            token = argv[1];
        }
        else { 
            std::cout << "Token>";
            std::cin >> token;
            std::cout << "\n";
        }
	MyClientClass client(token, SleepyDiscord::USER_CONTROLED_THREADS);
	client.run();
}
