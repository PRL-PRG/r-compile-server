fun main() {
  () -~> v1(I) {
    vec: v(I)o = build_vector< -~> v(I)f >();
    first: I = vec[0];
    third: I = vec[2];
    sum: I = `+`< I,I --> I >(first, third);
    sumu: v1(I) = box< I --> v1(I) >(sum);
    return sumu;
  }
}

fun build_vector() {
  () -~> v(I)f {
    vec: v(I)o = v(I)[4, 8, 12];
    middle: I = vec[1];
    middle1: I = `+`< I,I --> I >(middle, 5);
    vec[1] = middle1;
    r0: I = vec[2];
    r1: I = vec[1];
    r2: I = `+`< I,I --> I >(r0, r1);
    vec[2] = r2;
    return consume vec;
  }
}
