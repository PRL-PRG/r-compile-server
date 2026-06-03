fun main() {
  () -~> v1(I) { |
    mkenv;
    popenv;
    return <int 0>;
  }
}
