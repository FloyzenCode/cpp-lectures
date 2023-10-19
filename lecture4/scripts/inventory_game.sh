cd ../src
g++ -o game -std=c++17 inventory_game.cpp
./game

# use -std=c++17, if not c++17 standard:

# inventory_game.cpp:9:50: error: a space is required between consecutive right angle brackets (use '> >')
#     std::map<std::string, std::vector<std::string>> craftingRecipes{
#                                                  ^~
#                                                  > >
# inventory_game.cpp:9:53: error: function definition does not declare parameters
#     std::map<std::string, std::vector<std::string>> craftingRecipes{
#                                                     ^
# inventory_game.cpp:88:30: error: non-aggregate type 'std::vector<std::string>' (aka 'vector<basic_string<char, char_traits<char>, allocator<char> > >') cannot be initialized with an initializer list
#     std::vector<std::string> list = {
#                              ^      ~
# inventory_game.cpp:103:16: warning: 'auto' type specifier is a C++11 extension [-Wc++11-extensions]
#     for (const auto &[id, item] : inventory)
#                ^
# inventory_game.cpp:103:22: warning: decomposition declarations are a C++17 extension [-Wc++17-extensions]
#     for (const auto &[id, item] : inventory)
#                      ^~~~~~~~~~
# inventory_game.cpp:103:33: warning: range-based for loop is a C++11 extension [-Wc++11-extensions]
#     for (const auto &[id, item] : inventory)
#                                 ^
# inventory_game.cpp:122:16: warning: 'auto' type specifier is a C++11 extension [-Wc++11-extensions]
#     for (const auto &item : recipe)
#                ^
# inventory_game.cpp:122:27: warning: range-based for loop is a C++11 extension [-Wc++11-extensions]
#     for (const auto &item : recipe)
#                           ^
# inventory_game.cpp:124:62: error: expected expression
#         if (!std::any_of(inventory.begin(), inventory.end(), [&](const std::pair<unsigned int, std::string> &pair)
#                                                              ^
# inventory_game.cpp:135:16: warning: 'auto' type specifier is a C++11 extension [-Wc++11-extensions]
#     for (const auto &item : recipe)
#                ^
# inventory_game.cpp:135:27: warning: range-based for loop is a C++11 extension [-Wc++11-extensions]
#     for (const auto &item : recipe)
#                           ^
# inventory_game.cpp:137:9: warning: 'auto' type specifier is a C++11 extension [-Wc++11-extensions]
#         auto it = std::find_if(inventory.begin(), inventory.end(), [&](const std::pair<unsigned int, std::string> &pair)
#         ^
# inventory_game.cpp:137:68: error: expected expression
#         auto it = std::find_if(inventory.begin(), inventory.end(), [&](const std::pair<unsigned int, std::string> &pair)
#                                                                    ^
# inventory_game.cpp:151:16: warning: 'auto' type specifier is a C++11 extension [-Wc++11-extensions]
#     for (const auto &[craftItem, recipe] : craftingRecipes)
#                ^
# inventory_game.cpp:151:22: warning: decomposition declarations are a C++17 extension [-Wc++17-extensions]
#     for (const auto &[craftItem, recipe] : craftingRecipes)
#                      ^~~~~~~~~~~~~~~~~~~
# inventory_game.cpp:151:42: warning: range-based for loop is a C++11 extension [-Wc++11-extensions]
#     for (const auto &[craftItem, recipe] : craftingRecipes)
#                                          ^
# inventory_game.cpp:151:44: error: use of undeclared identifier 'craftingRecipes'
#     for (const auto &[craftItem, recipe] : craftingRecipes)
#                                            ^
# inventory_game.cpp:164:9: error: use of undeclared identifier 'craftingRecipes'
#     if (craftingRecipes.find(craftItem) != craftingRecipes.end())
#         ^
# inventory_game.cpp:164:44: error: use of undeclared identifier 'craftingRecipes'
#     if (craftingRecipes.find(craftItem) != craftingRecipes.end())
#                                            ^
# inventory_game.cpp:166:43: error: use of undeclared identifier 'craftingRecipes'
#         std::vector<std::string> recipe = craftingRecipes[craftItem];
#                                           ^
# 11 warnings and 9 errors generated.
