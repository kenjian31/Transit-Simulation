### Basic Feedback for Lab 08

Run on February 22, 19:44:29 PM.


#### System Files and Lab Directory Structure

+ Pass: Check that directory "googletest" exists.

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab08_google_tests" exists.

+ Pass: Make directory "Lab08_Testing".

+ Pass: Change into directory "Lab08_Testing".


#### Essential Files Exist

+ Pass: Check that file "../labs/lab08_google_tests/date_unittest.cc" exists.


### Testing correct implementation

+ Pass: Copy directory "Lab08 files.".



+ Pass: Copy directory "Files for correct version".



+ Pass: Change into directory "correct".

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>g++ -isystem ../../googletest/include -g -Wall -Wextra -pthread -c ./date.cc
g++ -isystem ../../googletest/include -g -Wall -Wextra -pthread -c ./date_unittest.cc
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h: In instantiation of testing::AssertionResult testing::internal::CmpHelperEQ(const char*, const char*, const T1&, const T2&) [with T1 = std::__cxx11::basic_string<char>; T2 = int]:
../../googletest/include/gtest/gtest.h:1421:23:   required from static testing::AssertionResult testing::internal::EqHelper<lhs_is_null_literal>::Compare(const char*, const char*, const T1&, const T2&) [with T1 = std::__cxx11::basic_string<char>; T2 = int; bool lhs_is_null_literal = false]
./date_unittest.cc:86:3:   required from here
../../googletest/include/gtest/gtest.h:1392:11: error: no match for operator== (operand types are const std::__cxx11::basic_string<char> and const int)
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from ../../googletest/include/gtest/internal/gtest-param-util.h:48:0,
                 from ../../googletest/include/gtest/gtest-param-test.h:192,
                 from ../../googletest/include/gtest/gtest.h:62,
                 from ./date_unittest.cc:1:
