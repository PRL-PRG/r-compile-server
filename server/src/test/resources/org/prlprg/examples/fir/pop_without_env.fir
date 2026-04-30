fun main() {
  () -~> v1(I) { |
    mkenv;
    mkenv;
    popenv;
    popenv;
    # env-error: No environment to pop
    popenv;
    return <int 0>;
  }
}
