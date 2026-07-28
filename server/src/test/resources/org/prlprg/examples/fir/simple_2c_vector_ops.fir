fun main() {
  () -~> v(I)f {
    vec: v(I)o = v(I)[1, 2, 3];
    second: I = vec[1];
    r0: I = `+`< I,I --> I >(second, 2);
    vec[0] = r0;
    third: I = vec[2];
    r1: I = `+`< I,I --> I >(third, 5);
    vec[2] = r1;
    return consume vec;
  }
}
