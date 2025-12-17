fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner756922339;
    st `is.element` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner756922339(el, set) {
  (reg el:*, reg set:*) -+> V { var el:*, var set:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg as_vector:cls, reg el1:*, reg el2:V, reg p:p(V +), reg r3:V, reg as_vector1:cls, reg set1:*, reg set2:V, reg p1:p(V +), reg r5:V, reg match:cls, reg r6:V, reg r7:V |
    mkenv;
    st el = el;
    st set = set;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    r7 = `>`(r1, 0);
    popenv;
    return r7;
  L1():
    as_vector = ldf `as.vector`;
    check L3() else D0();
  L2():
    r = dyn base(<lang as.vector(el)>, <lang as.vector(set)>, 0);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      el1 = ld el;
      el2 = force? el1;
      checkMissing(el2);
      return el2;
    };
    r3 = dyn as_vector(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    as_vector1 = ldf `as.vector`;
    check L5() else D2();
  D2():
    deopt 7 [];
  L5():
    p1 = prom<V +>{
      set1 = ld set;
      set2 = force? set1;
      checkMissing(set2);
      return set2;
    };
    r5 = dyn as_vector1(p1);
    check L6() else D3();
  D3():
    deopt 9 [r5];
  L6():
    match = ldf match in base;
    r6 = dyn match(r3, r5, 0, NULL);
    check L7() else D4();
  D4():
    deopt 13 [r6];
  L7():
    goto L0(r6);
  }
}