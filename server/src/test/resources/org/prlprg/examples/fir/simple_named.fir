fun main() {
  () --> I { var x:v1(I)?, reg rx0:v1(I)?, reg rx1:v1(I), reg rx1u:I |
    mkenv;
    st x = <int 0>;
    rx0 = ld x;
    rx1 = rx0 as v1(I);
    rx1u = unbox<v1(I) --> I>(rx1);
    popenv;
    return rx1u;
  }
}
