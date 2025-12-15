fun main() {
  () -+> V { |
    mkenv;
    popenv;
    return "hello world";
  }
}