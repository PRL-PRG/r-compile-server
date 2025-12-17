fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `naprint.exclude` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sprintf:cls, reg ngettext:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg n:*, reg n1:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      ngettext = ldf ngettext;
      p = prom<V +>{
        sym = ldf length;
        base = ldf length in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        st n = r1;
        invisible.0();
        return r1;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        length = ldf length in base;
        r2 = dyn length(x2);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      r4 = dyn ngettext(p, "%d observation deleted due to missingness", "%d observations deleted due to missingness");
      return r4;
    };
    p2 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r7 = dyn sprintf(p1, p2);
    check L1() else D1();
  D1():
    deopt 4 [r7];
  L1():
    popenv;
    return r7;
  }
}