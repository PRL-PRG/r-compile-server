fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `is.hashtab` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_ishashtab_Ext:*, reg C_ishashtab_Ext1:V, reg x1:*, reg x2:V, reg _External:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf `.External`;
    base = ldf `.External` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_ishashtab_Ext = ld C_ishashtab_Ext;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_ishashtab_Ext>, <sym x>);
    goto L0(r);
  D0():
    deopt 2 [C_ishashtab_Ext];
  L3():
    C_ishashtab_Ext1 = force? C_ishashtab_Ext;
    checkMissing(C_ishashtab_Ext1);
    x1 = ld x;
    check L4() else D1();
  D1():
    deopt 4 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    _External = ldf `.External` in base;
    r2 = dyn _External(C_ishashtab_Ext1, x2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}