../../googletest/include/gtest/internal/gtest-linked_ptr.h:223:6: note: candidate: template<class T> bool testing::internal::operator==(T*, const testing::internal::linked_ptr<T>&)
 bool operator==(T* ptr, const linked_ptr<T>& x) {
      ^~~~~~~~
../../googletest/include/gtest/internal/gtest-linked_ptr.h:223:6: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   mismatched types T* and std::__cxx11::basic_string<char>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/iterator:66:0,
                 from ../../googletest/include/gtest/internal/gtest-param-util.h:39,
                 from ../../googletest/include/gtest/gtest-param-test.h:192,
                 from ../../googletest/include/gtest/gtest.h:62,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stream_iterator.h:130:5: note: candidate: template<class _Tp, class _CharT, class _Traits, class _Dist> bool std::operator==(const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>&, const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>&)
     operator==(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stream_iterator.h:130:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::istream_iterator<_Tp, _CharT, _Traits, _Dist>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/set:62:0,
                 from ../../googletest/include/gtest/internal/gtest-internal.h:59,
                 from ../../googletest/include/gtest/gtest.h:58,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_multiset.h:896:5: note: candidate: template<class _Key, class _Compare, class _Alloc> bool std::operator==(const std::multiset<_Key, _Compare, _Alloc>&, const std::multiset<_Key, _Compare, _Alloc>&)
     operator==(const multiset<_Key, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_multiset.h:896:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::multiset<_Key, _Compare, _Alloc>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/set:61:0,
                 from ../../googletest/include/gtest/internal/gtest-internal.h:59,
                 from ../../googletest/include/gtest/gtest.h:58,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_set.h:913:5: note: candidate: template<class _Key, class _Compare, class _Alloc> bool std::operator==(const std::set<_Key, _Compare, _Alloc>&, const std::set<_Key, _Compare, _Alloc>&)
     operator==(const set<_Key, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_set.h:913:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::set<_Key, _Compare, _Alloc>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/map:62:0,
                 from ../../googletest/include/gtest/internal/gtest-internal.h:58,
                 from ../../googletest/include/gtest/gtest.h:58,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_multimap.h:1059:5: note: candidate: template<class _Key, class _Tp, class _Compare, class _Alloc> bool std::operator==(const std::multimap<_Key, _Tp, _Compare, _Alloc>&, const std::multimap<_Key, _Tp, _Compare, _Alloc>&)
     operator==(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_multimap.h:1059:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::multimap<_Key, _Tp, _Compare, _Alloc>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/map:61:0,
                 from ../../googletest/include/gtest/internal/gtest-internal.h:58,
                 from ../../googletest/include/gtest/gtest.h:58,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_map.h:1394:5: note: candidate: template<class _Key, class _Tp, class _Compare, class _Alloc> bool std::operator==(const std::map<_Key, _Tp, _Compare, _Alloc>&, const std::map<_Key, _Tp, _Compare, _Alloc>&)
     operator==(const map<_Key, _Tp, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_map.h:1394:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::map<_Key, _Tp, _Compare, _Alloc>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/map:60:0,
                 from ../../googletest/include/gtest/internal/gtest-internal.h:58,
                 from ../../googletest/include/gtest/gtest.h:58,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_tree.h:1533:5: note: candidate: template<class _Key, class _Val, class _KeyOfValue, class _Compare, class _Alloc> bool std::operator==(const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&, const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&)
     operator==(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_tree.h:1533:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/map:60:0,
                 from ../../googletest/include/gtest/internal/gtest-internal.h:58,
                 from ../../googletest/include/gtest/gtest.h:58,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_tree.h:406:5: note: candidate: template<class _Val> bool std::operator==(const std::_Rb_tree_iterator<_Tp>&, const std::_Rb_tree_const_iterator<_Val>&)
     operator==(const _Rb_tree_iterator<_Val>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_tree.h:406:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::_Rb_tree_iterator<_Tp>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/locale_conv.h:41:0,
                 from /usr/include/c++/7/locale:43,
                 from /usr/include/c++/7/iomanip:43,
                 from ../../googletest/include/gtest/internal/gtest-internal.h:56,
                 from ../../googletest/include/gtest/gtest.h:58,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/unique_ptr.h:694:5: note: candidate: template<class _Tp, class _Dp> bool std::operator==(std::nullptr_t, const std::unique_ptr<_Tp, _Dp>&)
     operator==(nullptr_t, const unique_ptr<_Tp, _Dp>& __x) noexcept
     ^~~~~~~~
/usr/include/c++/7/bits/unique_ptr.h:694:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   mismatched types const std::unique_ptr<_Tp, _Dp> and const int
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/locale_conv.h:41:0,
                 from /usr/include/c++/7/locale:43,
                 from /usr/include/c++/7/iomanip:43,
                 from ../../googletest/include/gtest/internal/gtest-internal.h:56,
                 from ../../googletest/include/gtest/gtest.h:58,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/unique_ptr.h:689:5: note: candidate: template<class _Tp, class _Dp> bool std::operator==(const std::unique_ptr<_Tp, _Dp>&, std::nullptr_t)
     operator==(const unique_ptr<_Tp, _Dp>& __x, nullptr_t) noexcept
     ^~~~~~~~
/usr/include/c++/7/bits/unique_ptr.h:689:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::unique_ptr<_Tp, _Dp>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/locale_conv.h:41:0,
                 from /usr/include/c++/7/locale:43,
                 from /usr/include/c++/7/iomanip:43,
                 from ../../googletest/include/gtest/internal/gtest-internal.h:56,
                 from ../../googletest/include/gtest/gtest.h:58,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/unique_ptr.h:683:5: note: candidate: template<class _Tp, class _Dp, class _Up, class _Ep> bool std::operator==(const std::unique_ptr<_Tp, _Dp>&, const std::unique_ptr<_Up, _Ep>&)
     operator==(const unique_ptr<_Tp, _Dp>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/unique_ptr.h:683:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::unique_ptr<_Tp, _Dp>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from ../../googletest/include/gtest/internal/gtest-port.h:683:0,
                 from ../../googletest/include/gtest/internal/gtest-internal.h:40,
                 from ../../googletest/include/gtest/gtest.h:58,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/tuple:1397:5: note: candidate: template<class ... _TElements, class ... _UElements> constexpr bool std::operator==(const std::tuple<_Tps ...>&, const std::tuple<_Elements ...>&)
     operator==(const tuple<_TElements...>& __t,
     ^~~~~~~~
/usr/include/c++/7/tuple:1397:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::tuple<_Tps ...>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/tuple:39:0,
                 from ../../googletest/include/gtest/internal/gtest-port.h:683,
                 from ../../googletest/include/gtest/internal/gtest-internal.h:40,
                 from ../../googletest/include/gtest/gtest.h:58,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/array:252:5: note: candidate: template<class _Tp, long unsigned int _Nm> bool std::operator==(const std::array<_Tp, _Nm>&, const std::array<_Tp, _Nm>&)
     operator==(const array<_Tp, _Nm>& __one, const array<_Tp, _Nm>& __two)
     ^~~~~~~~
/usr/include/c++/7/array:252:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::array<_Tp, _Nm>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/vector:64:0,
                 from ../../googletest/include/gtest/gtest.h:56,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_vector.h:1601:5: note: candidate: template<class _Tp, class _Alloc> bool std::operator==(const std::vector<_Tp, _Alloc>&, const std::vector<_Tp, _Alloc>&)
     operator==(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_vector.h:1601:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::vector<_Tp, _Alloc>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/locale_facets.h:48:0,
                 from /usr/include/c++/7/bits/basic_ios.h:37,
                 from /usr/include/c++/7/ios:44,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/streambuf_iterator.h:204:5: note: candidate: template<class _CharT, class _Traits> bool std::operator==(const std::istreambuf_iterator<_CharT, _Traits>&, const std::istreambuf_iterator<_CharT, _Traits>&)
     operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
     ^~~~~~~~
/usr/include/c++/7/bits/streambuf_iterator.h:204:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::istreambuf_iterator<_CharT, _Traits>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/ios_base.h:46:0,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/system_error:311:3: note: candidate: bool std::operator==(const std::error_condition&, const std::error_condition&)
   operator==(const error_condition& __lhs,
   ^~~~~~~~
/usr/include/c++/7/system_error:311:3: note:   no known conversion for argument 1 from const std::__cxx11::basic_string<char> to const std::error_condition&
/usr/include/c++/7/system_error:304:3: note: candidate: bool std::operator==(const std::error_condition&, const std::error_code&)
   operator==(const error_condition& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:304:3: note:   no known conversion for argument 1 from const std::__cxx11::basic_string<char> to const std::error_condition&
/usr/include/c++/7/system_error:297:3: note: candidate: bool std::operator==(const std::error_code&, const std::error_condition&)
   operator==(const error_code& __lhs, const error_condition& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:297:3: note:   no known conversion for argument 1 from const std::__cxx11::basic_string<char> to const std::error_code&
/usr/include/c++/7/system_error:292:3: note: candidate: bool std::operator==(const std::error_code&, const std::error_code&)
   operator==(const error_code& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/usr/include/c++/7/system_error:292:3: note:   no known conversion for argument 1 from const std::__cxx11::basic_string<char> to const std::error_code&
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/c++/7/bits/locale_classes.h:40,
                 from /usr/include/c++/7/bits/ios_base.h:41,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/basic_string.h:6043:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const _CharT*)
     operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6043:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   mismatched types const _CharT* and int
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/c++/7/bits/locale_classes.h:40,
                 from /usr/include/c++/7/bits/ios_base.h:41,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/basic_string.h:6031:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const _CharT*, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator==(const _CharT* __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6031:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   mismatched types const _CharT* and std::__cxx11::basic_string<char>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/c++/7/bits/locale_classes.h:40,
                 from /usr/include/c++/7/bits/ios_base.h:41,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/basic_string.h:6017:5: note: candidate: template<class _CharT> typename __gnu_cxx::__enable_if<std::__is_char<_Tp>::__value, bool>::__type std::operator==(const std::__cxx11::basic_string<_CharT>&, const std::__cxx11::basic_string<_CharT>&)
     operator==(const basic_string<_CharT>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6017:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   mismatched types const std::__cxx11::basic_string<_CharT> and const int
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/c++/7/bits/locale_classes.h:40,
                 from /usr/include/c++/7/bits/ios_base.h:41,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/basic_string.h:6009:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator==(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6009:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   mismatched types const std::__cxx11::basic_string<_CharT, _Traits, _Alloc> and const int
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/string:41:0,
                 from /usr/include/c++/7/bits/locale_classes.h:40,
                 from /usr/include/c++/7/bits/ios_base.h:41,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/allocator.h:152:5: note: candidate: template<class _Tp> bool std::operator==(const std::allocator<_CharT>&, const std::allocator<_CharT>&)
     operator==(const allocator<_Tp>&, const allocator<_Tp>&)
     ^~~~~~~~
/usr/include/c++/7/bits/allocator.h:152:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::allocator<_CharT>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/string:41:0,
                 from /usr/include/c++/7/bits/locale_classes.h:40,
                 from /usr/include/c++/7/bits/ios_base.h:41,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/allocator.h:146:5: note: candidate: template<class _T1, class _T2> bool std::operator==(const std::allocator<_CharT>&, const std::allocator<_T2>&)
     operator==(const allocator<_T1>&, const allocator<_T2>&)
     ^~~~~~~~
/usr/include/c++/7/bits/allocator.h:146:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::allocator<_CharT>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/bits/char_traits.h:39,
                 from /usr/include/c++/7/ios:40,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_iterator.h:1127:5: note: candidate: template<class _Iterator> bool std::operator==(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorL>&)
     operator==(const move_iterator<_Iterator>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:1127:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::move_iterator<_IteratorL>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/bits/char_traits.h:39,
                 from /usr/include/c++/7/ios:40,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_iterator.h:1121:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator==(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorR>&)
     operator==(const move_iterator<_IteratorL>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:1121:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::move_iterator<_IteratorL>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/bits/char_traits.h:39,
                 from /usr/include/c++/7/ios:40,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_iterator.h:340:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator==(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_IteratorR>&)
     operator==(const reverse_iterator<_IteratorL>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:340:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::reverse_iterator<_Iterator>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/bits/char_traits.h:39,
                 from /usr/include/c++/7/ios:40,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_iterator.h:302:5: note: candidate: template<class _Iterator> bool std::operator==(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_Iterator>&)
     operator==(const reverse_iterator<_Iterator>& __x,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:302:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::reverse_iterator<_Iterator>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:64:0,
                 from /usr/include/c++/7/bits/char_traits.h:39,
                 from /usr/include/c++/7/ios:40,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_pair.h:448:5: note: candidate: template<class _T1, class _T2> constexpr bool std::operator==(const std::pair<_T1, _T2>&, const std::pair<_T1, _T2>&)
     operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
     ^~~~~~~~
/usr/include/c++/7/bits/stl_pair.h:448:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::pair<_T1, _T2>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/iosfwd:40:0,
                 from /usr/include/c++/7/ios:38,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/postypes.h:216:5: note: candidate: template<class _StateT> bool std::operator==(const std::fpos<_StateT>&, const std::fpos<_StateT>&)
     operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
     ^~~~~~~~
/usr/include/c++/7/bits/postypes.h:216:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const std::fpos<_StateT>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/x86_64-linux-gnu/c++/7/bits/c++allocator.h:33:0,
                 from /usr/include/c++/7/bits/allocator.h:46,
                 from /usr/include/c++/7/string:41,
                 from /usr/include/c++/7/bits/locale_classes.h:40,
                 from /usr/include/c++/7/bits/ios_base.h:41,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/ext/new_allocator.h:155:5: note: candidate: template<class _Tp> bool __gnu_cxx::operator==(const __gnu_cxx::new_allocator<_Tp>&, const __gnu_cxx::new_allocator<_Tp>&)
     operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
     ^~~~~~~~
/usr/include/c++/7/ext/new_allocator.h:155:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const __gnu_cxx::new_allocator<_Tp>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/bits/char_traits.h:39,
                 from /usr/include/c++/7/ios:40,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_iterator.h:869:5: note: candidate: template<class _Iterator, class _Container> bool __gnu_cxx::operator==(const __gnu_cxx::__normal_iterator<_Iterator, _Container>&, const __gnu_cxx::__normal_iterator<_Iterator, _Container>&)
     operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:869:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const __gnu_cxx::__normal_iterator<_Iterator, _Container>
   if (lhs == rhs) {
       ~~~~^~~~~~
In file included from /usr/include/c++/7/bits/stl_algobase.h:67:0,
                 from /usr/include/c++/7/bits/char_traits.h:39,
                 from /usr/include/c++/7/ios:40,
                 from /usr/include/c++/7/ostream:38,
                 from ../../googletest/include/gtest/gtest.h:55,
                 from ./date_unittest.cc:1:
/usr/include/c++/7/bits/stl_iterator.h:862:5: note: candidate: template<class _IteratorL, class _IteratorR, class _Container> bool __gnu_cxx::operator==(const __gnu_cxx::__normal_iterator<_IteratorL, _Container>&, const __gnu_cxx::__normal_iterator<_IteratorR, _Container>&)
     operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
     ^~~~~~~~
/usr/include/c++/7/bits/stl_iterator.h:862:5: note:   template argument deduction/substitution failed:
In file included from ./date_unittest.cc:1:0:
../../googletest/include/gtest/gtest.h:1392:11: note:   const std::__cxx11::basic_string<char> is not derived from const __gnu_cxx::__normal_iterator<_IteratorL, _Container>
   if (lhs == rhs) {
       ~~~~^~~~~~
Makefile:85: recipe for target 'date_unittest.o' failed
make: *** [date_unittest.o] Error 1
</pre>



+ Skip: Check that file "date_unittest" exists.

  This test was not run because of an earlier failing test.

+ Skip: Get all google tests.

  This test was not run because of an earlier failing test.


#### Results


### Testing Mutants


***Note: This is just the basic feedback.  The feedback that includes the following mutants is run daily as a batch process (click link below)***


Link to full feedback: [Lab_08_Feedback.md](Lab_08_Feedback.md)



 __Below are the mutants that your tests will need to find for the Feedback__:


 * __Mutant:__ Dates constructed with epoch are about 70 years in the future


 * __Mutant:__ Days between calculation seems to be much larger than it should be.


 * __Mutant:__ Dates from GetDate are missing a character


 * __Mutant:__ Todays date month off by one


 * __Mutant:__ 1/1/2016 to 3/1/2016 is 60 days, but this version returns 59


 * __Mutant:__ Dates from GetUsDate are not in the right format (same as GetDate?)


 * __Mutant:__ operator-: Probably a copy paste error


 * __Mutant:__ Developer thought months should be zero-indexed


 * __Mutant:__ Some dates dont have leading zeroes

