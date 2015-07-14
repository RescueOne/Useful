# Overview

How this repo works is explained before

## ARCHIVE

Old code lives here, if you have any old files move that shit in here.

## PROTOTYPE

Code that is "just for fun" and things something different can be found here.

## Development

Code for individual working components of the arm is found here

## Useful

Thing repo has everything. Look here for circuit diagrams, datasheets, this readme and etc ...

## IMPLEMENTATION

The finally full working code for the robot!

# Other Information

Useful things that you should know I put in here :) luv broden
<br />
Should add a asection about proper code conventions so we can keep things consistent

## Git

#### Commands
// getting the repo
<br />
cd &lt;repo location&gt;
<br />
git init
<br />
git remote add origin &lt;url&gt;
<br />
git pull origin master
<br />
// if adding new changes
<br />
git add .
<br />
git commit -m "message"
<br />
git push origin master
<br />
// Branching
<br />
git branch &lt;name&gt;
<br />
git checkout &lt;name&gt;
<br />
git merge &lt;name&gt; - merges the branch into master
<br />
For more info go here: https://git-scm.com/book/en/v2/Git-Branching-Basic-Branching-and-Merging

#### .gitignore

Used for removing things from commits like .DS_store
If .DS_store is already in your repo you're going to need to remove it with 
git rm .DS_store

## Useful
Useful files/pictures/datasheets/etc... can be found here

how to use markdown (language you right the README's in): http://daringfireball.net/projects/markdown/syntax

## Conventions

TODO - fill out more info here!
<br />
Type | Wire Colour

#### H-BRIDGES

<ul>
	<li>connection between components - Yellow</li>
	<li>Vcc - Orange</li>
	<li>GND - Blue</li>
</ul>

One H-bridge has Vcc as red and GND as green.


#### TINAH INPUTS

<ul>
	<li>Vcc (+5V) - </li>
</ul>

GND
