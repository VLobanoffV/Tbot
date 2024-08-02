#include "tbot.h"


int main() {

    setlocale(LC_ALL, "ru");

    // CONSTRUCTOR 1, NEWSLETTER WITH ONE BOT
    tb::Tbot Bot("YOUR TOKEN", "YOUR CHAT_ID");
    Bot.send_messages("YOUR MESSAGE");

    
    // CONSTRUCTOR 2 NEWSLETTER WITH MANY BOTS
    std::vector<std::string> tokens;
    // ADDING TOKENS FOR ALL BOTS
    tokens.push_back("TOKEN1");
    tokens.push_back("TOKEN2");

    tb::Tbot Bot1("YOUR TOKEN", "YOUR CHAT_ID");

    std::cout << Bot1.GetUpdates() << std::endl;

    return 0;
}
    
    