fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1501270050;
    st `Sys.getlocale` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner1501270050(category) {
  (reg category:*) -+> V { var category:*, reg category_isMissing:L, reg category_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg category1:*, reg category2:V, reg _LC_categories:*, reg _LC_categories1:V, reg match:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg category3:*, reg category4:V, reg is_na:cls, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg category5:*, reg category6:V, reg Sys_getlocale:cls, reg r10:V |
    mkenv;
    category_isMissing = missing.0(category);
    if category_isMissing then L0("LC_ALL") else L0(category);
  L0(category_orDefault):
    st category = category_orDefault;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r1):
    st category = r1;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L6():
    category1 = ld category;
    check L8() else D0();
  L7():
    r = dyn base(<sym category>, <sym .LC.categories>);
    goto L1(r);
  D0():
    deopt 2 [category1];
  L2(r4):
    c = `as.logical`(r4);
    if c then L15() else L3();
  L8():
    category2 = force? category1;
    checkMissing(category2);
    _LC_categories = ld `.LC.categories`;
    check L9() else D1();
  L11():
    category3 = ld category;
    check L13() else D3();
  L12():
    r3 = dyn base1(<sym category>);
    goto L2(r3);
  D1():
    deopt 4 [_LC_categories];
  D3():
    deopt 13 [category3];
  L3():
    goto L4();
  L4():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L9():
    _LC_categories1 = force? _LC_categories;
    checkMissing(_LC_categories1);
    match = ldf match in base;
    r2 = dyn match(category2, _LC_categories1, NA_INT, NULL);
    check L10() else D2();
  L13():
    category4 = force? category3;
    checkMissing(category4);
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(category4);
    check L14() else D4();
  L15():
    stop = ldf stop;
    check L16() else D5();
  D2():
    deopt 9 [r2];
  D4():
    deopt 16 [r5];
  D5():
    deopt 18 [];
  L5(r9):
    popenv;
    return r9;
  L10():
    goto L1(r2);
  L14():
    goto L2(r5);
  L16():
    r6 = dyn stop("invalid 'category' argument");
    check L17() else D6();
  L19():
    category5 = ld category;
    check L21() else D7();
  L20():
    r8 = dyn base2(<lang Sys.getlocale(category)>);
    goto L5(r8);
  D6():
    deopt 20 [r6];
  D7():
    deopt 25 [category5];
  L17():
    goto L4();
  L21():
    category6 = force? category5;
    checkMissing(category6);
    Sys_getlocale = ldf `Sys.getlocale` in base;
    r10 = dyn Sys_getlocale(category6);
    check L22() else D8();
  D8():
    deopt 28 [r10];
  L22():
    goto L5(r10);
  }
}