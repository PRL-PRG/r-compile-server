fun main() {
  () -+> V { reg p:p(V +), reg r:V, reg res:I |
    p = prom<V +>{
      r = fx.0();
      return r;
    };
    res = f< p(V +) -+> V >(p);
    return res;
  }
}

fun f(r) {
  (reg r:*) -+> V { reg r0:V |
    r0 = force? r;
    return r0;
  }
  (reg r:p(V +)) -+> V { reg r0:V |
    r0 = force r;
    return r0;
  }
  (reg r:p(V -)) --> V { reg r0:V |
    r0 = force r;
    return r0;
  }
  (reg r:V) --> V { |
    return r;
  }
}

fun fx() {
  () -+> V { ... }
}