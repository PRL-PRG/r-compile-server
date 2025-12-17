fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3788461111;
    st gethash = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3788461111(h, key, nomatch) {
  (reg h:*, reg key:*, reg nomatch:*) -+> V { var h:*, var key:*, var nomatch:*, reg nomatch_isMissing:L, reg nomatch_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_gethash_Ext:*, reg C_gethash_Ext1:V, reg h1:*, reg h2:V, reg key1:*, reg key2:V, reg nomatch1:*, reg nomatch2:V, reg _External:cls, reg r2:V |
    mkenv;
    st h = h;
    st key = key;
    nomatch_isMissing = missing.0(nomatch);
    if nomatch_isMissing then L0(NULL) else L0(nomatch);
  L0(nomatch_orDefault):
    st nomatch = nomatch_orDefault;
    sym = ldf `.External`;
    base = ldf `.External` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    C_gethash_Ext = ld C_gethash_Ext;
    check L4() else D0();
  L3():
    r = dyn base(<sym C_gethash_Ext>, <sym h>, <sym key>, <sym nomatch>);
    goto L1(r);
  D0():
    deopt 2 [C_gethash_Ext];
  L4():
    C_gethash_Ext1 = force? C_gethash_Ext;
    checkMissing(C_gethash_Ext1);
    h1 = ld h;
    check L5() else D1();
  D1():
    deopt 4 [h1];
  L5():
    h2 = force? h1;
    checkMissing(h2);
    key1 = ld key;
    check L6() else D2();
  D2():
    deopt 6 [key1];
  L6():
    key2 = force? key1;
    checkMissing(key2);
    nomatch1 = ld nomatch;
    check L7() else D3();
  D3():
    deopt 8 [nomatch1];
  L7():
    nomatch2 = force? nomatch1;
    checkMissing(nomatch2);
    _External = ldf `.External` in base;
    r2 = dyn _External(C_gethash_Ext1, h2, key2, nomatch2);
    check L8() else D4();
  D4():
    deopt 11 [r2];
  L8():
    goto L1(r2);
  }
}