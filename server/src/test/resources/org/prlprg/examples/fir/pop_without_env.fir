fun main() {
  () --> I { |
    mkenv;
    mkenv;
    popenv;
    popenv;
    popenv;
    # env-error: No environment to pop
    # runtime-error: Stack frame popped more environments than it pushed
    return 0;
  }
}
