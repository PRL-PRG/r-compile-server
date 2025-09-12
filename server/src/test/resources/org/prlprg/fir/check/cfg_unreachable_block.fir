fun main() {
  () --> I { reg r:I, reg r1:I |
    r = 42;
    return r;
  # cfg-error: Block UNREACHABLE is unreachable from entry
  UNREACHABLE():
    r1 = 24;
    return r1;
  }
}