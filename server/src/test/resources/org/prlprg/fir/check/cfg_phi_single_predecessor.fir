fun main {
  () --> I { reg r1:I |
    goto BB1(42);
  # cfg-error: Block with < 2 predecessors cannot have phi parameters
  BB1(r1:I):
    return r1;
  }
}