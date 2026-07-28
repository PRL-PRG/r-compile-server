fun main() {
  () -~> v(I)f {
    r: v(I)o = v(I)[1, 2, 3, 4, 5];
    r0: I = r[2];
    r[0] = r0;
    r1: I = r[1];
    r2: I = `+`< I,I --> I >(r1, 1);
    r[4] = r2;
    return consume r;
  }
}
