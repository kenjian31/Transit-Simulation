### Feedback for Lab 10

Run on February 28, 15:00:16 PM.


### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab10_advanced_git" exists.


### Git Usage

+ Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

		c1c08d158d00e2011ffc6fb0cd9ae9312ebb444e	refs/heads/devel

		0e48e60bfa35a5ca23c5b86d06e3d23db8e9f8bf	refs/heads/fix/01-compilation-errors

		2ca2b4a5766d53bffe7f7886e336edfe3f420a1e	refs/heads/master



+ Pass: Checking for the correct number of branches

Insufficient branches found (found=1, required=2):

fix/01-compilation-errors


#### Counting commits on devel

+ Pass: Checkout devel branch.



+ Pass: Gather commit history

		[Jian Wang] 2020-02-28 (HEAD -> devel, origin/devel) lab10 complete 

		[Jian Wang] 2020-02-28 lab10 complete 

		[Jian Wang] 2020-02-28 lab10 complete 

		[Jian Wang] 2020-02-28 lab10 complete 

		[Jian Wang] 2020-02-28 lab10 complete 

		[Jian Wang] 2020-02-28 lab10 complete 

		[Jian Wang] 2020-02-28 lab10 complete 

		[Jian Wang] 2020-02-28 Merge branch 'fix/01-compilation-errors' into devel 

		[Jian Wang] 2020-02-28 (origin/fix/01-compilation-errors, fix/01-compilation-errors) lab10 replace 

		[Jian Wang] 2020-02-28 lab10 src delete 

		[Jian Wang] 2020-02-28 replace src 

		[Jian Wang] 2020-02-28 delete src 



		[Jian Wang] 2020-02-28 lab09 

		[Jian Wang] 2020-02-28 lab09 







		[Jian Wang] 2020-02-24 Merge branch 'support-code' of github.umn.edu:umn-csci-3081-s20/csci3081-shared-upstream 








		[Jian Wang] 2020-02-24 fixed 















		[Jian Wang] 2020-02-22 lab08 fix 



		[Jian Wang] 2020-02-22 lab08 fixed 


		[Jian Wang] 2020-02-22 fixed 


		[Jian Wang] 2020-02-22 fixed 



		[Jian Wang] 2020-02-22 fixed 


		[Jian Wang] 2020-02-22 Merge branch 'master' of https://github.umn.edu/umn-csci-3081-s20/repo-wang8635 

		[Jian Wang] 2020-02-22 fixed 


		[Jian Wang] 2020-02-22 fixed 



		[Jian Wang] 2020-02-22 lab08 google test complete 

		[Jian Wang] 2020-02-22 Merge branch 'master' of https://github.umn.edu/umn-csci-3081-s20/repo-wang8635 























		[Jian Wang] 2020-02-20 Merge branch 'support-code' 

		[Jian Wang] 2020-02-20 Merge branch 'support-code' of github.umn.edu:umn-csci-3081-s20/csci3081-shared-upstream into support-code 















+ Pass: Check git commit history
Sufficient commits (found=28,required=4)


### Git Issue Usage

+ Pass: Configuring GHI

+ Pass: Run ghi for total number of open issues in Github repo (Found: 0)

+ Pass: Run ghi for total number of closed issues in Github repo (Found: 2)

