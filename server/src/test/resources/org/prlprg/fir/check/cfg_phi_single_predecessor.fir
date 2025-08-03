fun main {
  () --> I { reg r1:I |
    goto BB1(42);
  # cfg-error: Block with < 2 predecessors can't have phis
  BB1(r1):
    return r1;
  }
}