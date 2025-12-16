fun main() {
  () -+> V { |
    mkenv;
    popenv;
    return 42.0;
  }
}