[CLOSED issue #2] :  google style [enhancement]

[CLOSED issue #1] :  cpplint compilation  [bug] 1





+ Pass: Run ghi for total number of issues in Github repo (Found: 2, Expected: 2) 

 [OPEN issue #] : 

[CLOSED issue #2] :  google style [enhancement]

[CLOSED issue #1] :  cpplint compilation  [bug] 1

 




### Test that code on  devel compiles

+ Pass: Checkout devel branch.



+ Pass: Check that directory "project/src" exists.

+ Pass: Change into directory "project/src".

+ Pass: Check that file "makefile" exists.

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>==== Auto-Generating Dependencies for passenger_factory.cc. ====
==== Compiling passenger_factory.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_factory.o. ====
==== Auto-Generating Dependencies for bus.cc. ====
==== Compiling bus.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/bus.o. ====
==== Auto-Generating Dependencies for random_passenger_generator.cc. ====
==== Compiling random_passenger_generator.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/random_passenger_generator.o. ====
==== Auto-Generating Dependencies for passenger_loader.cc. ====
==== Compiling passenger_loader.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_loader.o. ====
==== Auto-Generating Dependencies for passenger.cc. ====
==== Compiling passenger.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger.o. ====
==== Auto-Generating Dependencies for passenger_generator.cc. ====
==== Compiling passenger_generator.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_generator.o. ====
==== Auto-Generating Dependencies for passenger_unloader.cc. ====
==== Compiling passenger_unloader.cc into /project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_unloader.o. ====
passenger_unloader.cc: In member function int PassengerUnloader::UnloadPassengers(std::__cxx11::list<Passenger*>*, Stop*):
passenger_unloader.cc:13:46: error: conversion from Passenger* to non-scalar type std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} requested
   for (std::list<Passenger *>::iterator it = *passengers->begin();
                                              ^~~~~~~~~~~~~~~~~~~~
passenger_unloader.cc:14:10: error: no match for operator!= (operand types are std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} and Passenger*)
       it != *passengers->end();
       ~~~^~~~~~~~~~~~~~~~~~~~~
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/list:63:0,
                 from ../src/passenger_unloader.h:9,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_list.h:194:7: note: candidate: bool std::_List_iterator< <template-parameter-1-1> >::operator!=(const _Self&) const [with _Tp = Passenger*; std::_List_iterator< <template-parameter-1-1> >::_Self = std::_List_iterator<Passenger*>]
       operator!=(const _Self& __x) const _GLIBCXX_NOEXCEPT
       ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_list.h:194:7: note:   no known conversion for argument 1 from Passenger* to const _Self& {aka const std::_List_iterator<Passenger*>&}
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/vector:64:0,
                 from ../src/data_structs.h:10,
                 from ../src/bus.h:13,
                 from ../src/stop.h:12,
                 from ../src/passenger_unloader.h:11,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_vector.h:1620:5: note: candidate: template<class _Tp, class _Alloc> bool std::operator!=(const std::vector<_Tp, _Alloc>&, const std::vector<_Tp, _Alloc>&)
     operator!=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_vector.h:1620:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::vector<_Tp, _Alloc>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/locale_facets.h:48:0,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/basic_ios.h:37,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ios:44,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ostream:38,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/iostream:39,
                 from ../src/passenger.h:9,
                 from ../src/passenger_unloader.h:10,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/streambuf_iterator.h:210:5: note: candidate: template<class _CharT, class _Traits> bool std::operator!=(const std::istreambuf_iterator<_CharT, _Traits>&, const std::istreambuf_iterator<_CharT, _Traits>&)
     operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/streambuf_iterator.h:210:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::istreambuf_iterator<_CharT, _Traits>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/ios_base.h:46:0,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ios:42,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ostream:38,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/iostream:39,
                 from ../src/passenger.h:9,
                 from ../src/passenger_unloader.h:10,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/system_error:331:3: note: candidate: bool std::operator!=(const std::error_condition&, const std::error_condition&)
   operator!=(const error_condition& __lhs,
   ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/system_error:331:3: note:   no known conversion for argument 1 from std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} to const std::error_condition&
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/system_error:327:3: note: candidate: bool std::operator!=(const std::error_condition&, const std::error_code&)
   operator!=(const error_condition& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/system_error:327:3: note:   no known conversion for argument 1 from std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} to const std::error_condition&
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/system_error:323:3: note: candidate: bool std::operator!=(const std::error_code&, const std::error_condition&)
   operator!=(const error_code& __lhs, const error_condition& __rhs) noexcept
   ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/system_error:323:3: note:   no known conversion for argument 1 from std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} to const std::error_code&
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/system_error:319:3: note: candidate: bool std::operator!=(const std::error_code&, const std::error_code&)
   operator!=(const error_code& __lhs, const error_code& __rhs) noexcept
   ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/system_error:319:3: note:   no known conversion for argument 1 from std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} to const std::error_code&
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/string:52:0,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/locale_classes.h:40,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/ios_base.h:41,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ios:42,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ostream:38,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/iostream:39,
                 from ../src/passenger.h:9,
                 from ../src/passenger_unloader.h:10,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/basic_string.h:5879:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator!=(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const _CharT*)
     operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/basic_string.h:5879:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/string:52:0,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/locale_classes.h:40,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/ios_base.h:41,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ios:42,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ostream:38,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/iostream:39,
                 from ../src/passenger.h:9,
                 from ../src/passenger_unloader.h:10,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/basic_string.h:5867:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator!=(const _CharT*, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator!=(const _CharT* __lhs,
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/basic_string.h:5867:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   mismatched types const _CharT* and std::_List_iterator<Passenger*>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/string:52:0,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/locale_classes.h:40,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/ios_base.h:41,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ios:42,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ostream:38,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/iostream:39,
                 from ../src/passenger.h:9,
                 from ../src/passenger_unloader.h:10,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/basic_string.h:5854:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> bool std::operator!=(const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/basic_string.h:5854:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/iosfwd:40:0,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ios:38,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/ostream:38,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/iostream:39,
                 from ../src/passenger.h:9,
                 from ../src/passenger_unloader.h:10,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/postypes.h:221:5: note: candidate: template<class _StateT> bool std::operator!=(const std::fpos<_StateT>&, const std::fpos<_StateT>&)
     operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/postypes.h:221:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::fpos<_StateT>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/list:63:0,
                 from ../src/passenger_unloader.h:9,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_list.h:1925:5: note: candidate: template<class _Tp, class _Alloc> bool std::operator!=(const std::__cxx11::list<_Tp, _Alloc>&, const std::__cxx11::list<_Tp, _Alloc>&)
     operator!=(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_list.h:1925:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::__cxx11::list<_Tp, _Alloc>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/list:63:0,
                 from ../src/passenger_unloader.h:9,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_list.h:293:5: note: candidate: template<class _Val> bool std::operator!=(const std::_List_iterator<_Tp>&, const std::_List_const_iterator<_Tp>&)
     operator!=(const _List_iterator<_Val>& __x,
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_list.h:293:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   mismatched types const std::_List_const_iterator<_Tp> and Passenger*
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/list:61:0,
                 from ../src/passenger_unloader.h:9,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/allocator.h:164:5: note: candidate: template<class _Tp> bool std::operator!=(const std::allocator<_Tp1>&, const std::allocator<_Tp1>&)
     operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/allocator.h:164:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::allocator<_Tp1>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/list:61:0,
                 from ../src/passenger_unloader.h:9,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/allocator.h:158:5: note: candidate: template<class _T1, class _T2> bool std::operator!=(const std::allocator<_Tp1>&, const std::allocator<_T2>&)
     operator!=(const allocator<_T1>&, const allocator<_T2>&)
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/allocator.h:158:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::allocator<_Tp1>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_algobase.h:67:0,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/list:60,
                 from ../src/passenger_unloader.h:9,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_iterator.h:1136:5: note: candidate: template<class _Iterator> bool std::operator!=(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorL>&)
     operator!=(const move_iterator<_Iterator>& __x,
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_iterator.h:1136:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::move_iterator<_IteratorL>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_algobase.h:67:0,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/list:60,
                 from ../src/passenger_unloader.h:9,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_iterator.h:1130:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator!=(const std::move_iterator<_IteratorL>&, const std::move_iterator<_IteratorR>&)
     operator!=(const move_iterator<_IteratorL>& __x,
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_iterator.h:1130:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::move_iterator<_IteratorL>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_algobase.h:67:0,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/list:60,
                 from ../src/passenger_unloader.h:9,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_iterator.h:349:5: note: candidate: template<class _IteratorL, class _IteratorR> bool std::operator!=(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_IteratorR>&)
     operator!=(const reverse_iterator<_IteratorL>& __x,
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_iterator.h:349:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::reverse_iterator<_Iterator>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_algobase.h:67:0,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/list:60,
                 from ../src/passenger_unloader.h:9,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_iterator.h:311:5: note: candidate: template<class _Iterator> bool std::operator!=(const std::reverse_iterator<_Iterator>&, const std::reverse_iterator<_Iterator>&)
     operator!=(const reverse_iterator<_Iterator>& __x,
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_iterator.h:311:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::reverse_iterator<_Iterator>
       it != *passengers->end();
                              ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_algobase.h:64:0,
                 from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/list:60,
                 from ../src/passenger_unloader.h:9,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_pair.h:456:5: note: candidate: template<class _T1, class _T2> constexpr bool std::operator!=(const std::pair<_T1, _T2>&, const std::pair<_T1, _T2>&)
     operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
     ^~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_pair.h:456:5: note:   template argument deduction/substitution failed:
passenger_unloader.cc:14:30: note:   std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} is not derived from const std::pair<_T1, _T2>
       it != *passengers->end();
                              ^
passenger_unloader.cc:20:33: error: no match for operator= (operand types are std::__cxx11::list<Passenger*>::iterator {aka std::_List_iterator<Passenger*>} and Passenger*)
       it = *passengers->erase(it);
                                 ^
In file included from /soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/list:63:0,
                 from ../src/passenger_unloader.h:9,
                 from passenger_unloader.cc:6:
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_list.h:128:12: note: candidate: std::_List_iterator<Passenger*>& std::_List_iterator<Passenger*>::operator=(const std::_List_iterator<Passenger*>&)
     struct _List_iterator
            ^~~~~~~~~~~~~~
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_list.h:128:12: note:   no known conversion for argument 1 from Passenger* to const std::_List_iterator<Passenger*>&
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_list.h:128:12: note: candidate: std::_List_iterator<Passenger*>& std::_List_iterator<Passenger*>::operator=(std::_List_iterator<Passenger*>&&)
/soft/gcc/7.1.0/Linux_x86_64/include/c++/7.1.0/bits/stl_list.h:128:12: note:   no known conversion for argument 1 from Passenger* to std::_List_iterator<Passenger*>&&
makefile:102: recipe for target '/project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_unloader.o' failed
make: *** [/project/grades/Spring-2020/csci3081/student-repos/Lab_10_Feedback/repo-wang8635/project/build/obj/transit_sim/passenger_unloader.o] Error 1
</pre>



