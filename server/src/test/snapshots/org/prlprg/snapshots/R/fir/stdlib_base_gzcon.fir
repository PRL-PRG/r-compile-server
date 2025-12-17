fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2653718668;
    st gzcon = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2653718668(con, level, allowNonCompressed, text) {
  (reg con:*, reg level:*, reg allowNonCompressed:*, reg text:*) -+> V { var con:*, var level:*, reg level_isMissing:L, reg level_orDefault:*, var allowNonCompressed:*, reg allowNonCompressed_isMissing:L, reg allowNonCompressed_orDefault:*, var text:*, reg text_isMissing:L, reg text_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg con1:*, reg con2:V, reg level1:*, reg level2:V, reg allowNonCompressed1:*, reg allowNonCompressed2:V, reg text1:*, reg text2:V, reg gzcon:cls, reg r2:V |
    mkenv;
    st con = con;
    level_isMissing = missing.0(level);
    if level_isMissing then L0(6.0) else L0(level);
  L0(level_orDefault):
    st level = level_orDefault;
    allowNonCompressed_isMissing = missing.0(allowNonCompressed);
    if allowNonCompressed_isMissing then L1(TRUE) else L1(allowNonCompressed);
  L1(allowNonCompressed_orDefault):
    st allowNonCompressed = allowNonCompressed_orDefault;
    text_isMissing = missing.0(text);
    if text_isMissing then L2(FALSE) else L2(text);
  L2(text_orDefault):
    st text = text_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r1):
    popenv;
    return r1;
  L4():
    con1 = ld con;
    check L6() else D0();
  L5():
    r = dyn base(<lang gzcon(con, level, allowNonCompressed, text)>);
    goto L3(r);
  D0():
    deopt 2 [con1];
  L6():
    con2 = force? con1;
    checkMissing(con2);
    level1 = ld level;
    check L7() else D1();
  D1():
    deopt 4 [level1];
  L7():
    level2 = force? level1;
    checkMissing(level2);
    allowNonCompressed1 = ld allowNonCompressed;
    check L8() else D2();
  D2():
    deopt 6 [allowNonCompressed1];
  L8():
    allowNonCompressed2 = force? allowNonCompressed1;
    checkMissing(allowNonCompressed2);
    text1 = ld text;
    check L9() else D3();
  D3():
    deopt 8 [text1];
  L9():
    text2 = force? text1;
    checkMissing(text2);
    gzcon = ldf gzcon in base;
    r2 = dyn gzcon(con2, level2, allowNonCompressed2, text2);
    check L10() else D4();
  D4():
    deopt 11 [r2];
  L10():
    goto L3(r2);
  }
}