fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2673918525;
    st rbind_list = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2673918525(args) {
  (reg args:*) -+> V { var args:*, reg clear_rownames:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg args1:*, reg args2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st args = args;
    clear_rownames = ldf clear_rownames;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      do_call = ldf `do.call`;
      p = prom<V +>{
        rbind = ld rbind;
        rbind1 = force? rbind;
        checkMissing(rbind1);
        return rbind1;
      };
      p1 = prom<V +>{
        args1 = ld args;
        args2 = force? args1;
        checkMissing(args2);
        return args2;
      };
      r2 = dyn do_call(p, p1);
      return r2;
    };
    r4 = dyn clear_rownames(p2);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}