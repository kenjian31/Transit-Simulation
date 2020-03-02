### Feedback for Lab 10

Run on March 02, 09:37:28 AM.


### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab10_advanced_git" exists.


### Git Usage

+ Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

		4615cb009afbe00bdd344dc68fe869587b11949d	refs/heads/devel

		0e48e60bfa35a5ca23c5b86d06e3d23db8e9f8bf	refs/heads/fix/01-compilation-errors

		5db3ea051b598ef08044a2ca7433d98281d4f104	refs/heads/master



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
Sufficient commits (found=31,required=4)


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

+ Pass: Check that make compiles.



