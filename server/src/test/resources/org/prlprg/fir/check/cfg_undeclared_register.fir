fun main() {
  () --> I { |
    # cfg-error: Register undeclared is not declared as parameter or local
    undeclared = 42;
    return undeclared;
  }
}