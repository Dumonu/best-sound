# best-sound

Randomly generates a musical bytestream that can be played by piping to aplay or other similar utility.<br />
Requires a player capable of playing a bytestream from stdin.

Instuctions (Linux):<br />
Compile:<br />
gcc sound.c -o sound<br />
Run:<br />
./sound | aplay (Runs using random values for len, str1, str2, and bs1)<br />
./sound [len] [str1] [str2] [bs1] | aplay (Runs using specific values for len, str1, str2, and bs1)

len: The length of str1 and str2; must be <= the length of the smaller of the two strings.<br />
str1 and str2: Used to determine what notes are played<br />
Note: You must escape all special characters in str1 and str2 to allow it to properly read them.<br />
bs1: value of a specific bitshift. As of right now, uncertain how it effects the music.<br />

Contributors:<br />
Oskari Pirhonen<br />
Jacob Cherry

Based on Bitshift Variations in C Minor, by Robert Skmiles.<br />
To play the Bitshift Variations, run ./sound 8 BY\}6YB6\% Qj\}6jQ6\% 4 | aplay
