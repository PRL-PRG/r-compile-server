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
  (reg r:*) -+> V {
    r0: V = force? r;
    return r0;
  }
  (reg r:p(V +)) -+> V {
    r0: V = force r;
    return r0;
  }
  (reg r:p(V -)) --> V {
    r0: V = force r;
    return r0;
  }
  (reg r:V) --> V {
    return r;
  }
}

fun fx() {
  () -+> V { ... }
}
