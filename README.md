# Tbot
 This library is designed to work with telegram bots, interaction occurs through the open Telegram API and the https protocol.\
Using this library, you can easily send messages through telegram bots, you can send them from one bot or from several at once.\
The presented code is made in an object-oriented style, so you can quickly figure it out:
```c++
class Tbot {

    std::string token;
    std::string chat_id;
    std::string message;

public:
    Tbot(const std::string& token, const std::string& chat_id) {

        this->token = token;
        this->chat_id = chat_id;
    }
```
