fun main() {
  () --> I { reg r:v(I)o, reg r1:I |
    r = v(I)[1, 2, 3];
    consume r;
    # prov-error: Read after consume: r
    r1 = r[0];
    return r1;
  }
}