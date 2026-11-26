fun main() {
  () -+> V {
    r: V = f< -+> V >();
    return r;
  }
}

# Like a `StrictifyPromise` wrapper after an optimization replaced its register with a constant: the
# backends create it evaluated, with the constant as its expression. `rep` tests if `len` is missing,
# which reads that expression.
fun f() {
  () -+> V {
    p: p(v1(I) -) = prom<v1(I) ->{
      return <int 3>;
    };
    mkenv;
    st len = p;
    vargs: dots = dots[<sym len>];
    x: V = rep< v1(R),dots -+> V >(<real 1.5>, vargs) in <lang rep(1.5, len)>;
    popenv;
    return x;
  }
}
