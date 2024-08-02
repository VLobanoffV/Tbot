#pragma once
#include <string>
#include <vector>
#include <iostream>

namespace tb {

    class Tbot {

        std::string token;
        std::string chat_id;
        std::string message;

    public:
        Tbot(const std::string& token, const std::string& chat_id) {

            this->token = token;
            this->chat_id = chat_id;
        }

        Tbot() {

        }

        ~Tbot() {

        }

        int send_messages(const std::vector<std::string>& tokens, const std::string& chat_id, std::string message) {

            int result = 0;

            if (message == "close")
            {
                return result = 1;
            }


            for (int i = 0; i < tokens.size(); i++)
            {

                std::string url = "https://api.telegram.org/bot" + tokens[i] + "/sendMessage";
                std::string command = "curl -s -X POST " + url + " -d chat_id=" + chat_id + " -d text=\"" + message + "\"";
                result += std::system(command.c_str());
                system("cls");

            }
            return result;
        }

        int send_messages(std::string message) {

            int result = 0;

            std::string url = "https://api.telegram.org/bot" + token + "/sendMessage";
            std::string command = "curl -s -X POST " + url + " -d chat_id=" + chat_id + " -d text=\"" + message + "\"";
            result += std::system(command.c_str());
            system("cls");

            return result;
        }

        std::string GetUpdates() {

            std::string json;

            std::string url = "https://api.telegram.org/bot" + token + "/getUpdates";
            std::string command = "curl -s -X POST " + url;
            json += std::system(command.c_str());

            return json;

        }

    };

}

