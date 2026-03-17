fun main() {
  () --> v(I)f { reg vec:v(I)o, reg second:I, reg r0:I, reg third:I, reg r1:I |
    vec = v(I)[1, 2, 3];
    second = vec[1];
    r0 = `+`< I,I --> I >(second, 2);
    vec[0] = r0;
    third = vec[2];
    r1 = `+`< I,I --> I >(third, 5);
    vec[2] = r1;
    return consume vec;
  }
}
