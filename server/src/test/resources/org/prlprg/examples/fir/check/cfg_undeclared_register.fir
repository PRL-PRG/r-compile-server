fun main() {
  () --> I { |
    # cfg-error: Register undeclared is not declared as parameter or local
    # type-error: Undeclared register: undeclared
    undeclared = 42;
    return undeclared;
  }
}