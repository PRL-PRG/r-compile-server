fun main() {
  () -~> v(I)f {
    r1: v(I)o = v(I)[1, 2, 3];
    r2: v(I)o = v(I)[4, 5, 6];
    r3: v(I)o = f< v(I)o,v(I)b -~> v(I)f >(consume r1, r2);
    return consume r3;
  }
}

fun f(r1, r2) {
  (reg r1:v(I)o, reg r2:v(I)b) -~> v(I)f {
    ry: v(I)o = dup r2;
    r1[0] = 1;
    ry[2] = 3;
    return consume ry;
  }
}
