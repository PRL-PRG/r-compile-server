#? noEval
fun main() {
  () -+> V {
    p: p(V +) = prom<V +>{
      r: V = fx< -+> V >();
      return r;
    };
    res: V = f%< p(V +) -+> V >(p);
    return res;
  }
}

fun f(r) {
  (r:*) -+> V {
    r0: V = force? r;
    return r0;
  }
  (r:p(V +)) -+> V {
    r0: V = force r;
    return r0;
  }
  (r:p(V -)) --> V {
    r0: V = force r;
    return r0;
  }
  (r:V) --> V {
    return r;
  }
}

fun fx() {
  () -+> V { ... }
}
