fun main() {
  () --> I { reg vec:v(I)o, reg first:I, reg third:I, reg sum:I |
    vec = build_vector();
    first = vec[0];
    third = vec[2];
    sum = `+`.1(first, third);
    return sum;
  }
}
fun build_vector() {
  () --> v(I)f { reg vec:v(I)o, reg middle:I, reg middle1:I, reg r0:I, reg r1:I, reg r2:I |
    vec = v(I)[4, 8, 12];
    middle = vec[1];
    middle1 = `+`.1(middle, 5);
    vec[1] = middle1;
    r0 = vec[2];
    r1 = vec[1];
    r2 = `+`.1(r0, r1);
    vec[2] = r2;
    return use vec;
  }
}