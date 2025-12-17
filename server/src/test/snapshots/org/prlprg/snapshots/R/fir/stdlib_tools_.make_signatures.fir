fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3670191270;
    st `.make_signatures` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3670191270(cls) {
  (reg cls:*) -+> V { var cls:*, reg sub:cls, reg unlist:cls, reg lapply:cls, reg cls1:*, reg cls2:V, reg p:p(V +), reg paste:*, reg paste1:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V |
    mkenv;
    st cls = cls;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      unlist = ldf unlist;
      p2 = prom<V +>{
        lapply = ldf lapply;
        p = prom<V +>{
          cls1 = ld cls;
          cls2 = force? cls1;
          checkMissing(cls2);
          return cls2;
        };
        p1 = prom<V +>{
          paste = ld paste;
          paste1 = force? paste;
          checkMissing(paste1);
          return paste1;
        };
        r2 = dyn lapply[, , collapse](p, p1, "#");
        return r2;
      };
      r4 = dyn unlist(p2);
      return r4;
    };
    r6 = dyn sub("(#ANY)*$", "", p3);
    check L1() else D1();
  D1():
    deopt 5 [r6];
  L1():
    popenv;
    return r6;
  }
}