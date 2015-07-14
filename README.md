# Git

## Commands
// getting the repo
cd &lt;repo location&gt;
git init
git remote add origin &lt;url&gt;
git pull origin master
// if adding new changes
git add .
git commit -m "message"
git push origin master
// Branching
git branch &lt;name&gt;
git checkout &lt;name&gt;
git merge &lt;name&gt; - merges the branch into master
For more info go here: https://git-scm.com/book/en/v2/Git-Branching-Basic-Branching-and-Merging

## .gitignore

Used for removing things from commits like .DS_store
If .DS_store is already in your repo you're going to need to remove it with 
git rm .DS_store

# Useful
Useful files/pictures/datasheets/etc... can be found here

how to use markdown (language you right the README's in): http://daringfireball.net/projects/markdown/syntax

# Conventions

TODO - fill out more info here!

## H-BRIDGES
Yellow - connection between components
Orange - Vcc
Blue - GND



## TINAH INPUTS

Type | Wire Colour
Vcc (+5V)
GND
