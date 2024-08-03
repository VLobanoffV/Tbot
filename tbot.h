#pragma once
#include <string>
#include <vector>
#include <iostream>

namespace tb {

    class Tbot {

        std::string token;
        std::string chat_id;
        std::string message;
        const std::string tgApi = "https://api.telegram.org/bot";

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

            for (int i = 0; i < tokens.size(); i++)
            {

                std::string url = tgApi + tokens[i] + "/sendMessage";
                std::string command = "curl -s -X POST " + url + " -d chat_id=" + chat_id + " -d text=\"" + message + "\"";
                result += std::system(command.c_str());
                system("cls");

            }
            return result;
        }

        int send_messages(std::string message) {

            int result = 0;

            std::string url = tgApi + token + "/sendMessage";
            std::string command = "curl -s -X POST " + url + " -d chat_id=" + chat_id + " -d text=\"" + message + "\"";
            result += std::system(command.c_str());
            system("cls");

            return result;
        }

        std::string GetUpdates() {

            std::string json;
            std::string url = tgApi + token + "/getUpdates";
            std::string command = "curl -s -X POST " + url;
            json += std::system(command.c_str());
          
            return json;
        }

        std::string SetWebHook(const std::string& token, const std::string domain_ip, const std::string path) {

            std::string jResult;
            std::string url = tgApi + token + "/setwebhook" + "?url=https://" + domain_ip + "/" + path;
            std::string command = "curl -s -X POST " + url;
            jResult += std::system(command.c_str());

            return jResult;
        }
        
    };

}

