fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner487324683;
    st URLdecode = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner487324683(URL) {
  (reg URL:*) -+> V { var URL:*, reg vapply:cls, reg URL1:*, reg URL2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg character:cls, reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st URL = URL;
    vapply = ldf vapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      URL1 = ld URL;
      URL2 = force? URL1;
      checkMissing(URL2);
      return URL2;
    };
    p1 = prom<V +>{
      r1 = clos inner487324683;
      return r1;
    };
    p2 = prom<V +>{
      character = ldf character;
      r3 = dyn character(1.0);
      return r3;
    };
    r5 = dyn vapply[, , , `USE.NAMES`](p, p1, p2, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    popenv;
    return r5;
  }
}