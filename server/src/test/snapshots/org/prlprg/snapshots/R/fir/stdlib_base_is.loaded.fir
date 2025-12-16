fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-264292407`;
    st `is.loaded` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-264292407`(symbol, PACKAGE, type) {
  (reg symbol:*, reg PACKAGE:*, reg type:*) -+> V { var symbol:*, var PACKAGE:*, reg PACKAGE_isMissing:L, reg PACKAGE_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg symbol1:*, reg symbol2:V, reg PACKAGE1:*, reg PACKAGE2:V, reg type1:*, reg type2:V, reg is_loaded:cls, reg r2:V |
    mkenv;
    st symbol = symbol;
    PACKAGE_isMissing = missing.0(PACKAGE);
    if PACKAGE_isMissing then L0("") else L0(PACKAGE);
  L0(PACKAGE_orDefault):
    st PACKAGE = PACKAGE_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L1("") else L1(type);
  L1(type_orDefault):
    st type = type_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    symbol1 = ld symbol;
    check L5() else D0();
  L4():
    r = dyn base(<lang is.loaded(symbol, PACKAGE, type)>);
    goto L2(r);
  D0():
    deopt 2 [symbol1];
  L5():
    symbol2 = force? symbol1;
    checkMissing(symbol2);
    PACKAGE1 = ld PACKAGE;
    check L6() else D1();
  D1():
    deopt 4 [PACKAGE1];
  L6():
    PACKAGE2 = force? PACKAGE1;
    checkMissing(PACKAGE2);
    type1 = ld type;
    check L7() else D2();
  D2():
    deopt 6 [type1];
  L7():
    type2 = force? type1;
    checkMissing(type2);
    is_loaded = ldf `is.loaded` in base;
    r2 = dyn is_loaded(symbol2, PACKAGE2, type2);
    check L8() else D3();
  D3():
    deopt 9 [r2];
  L8():
    goto L2(r2);
  }
}