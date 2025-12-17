fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3798765097;
    st `Sys.setlocale` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3798765097(category, locale) {
  (reg category:*, reg locale:*) -+> V { var category:*, reg category_isMissing:L, reg category_orDefault:*, var locale:*, reg locale_isMissing:L, reg locale_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg category1:*, reg category2:V, reg _LC_categories:*, reg _LC_categories1:V, reg match:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg category3:*, reg category4:V, reg is_na:cls, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg category5:*, reg category6:V, reg locale1:*, reg locale2:V, reg Sys_setlocale:cls, reg r10:V |
    mkenv;
    category_isMissing = missing.0(category);
    if category_isMissing then L0("LC_ALL") else L0(category);
  L0(category_orDefault):
    st category = category_orDefault;
    locale_isMissing = missing.0(locale);
    if locale_isMissing then L1("") else L1(locale);
  L1(locale_orDefault):
    st locale = locale_orDefault;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L2(r1):
    st category = r1;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L7():
    category1 = ld category;
    check L9() else D0();
  L8():
    r = dyn base(<sym category>, <sym .LC.categories>);
    goto L2(r);
  D0():
    deopt 2 [category1];
  L3(r4):
    c = `as.logical`(r4);
    if c then L16() else L4();
  L9():
    category2 = force? category1;
    checkMissing(category2);
    _LC_categories = ld `.LC.categories`;
    check L10() else D1();
  L12():
    category3 = ld category;
    check L14() else D3();
  L13():
    r3 = dyn base1(<sym category>);
    goto L3(r3);
  D1():
    deopt 4 [_LC_categories];
  D3():
    deopt 13 [category3];
  L4():
    goto L5();
  L5():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L10():
    _LC_categories1 = force? _LC_categories;
    checkMissing(_LC_categories1);
    match = ldf match in base;
    r2 = dyn match(category2, _LC_categories1, NA_INT, NULL);
    check L11() else D2();
  L14():
    category4 = force? category3;
    checkMissing(category4);
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(category4);
    check L15() else D4();
  L16():
    stop = ldf stop;
    check L17() else D5();
  D2():
    deopt 9 [r2];
  D4():
    deopt 16 [r5];
  D5():
    deopt 18 [];
  L6(r9):
    popenv;
    return r9;
  L11():
    goto L2(r2);
  L15():
    goto L3(r5);
  L17():
    r6 = dyn stop("invalid 'category' argument");
    check L18() else D6();
  L20():
    category5 = ld category;
    check L22() else D7();
  L21():
    r8 = dyn base2(<lang Sys.setlocale(category, locale)>);
    goto L6(r8);
  D6():
    deopt 20 [r6];
  D7():
    deopt 25 [category5];
  L18():
    goto L5();
  L22():
    category6 = force? category5;
    checkMissing(category6);
    locale1 = ld locale;
    check L23() else D8();
  D8():
    deopt 27 [locale1];
  L23():
    locale2 = force? locale1;
    checkMissing(locale2);
    Sys_setlocale = ldf `Sys.setlocale` in base;
    r10 = dyn Sys_setlocale(category6, locale2);
    check L24() else D9();
  D9():
    deopt 30 [r10];
  L24():
    goto L6(r10);
  }
}