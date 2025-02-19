#include <catch2/catch_test_macros.hpp>
#include "../src/engine/game_state.hpp"
TEST_CASE("update_weather", "[example]") {
     GameState game = GameState();
     REQUIRE(game.update_weather(BITING_FROST) == 1);
     game.update_weather(0);
     REQUIRE(game.update_weather(IMPENETRABLE_FOG) == 2);
     game.update_weather(0);
     REQUIRE(game.update_weather(TORRENTIAL_RAIN) == 4);
     game.update_weather(0);
     REQUIRE(game.update_weather(SKELLIGE_STORM) == 6);
     game.update_weather(0);
     game.update_weather(2);
     REQUIRE(game.update_weather(4) == 6);
}