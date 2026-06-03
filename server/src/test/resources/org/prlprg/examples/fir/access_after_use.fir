fun main() {
  () --> v1(I) { reg r:v(I)o, reg r1:I, reg r1u:v1(I) |
    r = v(I)[1, 2, 3];
    consume r;
    # prov-error: Read after consume: r
    r1 = r[0];
    r1u = box< I --> v1(I) >(r1);
    return r1u;
  }
}