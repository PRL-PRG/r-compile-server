fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1031285476;
    st clrhash = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1031285476(h) {
  (reg h:*) -+> V { var h:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg C_clrhash_Ext:*, reg C_clrhash_Ext1:V, reg h1:*, reg h2:V, reg _External:cls, reg r4:V, reg invisible:cls, reg r5:V |
    mkenv;
    st h = h;
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf `.External`;
    base1 = ldf `.External` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang .External(C_clrhash_Ext, h)>);
    goto L0(r);
  L1(r3):
    invisible = ldf invisible in base;
    r5 = dyn invisible(r3);
    check L9() else D3();
  L4():
    C_clrhash_Ext = ld C_clrhash_Ext;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym C_clrhash_Ext>, <sym h>);
    goto L1(r2);
  D0():
    deopt 4 [C_clrhash_Ext];
  D3():
    deopt 11 [r5];
  L6():
    C_clrhash_Ext1 = force? C_clrhash_Ext;
    checkMissing(C_clrhash_Ext1);
    h1 = ld h;
    check L7() else D1();
  L9():
    goto L0(r5);
  D1():
    deopt 6 [h1];
  L7():
    h2 = force? h1;
    checkMissing(h2);
    _External = ldf `.External` in base;
    r4 = dyn _External(C_clrhash_Ext1, h2);
    check L8() else D2();
  D2():
    deopt 9 [r4];
  L8():
    goto L1(r4);
  }
}