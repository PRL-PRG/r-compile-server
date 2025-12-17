fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4026975254;
    st sethash = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4026975254(h, key, value) {
  (reg h:*, reg key:*, reg value:*) -+> V { var h:*, var key:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg C_sethash_Ext:*, reg C_sethash_Ext1:V, reg h1:*, reg h2:V, reg key1:*, reg key2:V, reg value1:*, reg value2:V, reg _External:cls, reg r4:V, reg invisible:cls, reg r5:V |
    mkenv;
    st h = h;
    st key = key;
    st value = value;
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
    r = dyn base(<lang .External(C_sethash_Ext, h, key, value)>);
    goto L0(r);
  L1(r3):
    invisible = ldf invisible in base;
    r5 = dyn invisible(r3);
    check L11() else D5();
  L4():
    C_sethash_Ext = ld C_sethash_Ext;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym C_sethash_Ext>, <sym h>, <sym key>, <sym value>);
    goto L1(r2);
  D0():
    deopt 4 [C_sethash_Ext];
  D5():
    deopt 15 [r5];
  L6():
    C_sethash_Ext1 = force? C_sethash_Ext;
    checkMissing(C_sethash_Ext1);
    h1 = ld h;
    check L7() else D1();
  L11():
    goto L0(r5);
  D1():
    deopt 6 [h1];
  L7():
    h2 = force? h1;
    checkMissing(h2);
    key1 = ld key;
    check L8() else D2();
  D2():
    deopt 8 [key1];
  L8():
    key2 = force? key1;
    checkMissing(key2);
    value1 = ld value;
    check L9() else D3();
  D3():
    deopt 10 [value1];
  L9():
    value2 = force? value1;
    checkMissing(value2);
    _External = ldf `.External` in base;
    r4 = dyn _External(C_sethash_Ext1, h2, key2, value2);
    check L10() else D4();
  D4():
    deopt 13 [r4];
  L10():
    goto L1(r4);
  }
}