#include <string>

class CText
{
public:
    CText();
    CText(std::string);
    std::string getText();
    ~CText();
private:
    std::string text;    
};