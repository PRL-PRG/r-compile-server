fun main() {
  () -+> V {
    r: V = force_< * -+> V >(<int 1>);
    return r;
  }
}

fun force_(x) {
  (reg x:*) -+> V {
    r: V = force? x;
    return r;
  }
  (reg x:v1(I)) --> v1(I) {
    return x;
  }
  (reg x:v1(R)) --> v1(R) {
    return x;
  }
  (reg x:I) --> I {
    return x;
  }
  (reg x:R) --> R {
    return x;
  }
}
