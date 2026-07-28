fun main() {
  () -~> v1(I) {
    mkenv;
    st x = <int 0>;
    rx0: * = ld x;
    rx1: v1(I) = rx0 as v1(I);
    rx1u: I = unbox< v1(I) --> I >(rx1);
    popenv;
    ret: v1(I) = box< I --> v1(I) >(rx1u);
    return ret;
  }
}
