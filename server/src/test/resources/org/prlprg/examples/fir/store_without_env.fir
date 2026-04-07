fun main() {
  () -~> I { |
    # env-error: No environment to store into
    st x = <int 0>;  # Bad
    mkenv;     # (#envs = 1)
    st x = <int 1>;  # OK
    mkenv;     # (#envs = 2)
    st x = <int 2>;  # OK
    popenv;    # (#envs = 1)
    st x = <int 3>;  # OK
    popenv;    # (#envs = 0)
    # env-error: No environment to store into
    st x = <int 4>;  # Bad
    mkenv;     # (#envs = 1)
    st x = <int 5>;  # OK
    popenv;    # (#envs = 0)
    # env-error: No environment to store into
    st x = <int 6>;  # Bad
    return 7;
  }
}
