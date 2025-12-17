fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.newExternalptr` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_R_externalptr_prototype_object:*, reg C_R_externalptr_prototype_object1:V, reg vargs:dots, reg r2:V |
    mkenv;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_R_externalptr_prototype_object = ld C_R_externalptr_prototype_object;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_R_externalptr_prototype_object>);
    goto L0(r);
  D0():
    deopt 1 [C_R_externalptr_prototype_object];
  L3():
    C_R_externalptr_prototype_object1 = force? C_R_externalptr_prototype_object;
    checkMissing(C_R_externalptr_prototype_object1);
    vargs = dots[];
    r2 = `.Call`(C_R_externalptr_prototype_object1, vargs, <missing>);
    goto L0(r2);
  }
}