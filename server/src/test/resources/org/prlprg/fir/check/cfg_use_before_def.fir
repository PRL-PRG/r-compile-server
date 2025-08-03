fun main {
  () --> I { reg r:I |
    # cfg-error: Use of local register r before definition
    x = r;
    r = 42;
    return r;
  }
}