fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1200090163;
    st `aperm.table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1200090163(a, perm, resize, `keep.class`, `...`) {
  (reg a:*, reg perm:*, reg resize:*, reg keep_class:*, reg ddd:dots) -+> V { var a:*, var perm:*, reg perm_isMissing:L, reg perm_orDefault:*, var resize:*, reg resize_isMissing:L, reg resize_orDefault:*, var `keep.class`:*, reg keep_class_isMissing:L, reg keep_class_orDefault:*, var `...`:dots?, reg aperm_default:cls, reg a1:*, reg a2:V, reg p:p(V +), reg perm1:*, reg perm2:V, reg p1:p(V +), reg resize1:*, reg resize2:V, reg p2:p(V +), reg r3:V, reg keep_class1:*, reg keep_class2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg a3:*, reg a4:V, reg class:cls, reg r6:V, reg l:*, reg class__:cls, reg r7:V, reg r9:*, reg r10:V |
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
    keep_class_isMissing = missing.0(keep_class);
    if keep_class_isMissing then L2(TRUE) else L2(keep_class);
  L2(keep_class_orDefault):
    st `keep.class` = keep_class_orDefault;
    st `...` = ddd;
    aperm_default = ldf `aperm.default`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      a1 = ld a;
      a2 = force? a1;
      checkMissing(a2);
      return a2;
    };
    p1 = prom<V +>{
      perm1 = ld perm;
      perm2 = force? perm1;
      checkMissing(perm2);
      return perm2;
    };
    p2 = prom<V +>{
      resize1 = ld resize;
      resize2 = force? resize1;
      checkMissing(resize2);
      return resize2;
    };
    r3 = dyn aperm_default[, , resize](p, p1, p2);
    check L7() else D1();
  D1():
    deopt 6 [r3];
  L7():
    st r = r3;
    keep_class1 = ld `keep.class`;
    check L8() else D2();
  D2():
    deopt 8 [keep_class1];
  L8():
    keep_class2 = force? keep_class1;
    checkMissing(keep_class2);
    c = `as.logical`(keep_class2);
    if c then L9() else L3();
  L3():
    goto L5();
  L5():
    r9 = ld r;
    check L17() else D7();
  L9():
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  D7():
    deopt 23 [r9];
  L4(r5):
    l = ld r;
    class__ = ldf `class<-`;
    check L14() else D5();
  L10():
    a3 = ld a;
    check L12() else D3();
  L11():
    r4 = dyn base(<sym a>);
    goto L4(r4);
  L17():
    r10 = force? r9;
    checkMissing(r10);
    popenv;
    return r10;
  D3():
    deopt 12 [a3];
  D5():
    deopt 17 [r5, l, r5];
  L12():
    a4 = force? a3;
    checkMissing(a4);
    class = ldf class in base;
    r6 = dyn class(a4);
    check L13() else D4();
  L14():
    r7 = dyn class__(l, NULL, r5);
    check L15() else D6();
  D4():
    deopt 15 [r6];
  D6():
    deopt 19 [r5, r7];
  L13():
    goto L4(r6);
  L15():
    st r = r7;
    goto L5();
  }
}