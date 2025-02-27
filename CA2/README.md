# Card Game - Command Line

This project implements a command-line-based card game developed in C. The game is designed for two teams of two players each, where each player is dealt cards, and they must play their cards strategically according to specific rules. The game progresses through multiple rounds, and the team with the highest score at the end wins. The game runs entirely on the command line and allows players to interact with the game via the terminal.

## Project Description

### Key Features:

- **Command-Line Interface (CLI):** The game runs in the terminal and allows players to play the game by typing in their moves.
- **Random Card Distribution:** The cards are shuffled and randomly distributed to the players at the start of each round.
- **Team System:** Players are divided into two teams of two, each with their own set of rules for card play.
- **Game Rounds:** The game consists of multiple rounds, and the winner of each round is determined based on the rules explained below.
- **Score Tracking:** The game tracks and updates each team's score after every round.
- **User Input Validation:** The game checks user inputs for validity and prompts the player again if the input is invalid.
- **Player Interaction:** Players can select cards and play them according to the game rules.

## Game Rules

The game follows the rules outlined below. Each round, players will play cards based on a combination of number and suit. The team that plays the highest card wins the round.

### Card Types:

The deck consists of 44 cards, divided into 4 suits: A, B, C, D, and each suit contains cards numbered from 1 to 11. The cards are distributed randomly to players at the start of the game.

### Game Flow:

#### Initial Setup:
- The game begins with 4 players, each belonging to one of two teams. Players are assigned 11 cards each.
- Cards are shuffled randomly at the start of the game.

#### Gameplay:
- Players take turns selecting a card to play based on the game rules.
- **Player 1 (you):** Can play any card they like in the first move.
- **Other Players:** Each player must follow the suit of the card played by the previous player if they have a card of the same suit. If not, they must play the lowest numbered card from their hand that does not match the suit.
- **Card Ranking:** In the case where multiple cards of the same suit are played, the card with the highest number wins the round. If no one has a matching suit, the rules for playing cards based on other suits come into play.

#### Switching Turns:
- Players take turns playing cards, and the game proceeds in a clockwise direction. After each round, the scores are updated based on the rules below.

#### Winning the Round:
- A round is won by the team whose player has played the highest-ranked card (according to the rules).
- The first team to accumulate a set number of points (for example, 6 points) wins the game.

#### Winning the Game:
- The game is won when one team reaches the target score (e.g., 6 points).
- If the game is not completed within a set number of rounds, the team with the higher score wins.

## Implementation Details

The game is implemented in C and follows a structured approach, using functions to handle the various aspects of the game.

### Data Structures:

- **2D Array (`cards[4][11]`):** This array represents the deck and stores the cards for each player. The deck is divided into 4 rows (for the 4 suits), with each row containing 11 cards (numbered 1-11).
- **Arrays for Player Hands:** Each player’s hand is represented by an array that stores the cards they hold. The hand is updated after each round.

### Game Logic:

- **Shuffle and Deal:** Cards are shuffled using the `shuffle_cards()` function, which rearranges the cards randomly. The cards are then dealt to the players.
- **Card Selection:** Players choose a card from their hand by selecting the card’s index. The game ensures that the selection adheres to the rules mentioned above.
- **Score Calculation:** After each round, the game calculates and updates the score based on the value of the cards played and the team’s success.
- **Round Continuation:** The game continues until one team wins by reaching the target score or all rounds are played.