fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4259292012;
    st `.read_additional_repositories_field` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4259292012(txt) {
  (reg txt:*) -+> V { var txt:*, reg unique:cls, reg unlist:cls, reg strsplit:cls, reg txt1:*, reg txt2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st txt = txt;
    unique = ldf unique;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      unlist = ldf unlist;
      p1 = prom<V +>{
        strsplit = ldf strsplit;
        p = prom<V +>{
          txt1 = ld txt;
          txt2 = force? txt1;
          checkMissing(txt2);
          return txt2;
        };
        r1 = dyn strsplit(p, ",[[:space:]]*");
        return r1;
      };
      r3 = dyn unlist(p1);
      return r3;
    };
    r5 = dyn unique(p2);
    check L1() else D1();
  D1():
    deopt 3 [r5];
  L1():
    popenv;
    return r5;
  }
}