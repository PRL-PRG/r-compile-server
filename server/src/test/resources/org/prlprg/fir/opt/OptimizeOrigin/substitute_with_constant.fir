fun main {
  # after:
# () --> I { |
#   return 42;
# }
  () --> I { reg r0:I, reg r1:I, reg r2:I |
    r0 = 42; r1 = r0; r2 = r1; return r2;
  }
}