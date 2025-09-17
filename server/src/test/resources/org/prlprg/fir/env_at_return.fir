fun main() {
  () --> I { |
    mkenv;
    # env-error: Closure version return must exit with 0 environments
    return 0;
  }
}
