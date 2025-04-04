/*
 * Implements Tiles (for a puzzle size of d x d)
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define DIM_MIN 3
#define DIM_MAX 9
#define COLOR "\033[32m"

// Prototypes
void terra_sleep(int milliseconds);
int validate_arguments(int argc, string argv[]);

void start_log();
void log_board();
void end_log();
void log_move(int tile);

void clear_screen(void);
void greet_user(void);
void draw_board(void);
void draw_tile(int value);

void init_board(void);
bool move(int tile);
bool is_won(void);

static int board[DIM_MAX][DIM_MAX];
int d = 0;

FILE *log_file = NULL; // log file just for testing purposes


int main(int argc, string argv[])
{
    // Validate arguments, else stop program
    int error = validate_arguments(argc, argv);
    if (error > 0)
    {
        return error;
    }

    // Start logging for testing purposes
    start_log();

    // Greet user with instructions
    greet_user();

    // Initialize the board
    init_board();

    // Accept moves until game is won
    while (true)
    {
        // Clear the screen
        clear_screen();

        // Draw the current state of the board
        draw_board();

        // Log the current board for testing purposes
        log_board();

        // Check for win
        if (is_won())
        {
            printf("ftw!\n");
            break;
        }

        // Prompt for move
        int tile = get_int("Tile to move: ");

        // Quit if user inputs 0(for testing)
        if (tile == 0)
        {
            break;
        }

        // Log the requested move for testing purposes
        log_move(tile);

        // Move if possible, else report illegality
        if (!move(tile))
        {
            printf("\nIllegal move.\n");
            terra_sleep(500);
        }

        // Sleep thread for animation's sake
        terra_sleep(50);
    }

    // Stop logging to neatly close logfile
    end_log();

    // Success
    return 0;
}

// Sleeps for milliseconds in Terra IDE
void terra_sleep(int milliseconds)
{
    struct timeval start, end, time_difference;
    
    // Start measuring time
    gettimeofday(&start, NULL);
    gettimeofday(&end, NULL);
    
    // Compute difference between now and then
    time_difference.tv_sec = end.tv_sec - start.tv_sec;
    time_difference.tv_usec = end.tv_usec - start.tv_usec;
    
    // While not enough time wasted
    while (time_difference.tv_usec / 1000 + time_difference.tv_sec * 1000 < milliseconds)
    {
        // Measure time again
        gettimeofday(&end, NULL);

        // Compute difference again
        time_difference.tv_sec = end.tv_sec - start.tv_sec;
        time_difference.tv_usec = end.tv_usec - start.tv_usec;
    }
    return;
}

// Runs a couple of checks on the command-line arguments and prints usage hints
int validate_arguments(int argc, string argv[])
{
    // Ensure proper usage
    if (argc != 2)
    {
        printf("Usage: tiles d\n");
        return 1;
    }

    // Ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board dimension d must be between %i x %i and %i x %i, inclusive.\n",
            DIM_MIN, DIM_MIN, DIM_MAX, DIM_MAX);
        return 2;
    }
    return 0;
}

// Clears screen using ANSI escape sequences
void clear_screen(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

// Greets player
void greet_user(void)
{
    clear_screen();
    printf("WELCOME TO TILES\n");
    terra_sleep(2000);
}

// Initializes the game 's board with tiles numbered 1 through d*d - 1
//  (i.e., fills 2-D array with values but does not actually print them)
void init_board(void)
{
    // TODO
    
    int nummer = d * d - 1;
    
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            board[i][j] = nummer;
            nummer--;
        }
    }
    
    board[d - 1][d - 1] = 0;
    
    if (d % 2 == 0)
    {
        int a = board[d - 1][d - 2]; 
        board[d - 1][d - 2] = board[d - 1][d - 3];
        board[d - 1][d - 3] = a;
    }
    
}

// Prints the board in its current state
void draw_board(void)
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            draw_tile(board[i][j]);
        }
        printf("\n\n");
    }

    // ensure everything is printed
    fflush(stdout);
}

// Prints a single tile's number, or _ in case of empty tile
void draw_tile(int value)
{
    if (value == 0)
    {
        printf("  _  ");
    }
    else
    {
        printf("%3d  ", value);
    }
}

// If tile borders empty space, moves tile and returns true, else returns false
bool move(int tile)
{
    // TODO
    
    int tile_i;
    int tile_j;
    int empty_i;
    int empty_j;
    
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (board[i][j] == 0)
            {
                tile_i = i;
                tile_j = j;
            }
            else if (tile == board[i][j])
            {
                empty_i = i;
                empty_j = j;
            }
        }
    }
    
    if ((tile_i == empty_i && abs(tile_j - empty_j) == 1) ||
        (tile_j == empty_j && abs(tile_i - empty_i) == 1))
        {
            int a = board[empty_i][empty_j];
            
            board[empty_i][empty_j] = board[tile_i][tile_j];
            board[tile_i][tile_j] = a;
            return true;
        }
    
    return false;
}

// Returns true if game is won (i.e., board is in winning configuration), else false
bool is_won(void)
{
    int number = 1;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (number == d * d && board[i][j] == 0)
            {
                return true;
            }
            else if (board[i][j] != number)
            {
                return false;
            }
            number++;
        }
    }
    
    // if all else is correct, we should never reach this line
    return false;
}

void start_log()
{
    // Open log
    log_file = fopen("log.txt", "w");
    if (log_file == NULL)
    {
        // return 3;
    }
}

// Log the current state of the board (for testing)
void log_board()
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            fprintf(log_file, "%i", board[i][j]);
            if (j < d - 1)
            {
                fprintf(log_file, "|");
            }
        }
        fprintf(log_file, "\n");
    }
    fflush(log_file);
}

// Close log
void end_log()
{
    fclose(log_file);
}

// Log move (for testing)
void log_move(int tile)
{
    fprintf(log_file, "%i\n", tile);
    fflush(log_file);
}