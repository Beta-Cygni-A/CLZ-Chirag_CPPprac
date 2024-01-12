This is a test project for sqlite. I am using this as a test ground so I can
use what I learn and apply it to the program. 

This directory has folders include and src. Include houses the headers. The 
only header you need to include is headers.h, which is meant to include all 
the other headers, though currently I have some defenitions in there that 
ideally would be moved into another header but this is test code right, 
it's not the best but it should work lol. In src directory, main.cpp is of 
course main, func.cpp has functions in it, ver.cpp is a main.cpp that shows
you what version of sqlite you have installed, FBcompile.txt has a clang 
compiler command, so if you are on FreeBSD and using clang you can just go 
"./FBcompile.txt" to execute the code. Maybe we will setup a script, cmake,
or multiple text files for compiling in the test stage. I will add a compile
command for those on Linux, since FreeBSD has diffrent directories even
though it is a descendant of UNIX. If you want a windows one I can try to
help create a file for that. I can't test the Linux one but it should be 
correct.

mini_car is a directory that has code exploring program structure and design.

test directory has code I got from the tutorial for sqlite on their website,
modafied to be more c++, since it was a c program. I haven't really commented
my code, been just playing with it and testing it. The stuff that helped me 
work on this was sqlite docs, internet searches on sqlite3 and SQL code, 
chatgpt, and debugging for sure.

I am just putting this on the repo so that others can see the latest working
stuff and play with it. 

Note: Like the docs say, there is alot of functions you can use but the main
core ones you can do like everything in. When you run that command to open
the database, if it doesn't exist, it will be created. Then store a SQL code
in a c-style string and have sqite exececute it. Then close the database at
end of program. The docs aren't an easy read, but once you read through the
important parts, search around, play with the program, I think you'll get a
feel for how it works. I'm no master at this, still learning, I'm just glad
that my program works :) and that I can understand some if it.

Helpful links:

https://www.sqlite.org/c3ref/intro.html
https://chat.openai.com/auth/login

This would make the code look beautiful and alot easier but it's good to learn
from the docs and how to interop straight with a library written in C.
https://github.com/SqliteModernCpp/sqlite_modern_cpp
