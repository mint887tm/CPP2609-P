#ifndef TEXT_DOCUMENT_H
#define TEXT_DOCUMENT_H

#include <string>
#include <vector>

class TextDocument {
private:
    std::vector<std::string> lines;   
    std::string fileName;            
    bool modified;                    

public:
    TextDocument();

//조회
    int getLineCount() const;                                      
    bool isEmpty() const;                                           
    bool isValidIndex(int index) const;                             
    const std::string& getLine(int index) const;                    
    int getCharCount() const;                                       
    int countInLine(int index, const std::string& keyword) const;   
    std::string getFileName() const;                                
    std::string getDisplayName() const;                             
    bool isModified() const;                                       
    std::string getStatusText() const;                             

//편집
    void clear();                                             
    void addLine(const std::string& text);                       
    bool setLine(int index, const std::string& text);          
    bool removeLine(int index);                                  
    int replaceInLine(int index, const std::string& from,
                      const std::string& to);                   

    bool loadFromFile(const std::string& name);                   
    bool saveToFile(const std::string& name);                    
};

//같은 이름 파일 확인
bool fileExists(const std::string& name);

#endif