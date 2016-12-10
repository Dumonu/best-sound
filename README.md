# best-sound

Randomly generates a musical bytestream that can be played by piping to aplay or other similar utility.
Requires a player capable of playing a bytestream from stdin.

Instuctions (Linux):
Compile:
gcc sound.c -o sound
Run:
./sound | aplay
