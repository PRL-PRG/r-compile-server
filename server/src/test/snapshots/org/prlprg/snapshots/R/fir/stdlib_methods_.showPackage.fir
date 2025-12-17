fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1548306783;
    st `.showPackage` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1548306783(className) {
  (reg className:*) -+> V { var className:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg c:L, reg c1:L, reg opt:*, reg opt1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg C_R_getClassFromCache:*, reg C_R_getClassFromCache1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r7:V, reg C_R_getClassFromCache4:V, reg r8:V, reg className1:*, reg className2:V, reg as_character:cls, reg r9:V, reg _classTable:*, reg _classTable1:V, reg vargs:dots, reg r10:V, reg is_list:cls, reg r11:V |
    mkenv;
    st className = className;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L9() else L1();
  L5():
    getOption = ldf getOption;
    check L7() else D0();
  L6():
    r = dyn base(<lang `<-`(opt, getOption("showPackageForClass"))>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1():
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L7():
    r2 = dyn getOption("showPackageForClass");
    check L8() else D1();
  L9():
    opt = ld opt;
    check L10() else D2();
  D1():
    deopt 4 [r2];
  D2():
    deopt 7 [opt];
  L2(r4):
    popenv;
    return r4;
  L8():
    st opt = r2;
    c = `is.logical`(r2);
    goto L0(c);
  L10():
    opt1 = force? opt;
    checkMissing(opt1);
    popenv;
    return opt1;
  L12():
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L13():
    r3 = dyn base1(<lang .Call(C_R_getClassFromCache, as.character(className), .classTable)>);
    goto L2(r3);
  L3(r6):
    is_list = ldf `is.list` in base;
    r11 = dyn is_list(r6);
    check L22() else D7();
  L14():
    C_R_getClassFromCache = ld C_R_getClassFromCache;
    check L16() else D3();
  L15():
    r5 = dyn base2(<sym C_R_getClassFromCache>, <lang as.character(className)>, <sym .classTable>);
    goto L3(r5);
  D3():
    deopt 12 [C_R_getClassFromCache];
  D7():
    deopt 22 [r11];
  L16():
    C_R_getClassFromCache1 = force? C_R_getClassFromCache;
    checkMissing(C_R_getClassFromCache1);
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L17() else L18();
  L22():
    goto L2(r11);
  L4(C_R_getClassFromCache4, r8):
    _classTable = ld `.classTable`;
    check L21() else D6();
  L17():
    className1 = ld className;
    check L19() else D4();
  L18():
    r7 = dyn base3(<sym className>);
    goto L4(C_R_getClassFromCache1, r7);
  D4():
    deopt 15 [C_R_getClassFromCache1, className1];
  D6():
    deopt 18 [C_R_getClassFromCache4, r8, _classTable];
  L19():
    className2 = force? className1;
    checkMissing(className2);
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(className2);
    check L20() else D5();
  L21():
    _classTable1 = force? _classTable;
    checkMissing(_classTable1);
    vargs = dots[r8, _classTable1];
    r10 = `.Call`(C_R_getClassFromCache4, vargs, <missing>);
    goto L3(r10);
  D5():
    deopt 18 [C_R_getClassFromCache1, r9];
  L20():
    goto L4(C_R_getClassFromCache1, r9);
  }
}