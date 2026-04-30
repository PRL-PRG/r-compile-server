fun main() {
  () -~> v1(I) { |
    mkenv;
    # env-error: Closure version return must exit with 0 environments
    return <int 0>;
  }
}
