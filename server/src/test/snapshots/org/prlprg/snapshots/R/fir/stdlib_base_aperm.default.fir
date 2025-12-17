fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4231209718;
    st `aperm.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4231209718(a, perm, resize, `...`) {
  (reg a:*, reg perm:*, reg resize:*, reg ddd:dots) -+> V { var a:*, var perm:*, reg perm_isMissing:L, reg perm_orDefault:*, var resize:*, reg resize_isMissing:L, reg resize_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg a1:*, reg a2:V, reg perm1:*, reg perm2:V, reg resize1:*, reg resize2:V, reg aperm:cls, reg r2:V |
    mkenv;
    st a = a;
    perm_isMissing = missing.0(perm);
    if perm_isMissing then L0(NULL) else L0(perm);
  L0(perm_orDefault):
    st perm = perm_orDefault;
    resize_isMissing = missing.0(resize);
    if resize_isMissing then L1(TRUE) else L1(resize);
  L1(resize_orDefault):
    st resize = resize_orDefault;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    a1 = ld a;
    check L5() else D0();
  L4():
    r = dyn base(<lang aperm(a, perm, resize)>);
    goto L2(r);
  D0():
    deopt 2 [a1];
  L5():
    a2 = force? a1;
    checkMissing(a2);
    perm1 = ld perm;
    check L6() else D1();
  D1():
    deopt 4 [perm1];
  L6():
    perm2 = force? perm1;
    checkMissing(perm2);
    resize1 = ld resize;
    check L7() else D2();
  D2():
    deopt 6 [resize1];
  L7():
    resize2 = force? resize1;
    checkMissing(resize2);
    aperm = ldf aperm in base;
    r2 = dyn aperm(a2, perm2, resize2);
    check L8() else D3();
  D3():
    deopt 9 [r2];
  L8():
    goto L2(r2);
  }
}