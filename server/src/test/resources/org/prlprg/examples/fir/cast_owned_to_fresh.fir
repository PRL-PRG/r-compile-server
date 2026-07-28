fun main() {
  () -~> v(I)f {
    rv: v(I)o = v(I)[1, 2, 3];
    cast< v(I)b -~> I >(rv);
    return consume rv;
  }
}

fun cast(`...`) {
  (reg r:v(I)b) -~> I {
    # type-error: Can't assign it to rv: can't assign v(I)o to v(I)o
    rv: v(I)o = r as v(I)o;
    rv[0] = 4;
    return 4;
  }
}
