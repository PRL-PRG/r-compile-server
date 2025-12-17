fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2595128255;
    st `[[.hashtab` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2595128255(h, key, nomatch, `...`) {
  (reg h:*, reg key:*, reg nomatch:*, reg ddd:dots) -+> V { var h:*, var key:*, var nomatch:*, reg nomatch_isMissing:L, reg nomatch_orDefault:*, var `...`:dots?, reg gethash:cls, reg h1:*, reg h2:V, reg p:p(V +), reg key1:*, reg key2:V, reg p1:p(V +), reg nomatch1:*, reg nomatch2:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st h = h;
    st key = key;
    nomatch_isMissing = missing.0(nomatch);
    if nomatch_isMissing then L0(NULL) else L0(nomatch);
  L0(nomatch_orDefault):
    st nomatch = nomatch_orDefault;
    st `...` = ddd;
    gethash = ldf gethash;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      h1 = ld h;
      h2 = force? h1;
      checkMissing(h2);
      return h2;
    };
    p1 = prom<V +>{
      key1 = ld key;
      key2 = force? key1;
      checkMissing(key2);
      return key2;
    };
    p2 = prom<V +>{
      nomatch1 = ld nomatch;
      nomatch2 = force? nomatch1;
      checkMissing(nomatch2);
      return nomatch2;
    };
    r3 = dyn gethash(p, p1, p2);
    check L2() else D1();
  D1():
    deopt 5 [r3];
  L2():
    popenv;
    return r3;
  }
}