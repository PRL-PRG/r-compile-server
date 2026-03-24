fun main() {
  # after: () --> I { |
  () --> V { reg r:V |
    # after:
    r = <int 42>;
    # after: return <int 42>;
    return r;
  }
}