// 문서 데이터와 파일 입출력

#include "TextEdit.h"
#include <fstream>

using namespace std;

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