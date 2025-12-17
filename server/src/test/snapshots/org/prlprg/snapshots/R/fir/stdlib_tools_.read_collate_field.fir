fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4259292012;
    st `.read_collate_field` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4259292012(txt) {
  (reg txt:*) -+> V { var txt:*, reg textConnection:cls, reg gsub:cls, reg txt1:*, reg txt2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg on_exit:cls, reg r6:V, reg scan:cls, reg con:*, reg con1:V, reg p2:p(V +), reg character:cls, reg r8:V, reg p3:p(V +), reg r10:V |
    mkenv;
    st txt = txt;
    textConnection = ldf textConnection;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      gsub = ldf gsub;
      p = prom<V +>{
        txt1 = ld txt;
        txt2 = force? txt1;
        checkMissing(txt2);
        return txt2;
      };
      r1 = dyn gsub[, , , fixed]("\n", " ", p, TRUE);
      return r1;
    };
    r3 = dyn textConnection(p1);
    check L2() else D1();
  D1():
    deopt 3 [r3];
  L2():
    st con = r3;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    scan = ldf scan;
    check L5() else D2();
  L3():
    on_exit = ldf `on.exit` in base;
    r6 = dyn on_exit(<lang close(con)>);
    goto L0();
  L4():
    r4 = dyn base(<lang close(con)>);
    goto L0();
  D2():
    deopt 9 [];
  L5():
    p2 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    p3 = prom<V +>{
      character = ldf character;
      r8 = dyn character();
      return r8;
    };
    r10 = dyn scan[, what, `strip.white`, quiet](p2, p3, TRUE, TRUE);
    check L6() else D3();
  D3():
    deopt 17 [r10];
  L6():
    popenv;
    return r10;
  }
}