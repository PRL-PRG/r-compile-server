fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner240890467;
    st maphash = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner240890467(h, FUN) {
  (reg h:*, reg FUN:*) -+> V { var h:*, var FUN:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg C_maphash_Ext:*, reg C_maphash_Ext1:V, reg h1:*, reg h2:V, reg FUN1:*, reg FUN2:V, reg _External:cls, reg r4:V, reg invisible:cls, reg r5:V |
    mkenv;
    st h = h;
    st FUN = FUN;
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
    r = dyn base(<lang .External(C_maphash_Ext, h, FUN)>);
    goto L0(r);
  L1(r3):
    invisible = ldf invisible in base;
    r5 = dyn invisible(r3);
    check L10() else D4();
  L4():
    C_maphash_Ext = ld C_maphash_Ext;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym C_maphash_Ext>, <sym h>, <sym FUN>);
    goto L1(r2);
  D0():
    deopt 4 [C_maphash_Ext];
  D4():
    deopt 13 [r5];
  L6():
    C_maphash_Ext1 = force? C_maphash_Ext;
    checkMissing(C_maphash_Ext1);
    h1 = ld h;
    check L7() else D1();
  L10():
    goto L0(r5);
  D1():
    deopt 6 [h1];
  L7():
    h2 = force? h1;
    checkMissing(h2);
    FUN1 = ld FUN;
    check L8() else D2();
  D2():
    deopt 8 [FUN1];
  L8():
    FUN2 = force? FUN1;
    checkMissing(FUN2);
    _External = ldf `.External` in base;
    r4 = dyn _External(C_maphash_Ext1, h2, FUN2);
    check L9() else D3();
  D3():
    deopt 11 [r4];
  L9():
    goto L1(r4);
  }
}