#Thesis

Contents
-------

 - clang-tools-extra: Contains the source code of the checkers and its short documentation.
 - Thesis: Contains the thesis itself, and related documents

How to see the diff with the original
---------
To see the difference between a snapshot of clang-tools-extra and the current state.
 

    git clone <repo-url>
    git remote add upstream https://github.com/BittnerBarnabas/clang-tools-extra.git
    git fetch upstream
    git diff upstream/master HEAD:clang-tools-extra/
