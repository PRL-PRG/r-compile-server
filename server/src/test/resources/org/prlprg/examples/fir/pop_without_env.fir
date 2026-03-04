fun main() {
  () --> I { |
    mkenv;
    mkenv;
    popenv;
    popenv;
    popenv;
    # env-error: No environment to pop
    return 0;
  }
}
