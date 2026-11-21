// TextDocument.cpp
// TextDocument 클래스의 멤버 함수 정의
// - 화면 입출력(cin, cout)은 main.cpp에 두고, 여기서는 문서 데이터와 파일 입출력만 다룬다.

#include "TextEdit.h"
#include <fstream>   // ifstream, ofstream

using namespace std;

// 처음에는 비어 있는 새 문서로 시작한다. (lines와 fileName은 자동으로 비어 있다.)
//TextEdit::TextEdit() : modified(false) {
//}

//조회
// int TextEdit::getLineCount() const {
//     return static_cast<int>(lines.size());
// }

// bool TextEdit::isEmpty() const {
//     return lines.empty();
// }

// bool TextEdit::isValidIndex(int index) const {
//     return index >= 0 && index < getLineCount();
// }

// const string& TextEdit::getLine(int index) const {
//     // 줄 번호 확인은 호출하는 쪽에서 먼저 한다. 그래도 범위를 벗어나면 at()이 예외를 발생시킨다.
//     return lines.at(index);
// }