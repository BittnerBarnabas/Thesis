// RUN: %check_clang_tidy %s performance-inefficient-stream-use %t

// FIXME: Add something that triggers the check here.
void f();
// CHECK-MESSAGES: :[[@LINE-1]]:6: warning: function 'f' is insufficiently awesome [performance-inefficient-stream-use]

// FIXME: Verify the applied fix.
//   * Make the CHECK patterns specific enough and try to make verified lines
//     unique to avoid incorrect matches.
//   * Use {{}} for regular expressions.
// CHECK-FIXES: {{^}}void awesome_f();{{$}}

// FIXME: Add something that doesn't trigger the check here.
void awesome_f2();

namespace std {

template<class _CharT>
class basic_ostream {
public:
  basic_ostream& operator<<(int n);
  basic_ostream& operator<<(char c);
  basic_ostream& operator<<(const char* str);
};

template<class _CharT>
inline basic_ostream<_CharT>& endl(basic_ostream<_CharT> &__os) {
  return __os;
}

typedef basic_ostream<char> ostream;

ostream cout;

template<class _CharT>
basic_ostream<_CharT>& basic_ostream<_CharT>::operator<<(int n) {
  return *this;
}

template<class _CharT>
basic_ostream<_CharT>& basic_ostream<_CharT>::operator<<(char c) {
  return *this;
}

template<class _CharT>
basic_ostream<_CharT>& basic_ostream<_CharT>::operator<<(const char* str) {
  return *this;
}
}

void TestMultipleStringsInStream() {
    wchar_t a = 'a';
    std::cout << 3 << 3;
    std::cout << "a" << 'a' << "abc";
}

int main() {}
