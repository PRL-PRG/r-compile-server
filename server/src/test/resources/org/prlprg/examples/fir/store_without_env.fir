fun main() {
  () --> I { |
    # env-error: No environment to store into
    st x = 0;  # Bad
    mkenv;     # (#envs = 1)
    st x = 1;  # OK
    mkenv;     # (#envs = 2)
    st x = 2;  # OK
    popenv;    # (#envs = 1)
    st x = 3;  # OK
    popenv;    # (#envs = 0)
    # env-error: No environment to store into
    st x = 4;  # Bad
    mkenv;     # (#envs = 1)
    st x = 5;  # OK
    popenv;    # (#envs = 0)
    # env-error: No environment to store into
    st x = 6;  # Bad
    return 7;
  }
}
