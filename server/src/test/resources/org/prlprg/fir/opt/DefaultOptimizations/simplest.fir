fun main() {
  # after: () --> I { |
  () --> I { reg r:V |
    # after:
    r = 42;
    # after: return 42;
    return r;
  }
}