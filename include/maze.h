/* This file is the header file for the maze class, each surface of the maze
 * if another subclass, the fullmaze class contains six surfaces
 * This program also alows users to design their own maze by moving the pacman
 * to design the maze structure, and also enabeles prototype experimentation
 * of the transfer between different surfaces
 * */
#ifndef MAZE_H
#define MAZE_H

static char inputMaze[] = {
"1111111111111111111111111"
"1000000000000000000000001"
"1011110111101011110111101"
"1011110111101011110111101"
"1000000000101010000000001"
"1011111010000000101111101"
"1000000010111110100000001"
"1011111010001000101111101"
"1000000011101011100000001"
"1111111010000000101111111"
"1000011010110110101100001"
"1011011010100010101101101"
"1000000000100010000000001"
"1011011010111110101101101"
"1000011010000000101100001"
"1111111010111110101111111"
"1000000000000000000000001"
"1011101011101011101011101"
"1011101000000000001011101"
"1000001011111111101000001"
"1111101000011100001011111"
"1000000011011101100000001"
"1011111111011101111111101"
"1000000000000000000000001"
"1111111111111111111111111"

"1110111111110111111110111"
"0000000000000000000000000"
"1011110111101011110111101"
"1011110111101011110111101"
"1000000000101010000000001"
"1011111010000000101111101"
"1000000010111110100000001"
"1011111010001000101111101"
"1000000011101011100000001"
"1111111010000000101111111"
"1000011010110110101100001"
"1011011010100010101101101"
"0000000000100010000000000"
"1011011010111110101101101"
"1000011010000000101100001"
"1111111010111110101111111"
"1000000000000000000000001"
"1011101011101011101011101"
"1011101000000000001011101"
"1000001011111111101000001"
"1111101000011100001011111"
"1000000011011101100000001"
"1011111111011101111111101"
"0000000000000000000000000"
"1110111111110111111110111"

"1110111111110111111110111"
"0000000000000000000000000"
"1011110111101011110111101"
"1011110111101011110111101"
"1000000000101010000000001"
"1011111010000000101111101"
"1000000010111110100000001"
"1011111010001000101111101"
"1000000011101011100000001"
"1111111010000000101111111"
"1000011010110110101100001"
"1011011010100010101101101"
"0000000000100010000000000"
"1011011010111110101101101"
"1000011010000000101100001"
"1111111010111110101111111"
"1000000000000000000000001"
"1011101011101011101011101"
"1011101000000000001011101"
"1000001011111111101000001"
"1111101000011100001011111"
"1000000011011101100000001"
"1011111111011101111111101"
"0000000000000000000000000"
"1110111111110111111110111"

"1110111111110111111110111"
"0000000000000000000000000"
"1011110111101011110111101"
"1011110111101011110111101"
"1000000000101010000000001"
"1011111010000000101111101"
"1000000010111110100000001"
"1011111010001000101111101"
"1000000011101011100000001"
"1111111010000000101111111"
"1000011010110110101100001"
"1011011010100010101101101"
"0000000000100010000000000"
"1011011010111110101101101"
"1000011010001000101100001"
"1111111010111110101111111"
"1000000000000000000000001"
"1011101011101011101011101"
"1011101000000000001011101"
"1000001011111111101000001"
"1111101000011100001011111"
"1000000011011101100000001"
"1011111111011101111111101"
"0000000000000000000000000"
"1110111111110111111110111"

"1110111111110111111110111"
"0000000000000000000000000"
"1011110111101011110111101"
"1011110111101011110111101"
"1000000000101010000000001"
"1011111010000000101111101"
"1000000010111110100000001"
"1011111010001000101111101"
"1000000011101011100000001"
"1111111010000000101111111"
"1000011010110110101100001"
"1011011010100010101101101"
"0000000000100010000000000"
"1011011010111110101101101"
"1000011010000000101100001"
"1111111010111110101111111"
"1000000000000000000000001"
"1011101011101011101011101"
"1011101000000000001011101"
"1000001011111111101000001"
"1111101000011100001011111"
"1000000011011101100000001"
"1011111111011101111111101"
"0000000000000000000000000"
"1110111111110111111110111"

"1111111111111111111111111"
"1000000000000000000000001"
"1011110111101011110111101"
"1011110111101011110111101"
"1000000000101010000000001"
"1011111010000000101111101"
"1000000010111110100000001"
"1011111010001000101111101"
"1000000011101011100000001"
"1111111010000000101111111"
"1000011010110110101100001"
"1011011010100010101101101"
"1000000000100010000000001"
"1011011010111110101101101"
"1000011010000000101100001"
"1111111010111110101111111"
"1000000000000000000000001"
"1011101011101011101011101"
"1011101000000000001011101"
"1000001011111111101000001"
"1111101000011100001011111"
"1000000011011101100000001"
"1011111111011101111111101"
"1000000000000000000000001"
"1111111111111111111111111"
};

