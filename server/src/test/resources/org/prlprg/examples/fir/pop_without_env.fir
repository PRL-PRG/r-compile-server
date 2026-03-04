fun main() {
  () --> I { |
    mkenv;
    mkenv;
    popenv;
    popenv;
    # env-error: No environment to pop
    popenv;
    return 0;
  }
}
