fun main() {
  () --> v1(I) {
    r: v(I)o = v(I)[1, 2, 3];
    r0: I = consume r[0];
    # prov-error: Read after consume: r
    r1: I = r[0];
    r1u: v1(I) = box< I --> v1(I) >(r1);
    return r1u;
  }
}
