fun main() {
  () -+> V {
    r: V = f< v1(R) -+> V >(<real 1.0>);
    return r;
  }
}

# Like the version `StrictifyPromise` makes: it wraps its value parameter back into a promise without
# a source expression, which the backends create evaluated, with the value as its expression. GNU-R's
# `missing` reads that expression.
fun f(n) {
  (n:v1(R)) -+> V {
    p: p(v1(R) -) = prom<v1(R) ->{
      return n;
    };
    mkenv;
    st n = p;
    m: V = missing< V --> v(L) >(<sym n>);
    popenv;
    return m;
  }
}
