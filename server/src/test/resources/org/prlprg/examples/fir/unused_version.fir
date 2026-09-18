fun main() {
  () -+> V {
    r: V = force_< * -+> V >(<int 1>);
    return r;
  }
}

fun force_(x) {
  (x:*) -+> V {
    r: V = force? x;
    return r;
  }
  (x:v1(I)) --> v1(I) {
    return x;
  }
  (x:v1(R)) --> v1(R) {
    return x;
  }
  (x:I) --> I {
    return x;
  }
  (x:R) --> R {
    return x;
  }
}
