# GWENT

Wanna play a few rounds? Welcome to the GWENT game repository, featuring a rule-based AI opponent to challenge your strategic skills!

## Overview

This repository contains the source code for a GWENT game with the following features:
- **Rule-Based AI:** An opponent powered by a set of explicit game rules to simulate real game strategies.
- **Game Engine:** Core logic for cards, game states, and round management.
- **Testing:** Unit tests to ensure game mechanics work correctly.

## Project Structure

- **src/**  
  Contains the game engine and main entry point:
  - [`src/engine/card.cpp`](src/engine/card.cpp) / [`src/engine/card.hpp`](src/engine/card.hpp): Card definitions and related functionality.
  - [`src/engine/game_state.cpp`](src/engine/game_state.cpp) / [`src/engine/game_state.hpp`](src/engine/game_state.hpp): Defines the [`GameState`](src/engine/game_state.hpp) class, which manages the game state including player and opponent hands, board mapping, and scoring.
  - [`src/main.cpp`](src/main.cpp): The application entry point where the game is initialized and executed.

- **data/**  
  - [`data/cards.json`](data/cards.json): Configuration and data definitions for the cards used in the game.

- **tests/**  
  Contains unit tests to ensure the game logic works as intended.

- **.idea/**  
  Project settings for developers using IntelliJ-based IDEs.

## Getting Started

### Prerequisites

- A C++ compiler supporting C++11 or later.
- CMake (or your preferred build system) for configuring the build environment.
- Optional: An IDE like Visual Studio Code for easy development.

### Building the Project

1. Clone this repository:

   ```sh
   git clone https://github.com/mohsenbakhit/gwent
   cd gwent
   ```

2. Create and build directory and run CMake:
    ```
    mkdir build && cd build
    cmake ..
    make
    ```
3. Run the executable:
    ``` ./gwent```

## Contributing
Feel free to fork the repository and submit a pull request if you'd like to contribute to the project. Make sure you include tests for new features and updates.

## License
This project is licensed under the terms in [LICENSE](LICENSE).