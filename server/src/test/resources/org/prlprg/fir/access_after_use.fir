fun main() {
  () --> I { reg r:v(I)o, reg r1:I |
    r = v(I)[1, 2, 3];
    # type-error: Read after use: r
    # cleanup:
    use r;
    r1 = r[0];
    return r1;
  }
}