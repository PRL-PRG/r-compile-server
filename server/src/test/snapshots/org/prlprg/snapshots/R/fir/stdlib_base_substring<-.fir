fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3375435952;
    st `substring<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3375435952(text, first, last, value) {
  (reg text:*, reg first:*, reg last:*, reg value:*) -+> V { var text:*, var first:*, var last:*, reg last_isMissing:L, reg last_orDefault:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg text1:*, reg text2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg first1:*, reg first2:V, reg as_integer:cls, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg last1:*, reg last2:V, reg as_integer1:cls, reg r7:V, reg value1:*, reg value2:V, reg substr__:cls, reg r8:V |
    mkenv;
    st text = text;
    st first = first;
    last_isMissing = missing.0(last);
    if last_isMissing then L0(1000000) else L0(last);
  L0(last_orDefault):
    st last = last_orDefault;
    st value = value;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    popenv;
    return r1;
  L4():
    text1 = ld text;
    check L6() else D0();
  L5():
    r = dyn base(<lang `substr<-`(text, as.integer(first), as.integer(last), value)>);
    goto L1(r);
  D0():
    deopt 2 [text1];
  L6():
    text2 = force? text1;
    checkMissing(text2);
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L2(r3):
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L7():
    first1 = ld first;
    check L9() else D1();
  L8():
    r2 = dyn base1(<sym first>);
    goto L2(r2);
  D1():
    deopt 6 [first1];
  L3(r6):
    value1 = ld value;
    check L15() else D5();
  L9():
    first2 = force? first1;
    checkMissing(first2);
    as_integer = ldf `as.integer` in base;
    r4 = dyn as_integer(first2);
    check L10() else D2();
  L11():
    last1 = ld last;
    check L13() else D3();
  L12():
    r5 = dyn base2(<sym last>);
    goto L3(r5);
  D2():
    deopt 9 [r4];
  D3():
    deopt 12 [last1];
  D5():
    deopt 16 [value1];
  L10():
    goto L2(r4);
  L13():
    last2 = force? last1;
    checkMissing(last2);
    as_integer1 = ldf `as.integer` in base;
    r7 = dyn as_integer1(last2);
    check L14() else D4();
  L15():
    value2 = force? value1;
    checkMissing(value2);
    substr__ = ldf `substr<-` in base;
    r8 = dyn substr__(text2, r3, r6, value2);
    check L16() else D6();
  D4():
    deopt 15 [r7];
  D6():
    deopt 19 [r8];
  L14():
    goto L3(r7);
  L16():
    goto L1(r8);
  }
}