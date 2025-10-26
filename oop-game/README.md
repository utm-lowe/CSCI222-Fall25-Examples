# 🕹️ Block Game
In this assignment, you will be implementing a block-out style game which is
playable in the terminal. The starter files contain the elements we developed in
class:

- A ball
- A paddle
- Walls

The starter files also contain the class which handles the creation of the game
and resets the ball when it leaves the play field. 

Your task is to extend this setup into a full-fledged playable game. This is
also your chance to be creative, and if you add more features than those
outlined in the next section, you will earn extra credit. Also, please feel free
to keep and play with this code. It can be a lot of fun to make these simple
terminal games!

***

## 🎮 Game Requirements
At a minimum you need to implement the following on-screen elements:

1. 🧱 **Bricks** - The object of the game is to eliminate all the bricks.
2. 💯 **Scoreboard** - A scoreboard which indicates the player's current score.
3. 🖖 **Lives** - An indicator of how many lives the player has remaining.
4. 👩‍💻 **Game Over Dialog** - Ask the player if they want to play again.

The ultimate design of these four objects is up to you, though there are few
expectations regarding the behavior of the game. The required behaviors are as
follows:

- The player should start the game with 3 lives and a score of 0.
- The bricks should occupy at least 5 rows in the top part of the play field. 
- Bricks should all be the same size.
- Bricks should be of more than one color. Have fun designing them!
- When the ball bounces off the brick the following should happen:
  - The brick should vanish.
  - The player's score should increase by some amount. (You can decide the point
    values.)
- When all the bricks are cleared, the game should reset all the bricks and the
  ball should return to its reset position.
- When the ball leaves the play field, the following should happen:
  - The player's life counter should decrease by 1.
  - The ball should return to the reset position.
- When the player's life counter goes to zero, the game over dialog should be
  displayed. 
- If the player chooses to play again on the game over dialog, the game will
  reset.

***

## 🏛️ Overall Structure
This game is based on a small OOP library called "termplay". This library is
fully contained in the `termplay` directory with `termplay/include` containing
the header files. You should not need to alter anything in this directory!
You should, however, read the documentation in the header files to get a 
good idea bout how the library works. The complete source code of the 
library is provided for you, but you should only need to look in the 
`termplay/src` directory if you are curious about how it works.

Along with the library, this program is divided up into several directories.
This is fairly common when working with larger coding projects as it helps
cut down on clutter. The directory structure is:

- 📁 **include** - Header `.h` files for the user application. 
- 📁 **src** - Implementation `.cpp` files for the user application
- 📂 **termplay** - The termplay library. Do not edit files in here!
  - 📁 **include** - The header `.h` files of the termplay library. Lots of
    helpful documentation can be read here!
  - 📁 **lib** - The implementation `.cpp` files for the library. This is also
    where the compiled library archive `libtermplay.a` is placed after
    compilation.

There is also a `Makefile` which will build the program. To build and run 
this game, all you need to do is this:

```
$ make
 ... Make will compile the program ...
$ ./game
```

Note that as you add your own objects, you will need to edit make's object list:

```
OBJ=src/wall.o\
	src/paddle.o\
	src/ball.o\

```

What is going on here is that we only need to list the `.o` files for make to be
able to compile our objects. The `\` at the end of each line are there to allow
us to continue the `OBJ` variable on to the next row. Be sure you leave a blank
line after the final line (as shown above) otherwise the next line will be
included in the variable's value!

If you do this in a purely object oriented way, then this is the only part of
the `Makefile` you will need to alter.

***

## 🫆 Hints and Tips
The key to success in this assignment is effective object oriented thinking. 
To that end I recommend that you take the following procedure:

1. Identify the objects you need to create.
2. Determine what the base class of your objects will be. This will almost
   always be a `Thing` or a `MovingThing`.
3. Implement your object overriding methods as needed.
4. Get the objects to display on the screen.
5. Get the behavior of the object in.

Some other general advice:

- Be careful about what an object "knows." The game object is the overall
  arbiter of the game. It's the only thing with the complete picture.
- If you are doing this correctly, you should have easy access to all the
  information you need. If you find that you can't quite get at a required
  variable, you probably are putting things in the wrong object.
- Keep your files organized correctly. 
- Familiarize yourself with all of the `termplay` functions. Most of the 
  hard core game algorithms you'll need are implemented there. (Collision
  detection, collision resolution, etc.)
- Have fun! This is a game after all. Creating games is at least twice as
  fun as playing them. 😎

***

## 💳 Extra Credit Ideas
If you implement additional game features, you can earn extra credit. 
Some ideas include:

- Have the player earn extra lives. For example, maybe they get extra
  lives for every 10,000 points.
- Implement some concept of levels. You could have a rotating set of
  block patterns, for instance. Once the player clears one, go on to the
  next one.
- Introduce power-ups. Maybe these could make the paddle wider or slow 
  the ball down.
- Have the ball pause after each reset so the player can press a key
  to start the ball after each level change and/or after each ball reset.

These are, of course, just a few suggestions. The more creative you are,
the more credit you will earn.

Enjoy!

***

## ✅ Submission and Grading
Clearly, I cannot write an autograder for this assignment. Instead, I will
play your game and grade it according to the rubric shown below. To submit
your game, simply submit the URL of your repository on Canvas.

**Rubric** (150 points)
- **Brick Behavior** 30 points 
- **Scoreboard Behavior** 20 points
- **Lives Behavior** 20 points
- **Game Over Behavior** 30 points
- **Effective object oriented design** 30 points
- **Overall Code Quality** 20 points