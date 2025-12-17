fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1031285476;
    st typhash = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1031285476(h) {
  (reg h:*) -+> V { var h:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_typhash_Ext:*, reg C_typhash_Ext1:V, reg h1:*, reg h2:V, reg _External:cls, reg r2:V |
    mkenv;
    st h = h;
    sym = ldf `.External`;
    base = ldf `.External` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_typhash_Ext = ld C_typhash_Ext;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_typhash_Ext>, <sym h>);
    goto L0(r);
  D0():
    deopt 2 [C_typhash_Ext];
  L3():
    C_typhash_Ext1 = force? C_typhash_Ext;
    checkMissing(C_typhash_Ext1);
    h1 = ld h;
    check L4() else D1();
  D1():
    deopt 4 [h1];
  L4():
    h2 = force? h1;
    checkMissing(h2);
    _External = ldf `.External` in base;
    r2 = dyn _External(C_typhash_Ext1, h2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}