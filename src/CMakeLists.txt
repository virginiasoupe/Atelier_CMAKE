# Ajoutez cette ligne dans le CMakeLists.txt pour compiler le projet
add_executable(calculator src/main.c src/lib/calculator.c)

# Ajoutez des tests pour chaque fonction
enable_testing()

# Test pour la fonction au carré
add_test(NAME TestCar COMMAND calculator car 5)
set_tests_properties(TestCar PROPERTIES PASS_REGULAR_EXPRESSION "25.000000")
