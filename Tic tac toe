using System;

namespace TicTacToe
{
    enum Player
    {
        One = 1,
        Two = 2
    }

    enum GameState
    {
        InProgress,
        Draw,
        PlayerOneWins,
        PlayerTwoWins
    }

    class Program
    {
        static char[] board = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
        static Player currentPlayer = Player.One;
        static GameState gameState = GameState.InProgress;

        static void Main(string[] args)
        {
            do
            {
                Console.Clear();
                Console.WriteLine("Jugador 1: X  Jugador 2: O");
                Console.WriteLine();
                Console.WriteLine("Turno del Jugador {0}", currentPlayer);

                Console.WriteLine();
                DrawBoard();

                gameState = CheckWin();

                if (gameState == GameState.PlayerOneWins || gameState == GameState.PlayerTwoWins)
                {
                    Console.WriteLine("¡Tenemos un ganador!");
                    Console.ReadLine();
                }
                else
                {
                    Console.WriteLine("Escribe el número donde quieres colocar la marca {0}:", GetPlayerSymbol(currentPlayer));
                    int.TryParse(Console.ReadLine(), out int choice);

                    if (IsValidMove(choice))
                    {
                        board[choice - 1] = GetPlayerSymbol(currentPlayer);
                        currentPlayer = (currentPlayer == Player.One) ? Player.Two : Player.One;
                    }
                    else
                    {
                        Console.WriteLine("Lo siento, la casilla {0} ya está ocupada con {1}.", choice, board[choice - 1]);
                        Console.WriteLine();
                        Console.WriteLine("Espera 2 segundos. Intenta nuevamente.");
                        Console.ReadLine();
                    }
                }
            }
            while (gameState == GameState.InProgress);

            Console.Clear();
            DrawBoard();

            if (gameState == GameState.PlayerOneWins || gameState == GameState.PlayerTwoWins)
            {
                Console.WriteLine("El Jugador {0} ganó!", (currentPlayer == Player.One) ? Player.Two : Player.One);
            }
            else
            {
                Console.WriteLine("¡El juego empató!");
            }
            Console.ReadLine();
        }

        private static void DrawBoard()
        {
            Console.WriteLine("     |     |      ");
            Console.WriteLine("  {0}  |  {1}  |  {2}", board[0], board[1], board[2]);
            Console.WriteLine("_____|_____|_____ ");
            Console.WriteLine("     |     |      ");
            Console.WriteLine("  {0}  |  {1}  |  {2}", board[3], board[4], board[5]);
            Console.WriteLine("_____|_____|_____ ");
            Console.WriteLine("     |     |      ");
            Console.WriteLine("  {0}  |  {1}  |  {2}", board[6], board[7], board[8]);
            Console.WriteLine("     |     |      ");
        }

        private static GameState CheckWin()
        {
            // Verifica las condiciones de victoria
            if ((board[0] == board[1] && board[1] == board[2]) ||
                (board[3] == board[4] && board[4] == board[5]) ||
                (board[6] == board[7] && board[7] == board[8]) ||
                (board[0] == board[3] && board[3] == board[6]) ||
                (board[1] == board[4] && board[4] == board[7]) ||
                (board[2] == board[5] && board[5] == board[8]) ||
                (board[0] == board[4] && board[4] == board[8]) ||
                (board[2] == board[4] && board[4] == board[6]))
            {
                return (currentPlayer == Player.One) ? GameState.PlayerOneWins : GameState.PlayerTwoWins;
            }
            else if (!board.Contains('1') && !board.Contains('2') && !board.Contains('3') &&
                     !board.Contains('4') && !board.Contains('5') && !board.Contains('6') &&
                     !board.Contains('7') && !board.Contains('8') && !board.Contains('9'))
            {
                return GameState.Draw;
            }
            else
            {
                return GameState.InProgress;
            }
        }

        private static char GetPlayerSymbol(Player player)
        {
            return (player == Player.One) ? 'X' : 'O';
        }

        private static bool IsValidMove(int choice)
        {
            return (choice >= 1 && choice <= 9 && board[choice - 1] != 'X' && board[choice - 1] != 'O');
        }
    }
}
