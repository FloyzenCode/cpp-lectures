#include <iostream>
#include <string>
#include <thread>
#include <chrono>

class TextEditor
{
private:
    std::string text;

public:
    void setText(const std::string &newText)
    {
        text = newText;
    }

    void appendText(const std::string &additionalText)
    {
        text += additionalText;
    }

    void replaceText(const std::string &oldText, const std::string &newText)
    {
        size_t pos = text.find(oldText);

        while (pos != std::string::npos)
        {
            text.replace(pos, oldText.length(), newText);
            pos = text.find(oldText, pos + newText.length());
        }
    }

    std::string getText() const
    {
        return text;
    }

    void start()
    {
        TextEditor editor;
        editor.setText("This is a sample text.");

        std::cout << "Original text: " << editor.getText() << std::endl;

        editor.appendText(" Additional text.");
        std::cout << "After appending: " << editor.getText() << std::endl;

        editor.replaceText("sample", "modified");
        std::cout << "After replacing: " << editor.getText() << std::endl;
    };
};

int main()
{
    TextEditor object;
    object.start();
    return 0;
}
