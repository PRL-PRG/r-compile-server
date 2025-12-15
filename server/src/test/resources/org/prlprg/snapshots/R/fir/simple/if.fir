fun main() {
  () -+> V { |
    mkenv;
    popenv;
    return "foo";
  }
}