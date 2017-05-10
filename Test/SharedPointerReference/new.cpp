
//#include <type_traits>
//#include <memory>
namespace std {

template <class T, T val> struct integral_constant {
  static const T value = val;
  typedef T value_type;
  typedef integral_constant type;
};

typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;

template <class T> struct add_rvalue_reference { typedef T &&type; };

template <class T> typename add_rvalue_reference<T>::type declval();

template <class _Tp> void __test_convert(_Tp);

template <class _From, class _To, class = void>
struct is_convertible : public false_type {};

template <class _From, class _To>
struct is_convertible<_From, _To,
                             decltype(__test_convert<_To>(declval<_From>()))>
    : public true_type {};

template<bool, class T = void> struct enable_if{};
template<class T> struct enable_if<true, T> { typedef T value; };

template<class T>
class shared_ptr {
  struct __nat { int bool_val; };
public:
  shared_ptr(){}
  template<class _Yp>
  shared_ptr(const shared_ptr<_Yp>& __r, typename enable_if<is_convertible<_Yp*, T*>::value,__nat>::value = __nat());
};



template<class T>
shared_ptr<T> make_shared() {return shared_ptr<T>();}
}

struct A {};
struct B : A {};
struct C {};

void f(std::shared_ptr<A>){}

int main() {
  //std::cout << std::boolalpha << stdd::__is_convertible_test<B,C>::value;
   auto a = std::make_shared<B>();
   f(a);
   //f(a);
}
