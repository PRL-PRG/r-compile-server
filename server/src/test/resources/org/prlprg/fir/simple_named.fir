fun main(...) {
  () --> I { var x:I?, reg rx0:I?, reg rx1:I |
    st x = 0;
    rx0 = ld x;
    rx1 = rx0 as I;
    return rx1;
  }
}
