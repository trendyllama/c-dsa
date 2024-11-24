# c-dsa

## Implementation Notes

- once I got around the semantic differences of pointers compared to the name semantics of python, implementing these data strcutures is relatively straightforward
- not going to lie - the syntax of c++ is not very elegant, but the semantics of what you are actually doing in the language is much more clear than modern languages where they automate more stuff away from you
- from my understanding, c++ just has a preprocessor, compiler, linker - once you somewhat understand these steps you have much more insight into what your code is actually doing

## Interesting Things

- template classes have to be implemented in the header files
  - this is counter-intuitive, but i guess the linker needs this to be the case to work
  - after I realized that nuance linking the files together into the main program was pretty easy - much more straightforward than some of the more automated build systems like go and rust

- header files are actually not that bad
  - keeping the declarations separate from the implementation (in most cases) is pretty good for understandability
  - it makes sense that the code in them is just copied and pasted into the main program then compiled into one executable together

- however, i have heard adding dependencies to c++ projects is pretty horrific
  - maybe this is just for precompiled dependencies
  - just adding a header file and compiling doesn't seem horrible