/* Global variables shared by the whole program */
extern int blockSize_2D;
extern const int blockNumber;  // the size of the surface array
extern double myPi;
extern const int ghostNumber;


/* the pacman x,y coordinates*/
typedef struct CoordStruct{
  int x;
  int y;
}Coord;

typedef struct GhostStruct{
  int x;
  int y;
  int prevX,prevY;
  int surface;
  int xdir,ydir;
  int dirIndex;
  int mode;
}Ghost;

typedef struct PacmManStruct{
  int x;
  int y;
  int prevX,prevY;
  int surface;
  int xdir,ydir;
  bool powerState;
}PacMan;


/* the rgb information */
typedef struct ColorStruct{
  int r;
  int g;
  int b;
}Color;


/* A maze on a single surface, uses an array to represent
 * each block
 */
class Maze{
  protected:
    int **maze;
    int pacState; // 0 not in this surface, 1 not clear box, 2 clear box
    Coord pacman;
    Coord cherry;
    std::vector<bool> ghostState;
    Coord origin; // the (0,0) point on the global coordinates
    char orientation;
    Color baseColor; // R,G,B

  public:
    Maze();
    ~Maze();
    void SetMaze(int,int,int); // set the maze array
    void SetCherry();
    void SetPowerPells();
    void SetOrientation(char); // set the maze's relative position to other surfaces
    void Draw();
    void DrawGhost(int,int);
    void Print();
    bool EatPerl(int,int);
    bool EatCherry(int,int);
    bool EatPowerPell(int,int);
    void Activate(PacMan,int);// changes pacman coordinates and state
    void Deactivate(); // turns down the pacman drawing
    const int ReturnElement(int,int)const; // return the element of a coordinate
    int ReturnPerls();
};

class FullMaze{
  private:
    Maze maze[6]; // 0-T,1-N,2-W,3-S,4-E,5-B
    std::vector<Ghost> ghost;
    int ghostControl;
    int ghostLives;
    //char pacSurface;
    int curState; // 1 for not clear, 2 for clear box
    //int xdir,ydir;
  public:
    PacMan pacman;
    int ghost_eaten;
    int perls;
    int cherries;
    FullMaze();
    void Draw();
    void Print();
    void Move();
    void GhostMove(int);
    void Restart();
    void Restore();
    void RandomDirection(int);
    void ChangeDirection(int);
    void ChangeGhostDirection(int);
    int ReturnGhostControl();
    bool CollisionDetect();
    void SetMaze();
    void SetCherry();
    void SetPowerPells();
    const void ReturnMaze(int***)const;
    void ReturnPacman(PacMan*);
    void ReturnGhost(std::vector<Ghost>*);
    int ReturnPerls();
    void ChangeIndexToDir(int);
    void SwitchGhost(int);
    int surfaceToNum(char);
    char NumToSurface(int);
    void GhostChase(int,int,int);
};

#endif
